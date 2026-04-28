/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_usuario1;
    QPushButton *pushButton_usuario1;
    QTextEdit *textEdit_usuario1;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_usuario2;
    QLineEdit *lineEdit_usuario2;
    QPushButton *pushButton_usuario2;
    QLabel *label;
    QLabel *label_mdi1;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 491);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 60, 300, 400));
        lineEdit_usuario1 = new QLineEdit(groupBox);
        lineEdit_usuario1->setObjectName("lineEdit_usuario1");
        lineEdit_usuario1->setGeometry(QRect(25, 340, 250, 22));
        pushButton_usuario1 = new QPushButton(groupBox);
        pushButton_usuario1->setObjectName("pushButton_usuario1");
        pushButton_usuario1->setGeometry(QRect(25, 370, 250, 24));
        textEdit_usuario1 = new QTextEdit(groupBox);
        textEdit_usuario1->setObjectName("textEdit_usuario1");
        textEdit_usuario1->setGeometry(QRect(25, 25, 250, 300));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(460, 60, 300, 400));
        textEdit_usuario2 = new QTextEdit(groupBox_2);
        textEdit_usuario2->setObjectName("textEdit_usuario2");
        textEdit_usuario2->setGeometry(QRect(25, 25, 250, 300));
        lineEdit_usuario2 = new QLineEdit(groupBox_2);
        lineEdit_usuario2->setObjectName("lineEdit_usuario2");
        lineEdit_usuario2->setGeometry(QRect(25, 340, 250, 22));
        pushButton_usuario2 = new QPushButton(groupBox_2);
        pushButton_usuario2->setObjectName("pushButton_usuario2");
        pushButton_usuario2->setGeometry(QRect(25, 370, 250, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 170, 111, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/g2.png")));
        label->setScaledContents(true);
        label_mdi1 = new QLabel(centralwidget);
        label_mdi1->setObjectName("label_mdi1");
        label_mdi1->setGeometry(QRect(20, 10, 181, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Usu\303\241rio 1", nullptr));
        pushButton_usuario1->setText(QCoreApplication::translate("MainWindow", "ENVIAR", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Usu\303\241rio 2", nullptr));
        pushButton_usuario2->setText(QCoreApplication::translate("MainWindow", "ENVIAR", nullptr));
        label->setText(QString());
        label_mdi1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; color:#000000;\">ALGOR\303\215TMO MDI</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
