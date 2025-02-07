#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QPaintEvent>
#include <QPainter>
#include <QtMultimedia>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    resize(1000,700);

    player = new QMediaPlayer(this);
    QAudioOutput *audioOutput = new QAudioOutput(player);
    player->setAudioOutput(audioOutput);

    label_volume = new QLabel("当前音量："+QString("%1").arg(ui->verticalSlider->value()),this);
    label_volume->setFixedWidth(80);
    ui->statusBar->addPermanentWidget(label_volume);

    label_loop = new QLabel("当前模式：列表循环",this);
    label_loop->setFixedWidth(200);
    ui->statusBar->addWidget(label_loop);

    ui->statusBar->setStyleSheet(QString("QStatusBar::item{border:0px}"));

    //播放状态改变
    connect(player,&QMediaPlayer::playingChanged,this,[&](bool playing){
        ui->pushButton_start->setChecked(!playing);  //播放按钮状态
        ui->horizontalSlider->setEnabled(true);  //设置进度条可拖拽
    });

    //播放文件改变
    connect(player,&QMediaPlayer::sourceChanged,this,[&](const QUrl &media){
        ui->label_info->setText(media.fileName());  //设置歌曲名称
    });

    //源数据变化
    connect(player,&QMediaPlayer::metaDataChanged,this,[&](){
        QMediaMetaData metaData = player->metaData();
        QVariant metaImg = metaData.value(QMediaMetaData::ThumbnailImage);
        if(metaImg.isValid()){
            QImage img = metaImg.value<QImage>();
            QPixmap pix = QPixmap::fromImage(img);  //设置对应图片
            ui->label_pic->setPixmap(pix.scaledToWidth(ui->widget->width()));
        }
        else ui->label_pic->clear();
    });

    //播放源时长发生变化
    connect(player,&QMediaPlayer::durationChanged,this,[&](qint64 duration){
        ui->horizontalSlider->setMaximum(duration);
        int sec = duration/1000;
        int min = sec/60;
        sec %= 60;
        m_durationTime = QTime(0,min,sec).toString("mm:ss");
        ui->label_time->setText(m_positionTime+"/"+m_durationTime);
    });

    //播放位置发生变化
    connect(player,&QMediaPlayer::positionChanged,this,[&](qint64 position){
        if(ui->horizontalSlider->isSliderDown())
            return;
        ui->horizontalSlider->setSliderPosition(position);
        int sec = position/1000;
        int min = sec/60;
        sec %= 60;
        m_positionTime = QTime(0,min,sec).toString("mm:ss");
        ui->label_time->setText(m_positionTime+"/"+m_durationTime);
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pixmap(":/bk");
    pixmap = pixmap.scaled(size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter.drawPixmap(0,0,pixmap);

    return QMainWindow::paintEvent(event);
}

void MainWindow::on_pushButton_add_clicked()
{
    QString curPath = QDir::currentPath();
    QString title = "选择音频文件";
    QString filter = "音频文件(*.mp3)";
    QStringList fileList = QFileDialog::getOpenFileNames(this,title,curPath,filter);
    if(fileList.size()<1) return;

    for(int i=0;i<fileList.size();i++){
        QString aFile = fileList[i];
        QFileInfo info(aFile);
        QListWidgetItem *item = new QListWidgetItem(info.fileName());
        item->setData(Qt::UserRole,QUrl::fromLocalFile(aFile));
        ui->listWidget->addItem(item);
    }
}


void MainWindow::on_pushButton_start_clicked(bool check)
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    auto url = item->data(Qt::UserRole).toUrl();
    if(player->source()!=url)
        player->setSource(url);

    if(!check){
        ui->pushButton_start->setIcon(QIcon(":/D:/Apps/qIcon/pause.png"));
        player->play();
    }
    else{
        ui->pushButton_start->setIcon(QIcon(":/D:/Apps/qIcon/play.png"));
        player->pause();
    }
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_front->setEnabled(true);
    ui->pushButton_back->setEnabled(true);
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    auto url = item->data(Qt::UserRole).toUrl();
    player->setSource(url);
    ui->pushButton_start->setIcon(QIcon(":/D:/Apps/qIcon/pause.png"));
    player->play();
}


void MainWindow::on_pushButton_volume_clicked(bool checked)
{
    ui->verticalSlider->setVisible(checked);
}


void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    player->setPosition(position);
}


void MainWindow::on_horizontalSlider_sliderPressed()
{
    player->setPosition(ui->horizontalSlider->value());
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if(m_positionTime == m_durationTime){
        if(isLoop)
            player->setPosition(0);
        else
            ui->pushButton_back->click();
    }
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    player->audioOutput()->setVolume(value/100.0);
    label_volume->setText("当前音量："+QString("%1").arg(ui->verticalSlider->value()));
    if(ui->verticalSlider->value() == 0)
        ui->pushButton_volume->setIcon(QIcon(":/D:/Apps/qIcon/静音.png"));
    else
        ui->pushButton_volume->setIcon(QIcon(":/D:/Apps/qIcon/音量.png"));
}


void MainWindow::on_pushButton_front_clicked()
{
    int curRow = ui->listWidget->currentRow();
    if(curRow == 0)
        curRow = ui->listWidget->count()-1;
    else
        curRow--;
    ui->listWidget->setCurrentRow(curRow);
    auto url = ui->listWidget->item(curRow)->data(Qt::UserRole).toUrl();
    player->setSource(url);
    player->play();
}


void MainWindow::on_pushButton_back_clicked()
{
    int curRow = ui->listWidget->currentRow();
    if(curRow == ui->listWidget->count()-1)
        curRow = 0;
    else
        curRow++;
    ui->listWidget->setCurrentRow(curRow);
    auto url = ui->listWidget->item(curRow)->data(Qt::UserRole).toUrl();
    player->setSource(url);
    player->play();
}


void MainWindow::on_pushButton_mode_clicked(bool checked)
{
    if(checked){
        label_loop->setText("当前模式：单曲循环");
        ui->pushButton_mode->setIcon(QIcon(":/D:/Apps/qIcon/单曲循环.png"));
        isLoop = true;
    }
    else{
        label_loop->setText("当前模式：列表循环");
        ui->pushButton_mode->setIcon(QIcon(":/D:/Apps/qIcon/列表循环.png"));
        isLoop = false;
    }
}


