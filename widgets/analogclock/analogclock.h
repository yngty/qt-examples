#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class AnalogClock : public QWidget
{
    Q_OBJECT

public:
    explicit AnalogClock(QWidget *parent = nullptr);

protected:
    virtual void paintEvent(QPaintEvent *event) override;
};

#endif // WINDOW_H
