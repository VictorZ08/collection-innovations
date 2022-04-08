/********************************************************************************
** Form generated from reading UI file 'collectioninnovations.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTIONINNOVATIONS_H
#define UI_COLLECTIONINNOVATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CollectionInnovations
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CollectionInnovations)
    {
        if (CollectionInnovations->objectName().isEmpty())
            CollectionInnovations->setObjectName(QString::fromUtf8("CollectionInnovations"));
        CollectionInnovations->resize(735, 600);
        centralwidget = new QWidget(CollectionInnovations);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(300, 200, 51, 31));
        CollectionInnovations->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CollectionInnovations);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 22));
        CollectionInnovations->setMenuBar(menubar);
        statusbar = new QStatusBar(CollectionInnovations);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CollectionInnovations->setStatusBar(statusbar);

        retranslateUi(CollectionInnovations);

        QMetaObject::connectSlotsByName(CollectionInnovations);
    } // setupUi

    void retranslateUi(QMainWindow *CollectionInnovations)
    {
        CollectionInnovations->setWindowTitle(QApplication::translate("CollectionInnovations", "CollectionInnovations", nullptr));
        textEdit->setHtml(QApplication::translate("CollectionInnovations", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Test</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CollectionInnovations: public Ui_CollectionInnovations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTIONINNOVATIONS_H
