#ifndef IMAGEWIDGET_CPP
#define IMAGEWIDGET_CPP

#include "ImageWidget.h"

//#include <QHBoxLayout>
#include <qlayout.h>
#include <qfiledialog.h>

ImageWidget::ImageWidget(QWidget *parent) :
    QWidget(parent)
{
    setStyleSheet( "QWidget{ background-color : "
                   "rgba( 160, 160, 160, 255); border-radius : 7px;  }" );

    d_imagelabel = new QLabel(this);
    d_textlabel = new QLabel(this);

    d_previousbutton = new QPushButton("Previous", this);
    d_previousbutton->setStyleSheet("color:red;font-weight:bold");
    d_savebutton = new QPushButton("Save", this);
    d_savebutton->setStyleSheet("color:red;font-weight:bold");
    d_closebutton = new QPushButton("Close", this);
    d_closebutton->setStyleSheet("color:red;font-weight:bold");
    d_nextbutton = new QPushButton("Next", this);
    d_nextbutton->setStyleSheet("color:red;font-weight:bold");

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(d_textlabel);
    layout->addWidget(d_imagelabel);
    QHBoxLayout* layout1 = new QHBoxLayout();
    layout1->addWidget(d_previousbutton, 50);
    layout1->addWidget(d_savebutton, 50);
    layout1->addWidget(d_closebutton, 50);
    layout1->addWidget(d_nextbutton, 50);
    layout->addLayout(layout1);
    setLayout(layout);

    connect( d_savebutton, &QPushButton::released, this,
             &ImageWidget::handle_savebutton);
    connect( d_closebutton, &QPushButton::released, this,
             &ImageWidget::handle_closebutton);
}

void ImageWidget::loadfileImage(QBuffer* imagebuffer, QString imagefilename)
{
    QImage image;

    d_namefile = imagefilename;
    d_imageqbuffer = imagebuffer;
    image.loadFromData(d_imageqbuffer->data(), nullptr);
    d_imagelabel->setPixmap(QPixmap::fromImage(image));
    d_imagelabel->adjustSize();
    d_textlabel->setText("File name: " + d_namefile);
}

void ImageWidget::handle_savebutton()
{
    QImage image;
    image.loadFromData(d_imageqbuffer->data(), nullptr);

    QString fileName = QFileDialog::getSaveFileName( this, tr("Save Image"),
                       d_namefile, tr("Images (*.png);;All Files (*)"));

    if (!fileName.isEmpty()) {
        if (image.save(fileName)) {
            QMessageBox::information(this, tr("Image Saved"),
                                  tr("Image has been saved successfully!"));
        } else {
            QMessageBox::warning(this, tr("Image Save Failed"),
                              tr("Failed to save the image."));
        }
    }
}

void ImageWidget::handle_closebutton()
{
      this->close();
}

#endif // IMAGEWIDGET_CPP
