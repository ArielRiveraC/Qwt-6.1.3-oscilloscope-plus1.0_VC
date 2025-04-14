/*****************************************************************************
 * Qwt Examples - translation to vc++ - qwt-6.1.3
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#include "SamplingThread.h"
#include "SignalData.h"

#include <qwt_math.h>
#include <qmath.h>

SamplingThread::SamplingThread( QObject* parent )
    : QwtSamplingThread( parent )
    , m_frequency( 5.0 )
    , m_amplitude( 20.0 )
{
}

void SamplingThread::setFrequency( double frequency )
{
    m_frequency = frequency;
}

double SamplingThread::frequency() const
{
    return m_frequency;
}

void SamplingThread::setAmplitude( double amplitude )
{
    m_amplitude = amplitude;
}

double SamplingThread::amplitude() const
{
    return m_amplitude;
}

void SamplingThread::sample( double elapsed )
{
    if ( m_frequency > 0.0 )
    {
        const QPointF s( elapsed, value( elapsed ) );
        SignalData::instance().append( s );
    }
}

double SamplingThread::value( double timeStamp ) const
{
    const double period = 1.0 / m_frequency;

    const double x = std::fmod( timeStamp, period );
    const double v = m_amplitude * qFastSin( x / period * 2 * M_PI );

    return v;
}
