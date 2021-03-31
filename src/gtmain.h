#ifndef GTMAIN_H
#define GTMAIN_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <QtCore/QVariant>
#include <QTableView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QFileDialog>

#include "gtSubWindow.h"

class GtMain : public QMainWindow
{
    Q_OBJECT

public:
    GtMain(QWidget* parent = nullptr);
    ~GtMain(); 
    void getInputString();
    void showMessageDialog();
    void showErrorDialog();
    void addImageIcon();
    void addTable();
    void addRowToTable();
    void getSelectRowFromTable();
    void getRowIndexFromSelectTable();
    void addButton();
    void menuButtonAbout();
    void print();
    void println();
    void setFont();
    void setFontSize();
    void setBackgroundColor();
    void setXY();
    void setFilePath();
    void clear();
    void addTextArea();
    void addTextField();
    void clearRowsOfTable();
    void getColorFromDialog();
    void getPasswordFromDialog();
    void getTextFromEntry();
    void setTextInEntry();
    void showWarningDialog();
    QString getFilePath();
    void newGTerm();
    void closeGTerm();

public slots:
    void clearGtSub();

private:
    GtSubWindow* gtSubWindow;
    void retranslateUi();
    inline void setupUi();
    QAction* actionMenuAbout;
    QWidget* gtCentralWidget;
    QGroupBox* gtGroupBox;
    QPushButton* newGTermObjectButton;
    QPushButton* getInputStringButton;
    QPushButton* showHelpButton;
    QPushButton* closeButton;
    QPushButton* showMessageDialogButton;
    QPushButton* showErrorDialogButton;
    QPushButton* addImageIconButton;
    QPushButton* setXYButton;
    QMenuBar* gtMenuBar;
    QMenu* gtMenuSystem;
    QStatusBar* gtStatusBar;
    QToolBar* gtToolBar;
    QTableView* gtTable;
    QFont* gtFont;
};
#endif // GTMAIN_H
