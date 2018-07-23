/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Btn1;
    QPushButton *Btn7;
    QPushButton *Btn9;
    QPushButton *BtnDiv;
    QPushButton *Btn8;
    QPushButton *BtnMemPlus;
    QPushButton *BtnMemMinus;
    QPushButton *Btn4;
    QPushButton *Btn6;
    QPushButton *BtnMult;
    QPushButton *Btn5;
    QPushButton *BtnAC;
    QPushButton *Btn2;
    QPushButton *Btn3;
    QPushButton *BtnPlus;
    QPushButton *BtnMem;
    QPushButton *Btn0;
    QPushButton *BtnSign;
    QPushButton *BtnMinus;
    QPushButton *BtnEqual;
    QLineEdit *Display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(400, 300);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Btn1 = new QPushButton(centralWidget);
        Btn1->setObjectName(QStringLiteral("Btn1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Btn1->sizePolicy().hasHeightForWidth());
        Btn1->setSizePolicy(sizePolicy);
        Btn1->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn1, 3, 0, 1, 1);

        Btn7 = new QPushButton(centralWidget);
        Btn7->setObjectName(QStringLiteral("Btn7"));
        sizePolicy.setHeightForWidth(Btn7->sizePolicy().hasHeightForWidth());
        Btn7->setSizePolicy(sizePolicy);
        Btn7->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn7, 1, 0, 1, 1);

        Btn9 = new QPushButton(centralWidget);
        Btn9->setObjectName(QStringLiteral("Btn9"));
        sizePolicy.setHeightForWidth(Btn9->sizePolicy().hasHeightForWidth());
        Btn9->setSizePolicy(sizePolicy);
        Btn9->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn9, 1, 2, 1, 1);

        BtnDiv = new QPushButton(centralWidget);
        BtnDiv->setObjectName(QStringLiteral("BtnDiv"));
        sizePolicy.setHeightForWidth(BtnDiv->sizePolicy().hasHeightForWidth());
        BtnDiv->setSizePolicy(sizePolicy);
        BtnDiv->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnDiv, 1, 3, 1, 1);

        Btn8 = new QPushButton(centralWidget);
        Btn8->setObjectName(QStringLiteral("Btn8"));
        sizePolicy.setHeightForWidth(Btn8->sizePolicy().hasHeightForWidth());
        Btn8->setSizePolicy(sizePolicy);
        Btn8->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn8, 1, 1, 1, 1);

        BtnMemPlus = new QPushButton(centralWidget);
        BtnMemPlus->setObjectName(QStringLiteral("BtnMemPlus"));
        sizePolicy.setHeightForWidth(BtnMemPlus->sizePolicy().hasHeightForWidth());
        BtnMemPlus->setSizePolicy(sizePolicy);
        BtnMemPlus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnMemPlus, 1, 4, 1, 1);

        BtnMemMinus = new QPushButton(centralWidget);
        BtnMemMinus->setObjectName(QStringLiteral("BtnMemMinus"));
        sizePolicy.setHeightForWidth(BtnMemMinus->sizePolicy().hasHeightForWidth());
        BtnMemMinus->setSizePolicy(sizePolicy);
        BtnMemMinus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnMemMinus, 2, 4, 1, 1);

        Btn4 = new QPushButton(centralWidget);
        Btn4->setObjectName(QStringLiteral("Btn4"));
        sizePolicy.setHeightForWidth(Btn4->sizePolicy().hasHeightForWidth());
        Btn4->setSizePolicy(sizePolicy);
        Btn4->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn4, 2, 0, 1, 1);

        Btn6 = new QPushButton(centralWidget);
        Btn6->setObjectName(QStringLiteral("Btn6"));
        sizePolicy.setHeightForWidth(Btn6->sizePolicy().hasHeightForWidth());
        Btn6->setSizePolicy(sizePolicy);
        Btn6->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn6, 2, 2, 1, 1);

        BtnMult = new QPushButton(centralWidget);
        BtnMult->setObjectName(QStringLiteral("BtnMult"));
        sizePolicy.setHeightForWidth(BtnMult->sizePolicy().hasHeightForWidth());
        BtnMult->setSizePolicy(sizePolicy);
        BtnMult->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnMult, 2, 3, 1, 1);

        Btn5 = new QPushButton(centralWidget);
        Btn5->setObjectName(QStringLiteral("Btn5"));
        sizePolicy.setHeightForWidth(Btn5->sizePolicy().hasHeightForWidth());
        Btn5->setSizePolicy(sizePolicy);
        Btn5->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn5, 2, 1, 1, 1);

        BtnAC = new QPushButton(centralWidget);
        BtnAC->setObjectName(QStringLiteral("BtnAC"));
        sizePolicy.setHeightForWidth(BtnAC->sizePolicy().hasHeightForWidth());
        BtnAC->setSizePolicy(sizePolicy);
        BtnAC->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnAC, 4, 0, 1, 1);

        Btn2 = new QPushButton(centralWidget);
        Btn2->setObjectName(QStringLiteral("Btn2"));
        sizePolicy.setHeightForWidth(Btn2->sizePolicy().hasHeightForWidth());
        Btn2->setSizePolicy(sizePolicy);
        Btn2->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn2, 3, 1, 1, 1);

        Btn3 = new QPushButton(centralWidget);
        Btn3->setObjectName(QStringLiteral("Btn3"));
        sizePolicy.setHeightForWidth(Btn3->sizePolicy().hasHeightForWidth());
        Btn3->setSizePolicy(sizePolicy);
        Btn3->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn3, 3, 2, 1, 1);

        BtnPlus = new QPushButton(centralWidget);
        BtnPlus->setObjectName(QStringLiteral("BtnPlus"));
        sizePolicy.setHeightForWidth(BtnPlus->sizePolicy().hasHeightForWidth());
        BtnPlus->setSizePolicy(sizePolicy);
        BtnPlus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnPlus, 3, 3, 1, 1);

        BtnMem = new QPushButton(centralWidget);
        BtnMem->setObjectName(QStringLiteral("BtnMem"));
        sizePolicy.setHeightForWidth(BtnMem->sizePolicy().hasHeightForWidth());
        BtnMem->setSizePolicy(sizePolicy);
        BtnMem->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnMem, 3, 4, 1, 1);

        Btn0 = new QPushButton(centralWidget);
        Btn0->setObjectName(QStringLiteral("Btn0"));
        sizePolicy.setHeightForWidth(Btn0->sizePolicy().hasHeightForWidth());
        Btn0->setSizePolicy(sizePolicy);
        Btn0->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Btn0, 4, 1, 1, 1);

        BtnSign = new QPushButton(centralWidget);
        BtnSign->setObjectName(QStringLiteral("BtnSign"));
        sizePolicy.setHeightForWidth(BtnSign->sizePolicy().hasHeightForWidth());
        BtnSign->setSizePolicy(sizePolicy);
        BtnSign->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnSign, 4, 2, 1, 1);

        BtnMinus = new QPushButton(centralWidget);
        BtnMinus->setObjectName(QStringLiteral("BtnMinus"));
        sizePolicy.setHeightForWidth(BtnMinus->sizePolicy().hasHeightForWidth());
        BtnMinus->setSizePolicy(sizePolicy);
        BtnMinus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnMinus, 4, 3, 1, 1);

        BtnEqual = new QPushButton(centralWidget);
        BtnEqual->setObjectName(QStringLiteral("BtnEqual"));
        sizePolicy.setHeightForWidth(BtnEqual->sizePolicy().hasHeightForWidth());
        BtnEqual->setSizePolicy(sizePolicy);
        BtnEqual->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BtnEqual, 4, 4, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid grey;\n"
"	color: #ffffff\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        Btn1->setText(QApplication::translate("Calculator", "1", nullptr));
        Btn7->setText(QApplication::translate("Calculator", "7", nullptr));
        Btn9->setText(QApplication::translate("Calculator", "9", nullptr));
        BtnDiv->setText(QApplication::translate("Calculator", "/", nullptr));
        Btn8->setText(QApplication::translate("Calculator", "8", nullptr));
        BtnMemPlus->setText(QApplication::translate("Calculator", "M+", nullptr));
        BtnMemMinus->setText(QApplication::translate("Calculator", "M-", nullptr));
        Btn4->setText(QApplication::translate("Calculator", "4", nullptr));
        Btn6->setText(QApplication::translate("Calculator", "6", nullptr));
        BtnMult->setText(QApplication::translate("Calculator", "*", nullptr));
        Btn5->setText(QApplication::translate("Calculator", "5", nullptr));
        BtnAC->setText(QApplication::translate("Calculator", "AC", nullptr));
        Btn2->setText(QApplication::translate("Calculator", "2", nullptr));
        Btn3->setText(QApplication::translate("Calculator", "3", nullptr));
        BtnPlus->setText(QApplication::translate("Calculator", "+", nullptr));
        BtnMem->setText(QApplication::translate("Calculator", "MR", nullptr));
        Btn0->setText(QApplication::translate("Calculator", "0", nullptr));
        BtnSign->setText(QApplication::translate("Calculator", "+/-", nullptr));
        BtnMinus->setText(QApplication::translate("Calculator", "-", nullptr));
        BtnEqual->setText(QApplication::translate("Calculator", "=", nullptr));
        Display->setText(QApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
