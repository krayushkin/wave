#ifndef WAVEWINDOW_H
#define WAVEWINDOW_H

#include <QMainWindow>

namespace Ui {
class WaveWindow;
}

class WaveWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WaveWindow(QWidget *parent = 0);
    ~WaveWindow();
    
private:
    Ui::WaveWindow *ui;
};

#endif // WAVEWINDOW_H
