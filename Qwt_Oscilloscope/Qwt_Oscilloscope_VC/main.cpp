
#include <QtWidgets/QApplication>

#include "../../qwt-6.1.3/examples/oscilloscope/mainwindow.h"
#include "../../qwt-6.1.3/examples/oscilloscope/samplingThread.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	app.setPalette(Qt::darkGray);

	MainWindow window;
	//window.resize(800, 400);
	window.resize(1200, 400);

	SamplingThread samplingThread;
	samplingThread.setFrequency(window.frequency());
	samplingThread.setAmplitude(window.amplitude());
	samplingThread.setInterval(window.signalInterval());

	window.connect(&window, SIGNAL(frequencyChanged(double)),
		&samplingThread, SLOT(setFrequency(double)));
	window.connect(&window, SIGNAL(amplitudeChanged(double)),
		&samplingThread, SLOT(setAmplitude(double)));
	window.connect(&window, SIGNAL(signalIntervalChanged(double)),
		&samplingThread, SLOT(setInterval(double)));

	window.show();

	samplingThread.start();
	window.start();

	bool ok = app.exec();

	samplingThread.stop();
	samplingThread.wait(1000);

	return ok;
}
