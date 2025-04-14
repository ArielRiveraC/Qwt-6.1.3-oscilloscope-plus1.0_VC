#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QBuffer>
#include <QPushButton>
#include <QMessageBox>


class ImageWidget : public QWidget
{
    Q_OBJECT

public:
    //explicit ImageWidget(QWidget *parent = 0);
	ImageWidget(QWidget* = NULL);

    void loadfileImage(QBuffer*, QString);
    void handle_savebutton();
    void handle_closebutton();

private:
    QLabel* d_imagelabel;
    QLabel* d_textlabel;
    QString d_namefile;
    QPushButton* d_savebutton;
    QPushButton* d_closebutton;
    QPushButton* d_previousbutton;
    QPushButton* d_nextbutton;
    QBuffer* d_imageqbuffer;
};

#endif // IMAGEWIDGET_H
