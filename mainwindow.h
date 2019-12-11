#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contract.h"
#include "database.h"
#include "data.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void show_btn();
    void show_con();
    void show_mean();
    void hide11();
    void hide12();
    void hide13();
    void hide14();
    void hide15();
    void hide21();
    void hide22();
    void hide23();
    void hide24();
    void hide25();
    void hide31();
    void hide32();
    void hide33();
    void hide34();
    void hide35();
    void hide41();
    void hide42();
    void hide43();
    void hide44();
    void hide45();
    void hide51();
    void hide52();
    void hide53();
    void hide54();
    void hide55();
    void hide61();
    void hide62();
    void hide63();
    void hide64();
    void hide65();
    void hide71();
    void hide72();
    void hide73();
    void hide74();
    void hide75();
    ~MainWindow();
    database DB;
    contract con;
    bool flag;
private slots:



    void on_re_contract_clicked();

    void on_one_Club_clicked();
    void on_one_Diamond_clicked();
    void on_one_Heart_clicked();
    void on_one_Spade_clicked();
    void on_one_NT_clicked();
    void on_two_Club_clicked();
    void on_two_Diamond_clicked();
    void on_two_Heart_clicked();
    void on_two_Spade_clicked();
    void on_two_NT_clicked();
    void on_three_Club_clicked();
    void on_three_Diamond_clicked();
    void on_three_Heart_clicked();
    void on_three_Spade_clicked();
    void on_three_NT_clicked();
    void on_four_Club_clicked();
    void on_four_Diamond_clicked();
    void on_four_Heart_clicked();
    void on_four_Spade_clicked();
    void on_four_NT_clicked();
    void on_five_Club_clicked();
    void on_five_Diamond_clicked();
    void on_five_Heart_clicked();
    void on_five_Spade_clicked();
    void on_five_NT_clicked();
    void on_six_Club_clicked();
    void on_six_Diamond_clicked();
    void on_six_Heart_clicked();
    void on_six_Spade_clicked();
    void on_six_NT_clicked();
    void on_seven_Club_clicked();
    void on_seven_Diamond_clicked();
    void on_seven_Heart_clicked();
    void on_seven_Spade_clicked();
    void on_seven_NT_clicked();


    void on_doubble_clicked();

    void on_re_doubble_clicked();

    void on_pass_clicked();

    void on_action_triggered();

    void on_update_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
