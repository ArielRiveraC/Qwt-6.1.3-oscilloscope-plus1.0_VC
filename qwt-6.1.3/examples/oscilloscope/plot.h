/*****************************************************************************
 * Qwt Examples - translation to vc++ - qwt-6.1.3
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#pragma once

#include <qwt_plot.h>
#include <QVector>
#include <QBuffer>
#include <qwt_interval.h>
#include <QElapsedTimer>

class WheelBox;
class QwtPlotCurve;
class QwtPlotMarker;
class QwtPlotDirectPainter;
class QwtPlotLegendItem;

class Plot : public QwtPlot
{
    Q_OBJECT

  public:
    Plot( QWidget* = NULL );
    virtual ~Plot();

    void start();
    virtual void replot();

    virtual bool eventFilter( QObject*, QEvent* );

    void setColorCurve(QColor color);
    void setCurveTitle(QString);
    bool setStartTimer();

  public Q_SLOTS:
    void setIntervalLength( double );
    void updateItemLegend(bool);
    void getplotScreenShot(int, int);
    QBuffer* getimagefromqbuffer(int);
    WheelBox* getLevelWheel();

  protected:
    virtual void showEvent( QShowEvent* );
    virtual void resizeEvent( QResizeEvent* );
    virtual void timerEvent( QTimerEvent* );

  private Q_SLOTS:
    void scrollLeftAxis( double );

  private:
    void updateCurve();
    void incrementInterval();

    QwtPlotMarker* m_origin;
    QwtPlotCurve* m_curve;
    WheelBox* m_levelWheel;
    QwtPlotLegendItem* m_legendItem;
    bool m_isDirty;

    QBuffer* m_qbuffer;
    QVector<QBuffer*>* m_qvectorqbuffer;

    int m_paintedPoints;

    QwtPlotDirectPainter* m_directPainter;

    QwtInterval m_interval;
    int m_timerId;

    QElapsedTimer m_elapsedTimer;
};
