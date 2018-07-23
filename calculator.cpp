#include "calculator.h"
#include "ui_calculator.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

double memvar = 0.0;
double memvar_minus = 0.0;
double memvar_plus = 0.0;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for (int i = 0; i < 10; ++i) {
        QString butName = "Btn" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect (numButtons[i], SIGNAL(released()), this,
                 SLOT(NumPressed()));
    }
    connect (ui->BtnPlus, SIGNAL(released()), this,
             SLOT(MathButtonPressed()));
    connect (ui->BtnMinus, SIGNAL(released()), this,
             SLOT(MathButtonPressed()));
    connect (ui->BtnMult, SIGNAL(released()), this,
             SLOT(MathButtonPressed()));
    connect (ui->BtnDiv, SIGNAL(released()), this,
             SLOT(MathButtonPressed()));
    connect (ui->BtnEqual, SIGNAL(released()), this, //button names in Design
             SLOT(EqualButton())); //private slots (functions) in calculator header
    connect (ui->BtnSign, SIGNAL(released()), this,
             SLOT(ChangeSign()));
    connect (ui->BtnAC, SIGNAL(released()), this,
             SLOT(AC()));
    connect (ui->BtnMem, SIGNAL(released()), this,
             SLOT(M()));
    connect (ui->BtnMemMinus, SIGNAL(released()), this,
             SLOT(M_minus()));
    connect (ui->BtnMemPlus, SIGNAL(released()), this,
             SLOT(M_plus()));
}

Calculator::~Calculator() //deconstructor //destrutor
{
    delete ui;
}

void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)) {
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Calculator::MathButtonPressed() {
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        multTrigger = true;
    } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    } else {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculator::EqualButton() {
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if (addTrigger || subTrigger || multTrigger || divTrigger) {
        if (addTrigger) {
            solution = calcVal + dblDisplayVal;
        } else if (subTrigger) {
            solution = calcVal - dblDisplayVal;
        } else if (multTrigger) {
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeSign() {
    QString displayVal = ui->Display->text();
    QRegExp reg("[i]?[0-9]*");
    QRegExp reg_neg("[i]?[-0-9]*");
    if (reg.exactMatch(displayVal)) {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
    else if (reg_neg.exactMatch(displayVal)) {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = fabs (dblDisplayVal);
        ui->Display->setText(QString::number(dblDisplayValSign));
    } //(-) to (+) function
}

void Calculator::AC() {
    QString displayVal = ui->Display->text();
    ui->Display->setText("0");
    memvar = 0.0;
}

void Calculator::M() {
    ui->Display->setText(QString::number(memvar));
}

void Calculator::M_minus() {
    QString displayVal = ui->Display->text();
    memvar_minus = memvar - displayVal.toDouble();
    memvar = memvar_minus;
}

void Calculator::M_plus() {
    QString displayVal = ui->Display->text();
    memvar_plus = memvar + displayVal.toDouble();
    memvar = memvar_plus;
}
