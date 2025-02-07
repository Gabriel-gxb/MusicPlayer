#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia/qmediaplayer.h>

QT_BEGIN_NAMESPACE

class QLabel;
class QListWidgetItem;

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QMediaPlayer *player;
    bool isLoop = false;

    QLabel *label_volume;
    QLabel *label_loop;

    QString m_durationTime;
    QString m_positionTime;

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;

private slots:
    void on_pushButton_add_clicked();
    void on_pushButton_start_clicked(bool check);
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_pushButton_volume_clicked(bool checked);
    void on_horizontalSlider_sliderMoved(int position);
    void on_horizontalSlider_sliderPressed();
    void on_verticalSlider_valueChanged(int value);
    void on_pushButton_front_clicked();
    void on_pushButton_back_clicked();
    void on_pushButton_mode_clicked(bool checked);
    void on_horizontalSlider_valueChanged(int value);
};

#endif // MAINWINDOW_H
