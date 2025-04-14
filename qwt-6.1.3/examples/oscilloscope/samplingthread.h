/*****************************************************************************
 * Qwt Examples - translation to vc++ - qwt-6.1.3
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#pragma once

#include <qwt_sampling_thread.h>

class SamplingThread : public QwtSamplingThread
{
    Q_OBJECT

  public:
    SamplingThread( QObject* parent = NULL );

    double frequency() const;
    double amplitude() const;

  public Q_SLOTS:
    void setAmplitude( double );
    void setFrequency( double );

  protected:
    virtual void sample( double elapsed ); //QWT_OVERRIDE;

  private:
    virtual double value( double timeStamp ) const;

    double m_frequency;
    double m_amplitude;
};
