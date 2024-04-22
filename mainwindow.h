#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "WordTable.h"
#pragma once

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    bool table_used = 0;
    //MainWindow(QWidget *parent = nullptr);
    //~MainWindow();
    WordTable MMHTable;
    WordTable FNVTable;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setMMHTable(WordTable MMHTable);
    void setFNVTable(WordTable FNVTable);
private slots:

    void on_Snt_Anal_Btn_clicked();

    void on_back_btn1_clicked();

    void on_back_btn2_clicked();

    void on_analyze_btn_clicked();

    void on_main_menu_btn1_clicked();

    void on_Wrd_Anal_Btn_clicked();

    void on_wrd_analyze_btn_clicked();

    void on_main_menu_btn2_clicked();

    void clear_all_text();

    void on_Emo_Anl_Btn_clicked();

    void on_back_btn3_clicked();

    void on_contribute_Btn_clicked();

    void on_murmur_btn_clicked();

    void on_fnv_btn_clicked();

    void on_back_btn4_clicked();

    void on_contribute_btn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
