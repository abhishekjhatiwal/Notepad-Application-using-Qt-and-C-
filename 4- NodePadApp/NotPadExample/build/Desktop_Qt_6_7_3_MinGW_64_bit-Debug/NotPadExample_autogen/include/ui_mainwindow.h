/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionPrint_Preview;
    QAction *actionExport_PDF;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPast;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionInderline;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionCenter;
    QAction *actionJustify;
    QAction *actionFont;
    QAction *actionColor;
    QAction *actionAbout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/notpad.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/4 Simple App/1-CreatingGUI/new.jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/4 Simple App/1-CreatingGUI/open.jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/4 Simple App/1-CreatingGUI/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon3);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/asvas.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave_as->setIcon(icon4);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPrint->setIcon(icon5);
        actionPrint_Preview = new QAction(MainWindow);
        actionPrint_Preview->setObjectName("actionPrint_Preview");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/prientePrivew.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPrint_Preview->setIcon(icon6);
        actionExport_PDF = new QAction(MainWindow);
        actionExport_PDF->setObjectName("actionExport_PDF");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/pdf.jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExport_PDF->setIcon(icon7);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/4 Simple App/1-CreatingGUI/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/undo.jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon10);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon11);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon12);
        actionPast = new QAction(MainWindow);
        actionPast->setObjectName("actionPast");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPast->setIcon(icon13);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName("actionBold");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/bold.jpeg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBold->setIcon(icon14);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName("actionItalic");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionItalic->setIcon(icon15);
        actionInderline = new QAction(MainWindow);
        actionInderline->setObjectName("actionInderline");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/underline.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionInderline->setIcon(icon16);
        actionLeft = new QAction(MainWindow);
        actionLeft->setObjectName("actionLeft");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/left.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLeft->setIcon(icon17);
        actionRight = new QAction(MainWindow);
        actionRight->setObjectName("actionRight");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/right.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRight->setIcon(icon18);
        actionCenter = new QAction(MainWindow);
        actionCenter->setObjectName("actionCenter");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/center.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCenter->setIcon(icon19);
        actionJustify = new QAction(MainWindow);
        actionJustify->setObjectName("actionJustify");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/justify.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionJustify->setIcon(icon20);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFont->setIcon(icon21);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName("actionColor");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/color.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionColor->setIcon(icon22);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/4 Simple App/1-CreatingGUI/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon23);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionPrint_Preview);
        menuFile->addAction(actionExport_PDF);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPast);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionInderline);
        menuFormat->addSeparator();
        menuFormat->addAction(actionLeft);
        menuFormat->addAction(actionRight);
        menuFormat->addAction(actionCenter);
        menuFormat->addAction(actionJustify);
        menuFormat->addSeparator();
        menuFormat->addAction(actionFont);
        menuFormat->addAction(actionColor);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_as);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionExport_PDF);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionInderline);
        toolBar->addAction(actionColor);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPast);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Simple Notepad Application", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint_Preview->setText(QCoreApplication::translate("MainWindow", "Print Preview", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint_Preview->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport_PDF->setText(QCoreApplication::translate("MainWindow", "Export PDF", nullptr));
#if QT_CONFIG(shortcut)
        actionExport_PDF->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPast->setText(QCoreApplication::translate("MainWindow", "Past", nullptr));
#if QT_CONFIG(shortcut)
        actionPast->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInderline->setText(QCoreApplication::translate("MainWindow", "Inderline", nullptr));
#if QT_CONFIG(shortcut)
        actionInderline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLeft->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
#if QT_CONFIG(shortcut)
        actionLeft->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRight->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
#if QT_CONFIG(shortcut)
        actionRight->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCenter->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
#if QT_CONFIG(shortcut)
        actionCenter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJustify->setText(QCoreApplication::translate("MainWindow", "Justify", nullptr));
#if QT_CONFIG(shortcut)
        actionJustify->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
#if QT_CONFIG(shortcut)
        actionFont->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(shortcut)
        actionColor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+`", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
