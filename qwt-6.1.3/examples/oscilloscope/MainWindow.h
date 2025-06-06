/*****************************************************************************
 * Qwt Examples - translation to vc++ - qwt-6.1.3
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#pragma once

#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QDateTime>
#include <QListWidget>

class Plot;
class Knob;
class WheelBox;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow( QWidget * = NULL );

    void start();

    double amplitude() const;
    double frequency() const;
    double signalInterval() const;

    void handle_Stopbutton();
    void handle_Capturebutton();
    void handle_ChangeColorbutton();
    void handle_legendItem_checkBox();
    void handle_ItemDoubleClicked();
    void update_Curvetitle();

  Q_SIGNALS:
    void amplitudeChanged( double );
    void frequencyChanged( double );
    void signalIntervalChanged( double );

  private:
    bool m_ispause = false;
    Knob* m_frequencyKnob;
    Knob* m_amplitudeKnob;
    WheelBox* m_timerWheel;
    WheelBox* m_intervalWheel;
    QPushButton* m_Stopbutton;
    QPushButton* m_Capturebutton;
    QPushButton* m_ChangeColorbutton;
    QCheckBox* m_legendItem_checkBox;
    QListWidget* m_captureListWidget;

    Plot* m_plot;
};
