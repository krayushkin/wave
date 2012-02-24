#include <QtGui/QApplication>
#include "wavewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WaveWindow w;
    w.show();
    
    return a.exec();
}
