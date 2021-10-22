#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

class Button;
class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);

private slots:
    void digitClicked();
    void unaryOperatorClicked();
    void additiveOperatorClicked();
    void multiplicativeOperatorClicked();
    void equalClicked();
    void pointClicked();
    void changeSignClicked();
    void backspaceClicked();
    void clear();
    void clearAll();
    void clearMemory();
    void readMemory();
    void setMemory();
    void addToMemory();
private:
    Button *createButton(const QString& text, const char *member);
private:
    QLineEdit *display {nullptr};

    enum { NumDigitButtons = 10 };
    Button *digitButtons[NumDigitButtons];


};

#endif // WINDOW_H
