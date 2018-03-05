/********************************************************************************
** Form generated from reading UI file 'dialogn.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGN_H
#define UI_DIALOGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialogn
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialogn)
    {
        if (Dialogn->objectName().isEmpty())
            Dialogn->setObjectName(QStringLiteral("Dialogn"));
        Dialogn->resize(1146, 719);
        label = new QLabel(Dialogn);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 80, 551, 51));
        label->setStyleSheet(QStringLiteral("font: 87 24pt \"Arial Black\";"));
        label_2 = new QLabel(Dialogn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 180, 81, 51));
        label_2->setStyleSheet(QStringLiteral("font: 87 16pt \"Arial Black\";"));
        label_3 = new QLabel(Dialogn);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 250, 81, 51));
        label_3->setStyleSheet(QStringLiteral("font: 87 16pt \"Arial Black\";"));
        lineEdit = new QLineEdit(Dialogn);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 190, 861, 41));
        lineEdit->setStyleSheet(QStringLiteral("font: 87 16pt \"Arial Black\";"));
        lineEdit_2 = new QLineEdit(Dialogn);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 260, 861, 331));
        lineEdit_2->setStyleSheet(QStringLiteral("font: 87 16pt \"Arial Black\";"));
        pushButton = new QPushButton(Dialogn);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 610, 221, 81));
        pushButton->setStyleSheet(QStringLiteral("font: 87 16pt \"Arial Black\";"));

        retranslateUi(Dialogn);

        QMetaObject::connectSlotsByName(Dialogn);
    } // setupUi

    void retranslateUi(QDialog *Dialogn)
    {
        Dialogn->setWindowTitle(QApplication::translate("Dialogn", "Dialog", 0));
        label->setText(QApplication::translate("Dialogn", "\346\226\260\345\273\272\345\212\250\346\200\201 New Info", 0));
        label_2->setText(QApplication::translate("Dialogn", "\344\270\273\351\242\230\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialogn", "\345\206\205\345\256\271\357\274\232", 0));
        pushButton->setText(QApplication::translate("Dialogn", "\346\217\220\344\272\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogn: public Ui_Dialogn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGN_H
