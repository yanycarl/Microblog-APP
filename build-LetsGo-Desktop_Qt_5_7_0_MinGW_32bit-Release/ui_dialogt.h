/********************************************************************************
** Form generated from reading UI file 'dialogt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGT_H
#define UI_DIALOGT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialogt
{
public:
    QTextBrowser *textBrowser;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QDialog *Dialogt)
    {
        if (Dialogt->objectName().isEmpty())
            Dialogt->setObjectName(QStringLiteral("Dialogt"));
        Dialogt->resize(1124, 577);
        textBrowser = new QTextBrowser(Dialogt);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 130, 1001, 401));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        commandLinkButton = new QCommandLinkButton(Dialogt);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(870, 60, 187, 41));
        commandLinkButton->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        commandLinkButton_2 = new QCommandLinkButton(Dialogt);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(70, 50, 187, 41));
        commandLinkButton_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        retranslateUi(Dialogt);

        QMetaObject::connectSlotsByName(Dialogt);
    } // setupUi

    void retranslateUi(QDialog *Dialogt)
    {
        Dialogt->setWindowTitle(QApplication::translate("Dialogt", "Dialog", 0));
        commandLinkButton->setText(QApplication::translate("Dialogt", "\350\277\224\345\233\236", 0));
        commandLinkButton_2->setText(QApplication::translate("Dialogt", "\346\237\245\347\234\213\344\275\234\350\200\205", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogt: public Ui_Dialogt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGT_H
