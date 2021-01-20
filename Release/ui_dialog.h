/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *sex;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *zero;
    QPushButton *add;
    QPushButton *subtract;
    QPushButton *ride;
    QPushButton *except;
    QPushButton *spot;
    QPushButton *Ac;
    QTextEdit *textEdit_Input;
    QPushButton *dengyu;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(382, 350);
        one = new QPushButton(Dialog);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(90, 240, 71, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        one->setFont(font);
        two = new QPushButton(Dialog);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(190, 240, 71, 41));
        two->setFont(font);
        three = new QPushButton(Dialog);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(290, 240, 71, 41));
        three->setFont(font);
        four = new QPushButton(Dialog);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(90, 190, 71, 41));
        four->setFont(font);
        five = new QPushButton(Dialog);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(190, 190, 71, 41));
        five->setFont(font);
        sex = new QPushButton(Dialog);
        sex->setObjectName(QString::fromUtf8("sex"));
        sex->setGeometry(QRect(290, 190, 71, 41));
        sex->setFont(font);
        seven = new QPushButton(Dialog);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(90, 140, 71, 41));
        seven->setFont(font);
        eight = new QPushButton(Dialog);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(190, 140, 71, 41));
        eight->setFont(font);
        nine = new QPushButton(Dialog);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(290, 140, 71, 41));
        nine->setFont(font);
        zero = new QPushButton(Dialog);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(190, 290, 71, 41));
        zero->setFont(font);
        add = new QPushButton(Dialog);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(10, 140, 51, 41));
        add->setFont(font);
        subtract = new QPushButton(Dialog);
        subtract->setObjectName(QString::fromUtf8("subtract"));
        subtract->setGeometry(QRect(10, 190, 51, 41));
        subtract->setFont(font);
        ride = new QPushButton(Dialog);
        ride->setObjectName(QString::fromUtf8("ride"));
        ride->setGeometry(QRect(10, 240, 51, 41));
        ride->setFont(font);
        except = new QPushButton(Dialog);
        except->setObjectName(QString::fromUtf8("except"));
        except->setGeometry(QRect(10, 290, 51, 41));
        except->setFont(font);
        spot = new QPushButton(Dialog);
        spot->setObjectName(QString::fromUtf8("spot"));
        spot->setGeometry(QRect(90, 290, 71, 41));
        spot->setFont(font);
        Ac = new QPushButton(Dialog);
        Ac->setObjectName(QString::fromUtf8("Ac"));
        Ac->setGeometry(QRect(260, 20, 91, 61));
        Ac->setFont(font);
        textEdit_Input = new QTextEdit(Dialog);
        textEdit_Input->setObjectName(QString::fromUtf8("textEdit_Input"));
        textEdit_Input->setGeometry(QRect(10, 10, 241, 111));
        textEdit_Input->setFont(font);
        dengyu = new QPushButton(Dialog);
        dengyu->setObjectName(QString::fromUtf8("dengyu"));
        dengyu->setGeometry(QRect(290, 290, 71, 41));
        dengyu->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        one->setText(QApplication::translate("Dialog", "1", nullptr));
        two->setText(QApplication::translate("Dialog", "2", nullptr));
        three->setText(QApplication::translate("Dialog", "3", nullptr));
        four->setText(QApplication::translate("Dialog", "4", nullptr));
        five->setText(QApplication::translate("Dialog", "5", nullptr));
        sex->setText(QApplication::translate("Dialog", "6", nullptr));
        seven->setText(QApplication::translate("Dialog", "7", nullptr));
        eight->setText(QApplication::translate("Dialog", "8", nullptr));
        nine->setText(QApplication::translate("Dialog", "9", nullptr));
        zero->setText(QApplication::translate("Dialog", "0", nullptr));
        add->setText(QApplication::translate("Dialog", "+", nullptr));
        subtract->setText(QApplication::translate("Dialog", "-", nullptr));
        ride->setText(QApplication::translate("Dialog", "*", nullptr));
        except->setText(QApplication::translate("Dialog", "/", nullptr));
        spot->setText(QApplication::translate("Dialog", ".", nullptr));
        Ac->setText(QApplication::translate("Dialog", "AC", nullptr));
        dengyu->setText(QApplication::translate("Dialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
