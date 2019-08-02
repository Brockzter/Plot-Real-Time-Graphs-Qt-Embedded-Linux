/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_intro;
    QCustomPlot *CustomPlot;
    QLabel *label_adc_data;
    QPushButton *pushButton;
    QLabel *label_ty;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 270);
        MainWindow->setCursor(QCursor(Qt::BlankCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_intro = new QLabel(centralWidget);
        label_intro->setObjectName(QString::fromUtf8("label_intro"));
        label_intro->setGeometry(QRect(10, 0, 321, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_intro->setFont(font);
        label_intro->setCursor(QCursor(Qt::BlankCursor));
        label_intro->setScaledContents(false);
        CustomPlot = new QCustomPlot(centralWidget);
        CustomPlot->setObjectName(QString::fromUtf8("CustomPlot"));
        CustomPlot->setGeometry(QRect(10, 30, 321, 211));
        CustomPlot->setCursor(QCursor(Qt::BlankCursor));
        label_adc_data = new QLabel(centralWidget);
        label_adc_data->setObjectName(QString::fromUtf8("label_adc_data"));
        label_adc_data->setGeometry(QRect(340, 30, 131, 31));
        QFont font1;
        font1.setPointSize(27);
        font1.setItalic(true);
        label_adc_data->setFont(font1);
        label_adc_data->setCursor(QCursor(Qt::BlankCursor));
        label_adc_data->setFrameShape(QFrame::NoFrame);
        label_adc_data->setFrameShadow(QFrame::Plain);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 140, 131, 71));
        pushButton->setCursor(QCursor(Qt::BlankCursor));
        pushButton->setFocusPolicy(Qt::NoFocus);
        label_ty = new QLabel(centralWidget);
        label_ty->setObjectName(QString::fromUtf8("label_ty"));
        label_ty->setGeometry(QRect(340, 80, 131, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font2.setPointSize(13);
        font2.setItalic(true);
        label_ty->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_intro->setText(QCoreApplication::translate("MainWindow", "Powered by: www.deeplyembedded.org", nullptr));
        label_adc_data->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "PRESS ME", nullptr));
        label_ty->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
