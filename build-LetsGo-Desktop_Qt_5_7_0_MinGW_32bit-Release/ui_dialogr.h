/********************************************************************************
** Form generated from reading UI file 'dialogr.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGR_H
#define UI_DIALOGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DialogR
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *DialogR)
    {
        if (DialogR->objectName().isEmpty())
            DialogR->setObjectName(QStringLiteral("DialogR"));
        DialogR->resize(719, 518);
        DialogR->setMinimumSize(QSize(719, 518));
        DialogR->setMaximumSize(QSize(719, 518));
        DialogR->setStyleSheet(QLatin1String("\n"
"background-image: url(:/new/prefix1/resourse/login/2.jpg);"));
        label = new QLabel(DialogR);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 471, 61));
        label->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        lineEdit = new QLineEdit(DialogR);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 130, 321, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border-image:transparent;\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_2 = new QLineEdit(DialogR);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 200, 321, 41));
        lineEdit_2->setFocusPolicy(Qt::ClickFocus);
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background: transparent;\n"
"border-image:transparent;"));
        label_2 = new QLabel(DialogR);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 130, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(DialogR);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 200, 72, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox = new QGroupBox(DialogR);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 260, 541, 61));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background: transparent\n"
""));
        groupBox->setFlat(true);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(140, 20, 131, 31));
        radioButton->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(340, 20, 151, 31));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background: transparent"));
        lineEdit_3 = new QLineEdit(DialogR);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(230, 340, 91, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(DialogR);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 340, 72, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_4 = new QLineEdit(DialogR);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(510, 340, 91, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(DialogR);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 340, 72, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background: transparent"));
        lineEdit_5 = new QLineEdit(DialogR);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(230, 420, 91, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(DialogR);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 420, 72, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_6 = new QLineEdit(DialogR);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(510, 420, 91, 41));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(DialogR);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 420, 72, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background: transparent"));
        commandLinkButton = new QCommandLinkButton(DialogR);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(510, 460, 191, 51));
        commandLinkButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 170);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(DialogR);

        QMetaObject::connectSlotsByName(DialogR);
    } // setupUi

    void retranslateUi(QDialog *DialogR)
    {
        DialogR->setWindowTitle(QApplication::translate("DialogR", "Dialog", 0));
        label->setText(QApplication::translate("DialogR", "30s\345\277\253\346\215\267\346\263\250\345\206\214 LetsGo", 0));
        label_2->setText(QApplication::translate("DialogR", "\347\224\250\346\210\267\345\220\215", 0));
        label_3->setText(QApplication::translate("DialogR", "\345\217\243\344\273\244", 0));
        groupBox->setTitle(QApplication::translate("DialogR", "\346\200\247\345\210\253", 0));
        radioButton->setText(QApplication::translate("DialogR", "\347\224\267\347\224\237", 0));
        radioButton_2->setText(QApplication::translate("DialogR", "\345\245\263\347\224\237", 0));
        lineEdit_3->setText(QString());
        label_4->setText(QApplication::translate("DialogR", "\345\271\264\351\276\204", 0));
        lineEdit_4->setText(QString());
        label_5->setText(QApplication::translate("DialogR", "\345\234\260\345\214\272", 0));
        lineEdit_5->setText(QString());
        label_6->setText(QApplication::translate("DialogR", "\350\201\214\344\270\232", 0));
        lineEdit_6->setText(QString());
        label_7->setText(QApplication::translate("DialogR", "\347\224\265\350\257\235", 0));
        commandLinkButton->setText(QApplication::translate("DialogR", "\345\274\200\345\247\213\347\225\205\346\270\270", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogR: public Ui_DialogR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGR_H
