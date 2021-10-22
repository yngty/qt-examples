#include "calculator.h"
#include "button.h"

#include <QtWidgets>

Calculator::Calculator(QWidget *parent)
    : QWidget (parent)
    , display(new QLineEdit(this))
{
    setWindowTitle(tr("calculator"));

    display->setAlignment(Qt::AlignRight);

    for (int i = 0; i < NumDigitButtons; ++i) {
        digitButtons[i] = createButton(QString::number(i), SLOT(digitClicked()));
    }

    Button *backspaceButton = createButton(tr("Backspace"), SLOT(backspaceClicked()));
    Button *clearButton = createButton(tr("Clear"), SLOT(clear()));
    Button *clearAllButton = createButton(tr("Clear All"), SLOT(clearAll()));

    Button *clearMemoryButton = createButton(tr("MC"), SLOT(clearMemory()));
    Button *readMemoryButton = createButton(tr("MR"), SLOT(readMemory()));
    Button *setMemoryButton = createButton(tr("MS"), SLOT(setMemory()));
    Button *addToMemoryButton = createButton(tr("M+"), SLOT(addToMemory()));

    Button *divisionButton = createButton(tr("\303\267"), SLOT(multiplicativeOperatorClicked()));
    Button *timesButton = createButton(tr("\303\227"), SLOT(multiplicativeOperatorClicked()));
    Button *minusButton = createButton(tr("-"), SLOT(additiveOperatorClicked()));
    Button *plusButton = createButton(tr("+"), SLOT(additiveOperatorClicked()));

    Button *squareRootButton = createButton(tr("Sqrt"), SLOT(unaryOperatorClicked()));
    Button *powerButton = createButton(tr("x\302\262"), SLOT(unaryOperatorClicked()));
    Button *reciprocalButton = createButton(tr("1/x"), SLOT(unaryOperatorClicked()));
    Button *equalButton = createButton(tr("="), SLOT(equalClicked()));

    QGridLayout *mainLayout = new QGridLayout(this);


    mainLayout->addWidget(display,0 , 0, 1, 6);
    mainLayout->addWidget(backspaceButton, 1,0, 1,2);
    mainLayout->addWidget(clearButton, 1, 2, 1, 2);
    mainLayout->addWidget(clearAllButton, 1, 4, 1, 2);

    mainLayout->addWidget(clearMemoryButton, 2, 0);
    mainLayout->addWidget(readMemoryButton, 3, 0);
    mainLayout->addWidget(setMemoryButton, 4, 0);
    mainLayout->addWidget(addToMemoryButton, 5, 0);

    for (int i = 1; i < NumDigitButtons; ++i) {
        int row = ((9-i) / 3) + 2;
        int column = ((i-1) % 3) + 1;
        mainLayout->addWidget(digitButtons[i], row, column);
    }

    mainLayout->addWidget(digitButtons[0], 5, 1);

    setLayout(mainLayout);
}

void Calculator::digitClicked()
{

}

void Calculator::unaryOperatorClicked()
{

}

void Calculator::additiveOperatorClicked()
{

}

void Calculator::multiplicativeOperatorClicked()
{

}

void Calculator::equalClicked()
{

}

void Calculator::pointClicked()
{

}

void Calculator::changeSignClicked()
{

}

void Calculator::backspaceClicked()
{

}

void Calculator::clear()
{

}

void Calculator::clearAll()
{
    display->setText("0");
}

void Calculator::clearMemory()
{

}

void Calculator::readMemory()
{

}

void Calculator::setMemory()
{

}

void Calculator::addToMemory()
{

}

Button *Calculator::createButton(const QString &text, const char *member)
{
    Button *button = new Button(text);
    connect(button, SIGNAL(clicked()), this, member);
    return button;
}
