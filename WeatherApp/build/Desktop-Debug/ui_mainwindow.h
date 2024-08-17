/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1025, 677);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1025, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit, pushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DNSinfo", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Lookup", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "1st IP address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
