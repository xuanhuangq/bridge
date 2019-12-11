#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    setFixedSize(1000,800);

    DB.load();
    ui->setupUi(this);
    ui->re_doubble->hide();
    ui->doubble->hide();
    ui->North->clear();
    ui->South->clear();
    ui->East->clear();
    ui->West->clear();
    ui->text_club->clear();
    ui->text_spade->clear();
    ui->text_heart->clear();
    ui->text_diamond->clear();
    ui->text_point->clear();
    ui->text_others->clear();
    ui->text_point->setEnabled(false);
    ui->text_spade->setEnabled(false);
    ui->text_heart->setEnabled(false);
    ui->text_diamond->setEnabled(false);
    ui->text_club->setEnabled(false);
    ui->text_others->setEnabled(false);
    flag=false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::show_mean()
{
    means y;
    y=DB.DBtree[con.con];
    ui->text_club->setText(y.club);
    ui->text_diamond->setText(y.diamond);
    ui->text_spade->setText(y.spade);
    ui->text_heart->setText(y.heart);
    ui->text_point->setText(y.point);
    ui->text_others->setText(y.other);
}

void MainWindow::show_con()
{
    QString x;
    ui->North->clear();
    ui->South->clear();
    ui->East->clear();
    ui->West->clear();
    for(int i=0;i<con.len;i++)
    {
        x="";
        x=x+con.con[i*3];
        x=x+con.con[i*3+1];
        x=con.map[x];
        if(i%4==0)ui->North->append(x);
        if(i%4==1)ui->East->append(x);
        if(i%4==2)ui->South->append(x);
        if(i%4==3)ui->West->append(x);
    }
}
void MainWindow::hide75()
{
    ui->seven_NT->hide();
    hide74();
}

void MainWindow::hide74()
{
    ui->seven_Spade->hide();
    hide73();
}

void MainWindow::hide73()
{
    ui->seven_Heart->hide();
    hide72();
}

void MainWindow::hide72()
{
    ui->seven_Diamond->hide();
    hide71();
}

void MainWindow::hide71()
{
    ui->seven_Club->hide();
    hide65();
}
void MainWindow::hide65()
{
    ui->six_NT->hide();
    hide64();
}

void MainWindow::hide64()
{
    ui->six_Spade->hide();
    hide63();
}

void MainWindow::hide63()
{
    ui->six_Heart->hide();
    hide62();
}

void MainWindow::hide62()
{
    ui->six_Diamond->hide();
    hide61();
}

void MainWindow::hide61()
{
    ui->six_Club->hide();
    hide55();
}
void MainWindow::hide55()
{
    ui->five_NT->hide();
    hide54();
}

void MainWindow::hide54()
{
    ui->five_Spade->hide();
    hide53();
}

void MainWindow::hide53()
{
    ui->five_Heart->hide();
    hide52();
}

void MainWindow::hide52()
{
    ui->five_Diamond->hide();
    hide51();
}

void MainWindow::hide51()
{
    ui->five_Club->hide();
    hide45();
}

void MainWindow::hide45()
{
    ui->four_NT->hide();
    hide44();
}

void MainWindow::hide44()
{
    ui->four_Spade->hide();
    hide43();
}

void MainWindow::hide43()
{
    ui->four_Heart->hide();
    hide42();
}

void MainWindow::hide42()
{
    ui->four_Diamond->hide();
    hide41();
}

void MainWindow::hide41()
{
    ui->four_Club->hide();
    hide35();
}

void MainWindow::hide35()
{
    ui->three_NT->hide();
    hide34();
}

void MainWindow::hide34()
{
    ui->three_Spade->hide();
    hide33();
}

void MainWindow::hide33()
{
    ui->three_Heart->hide();
    hide32();
}

void MainWindow::hide32()
{
    ui->three_Diamond->hide();
    hide31();
}

void MainWindow::hide31()
{
    ui->three_Club->hide();
    hide25();
}

void MainWindow::hide25()
{
    ui->two_NT->hide();
    hide24();
}

void MainWindow::hide24()
{
    ui->two_Spade->hide();
    hide23();
}

void MainWindow::hide23()
{
    ui->two_Heart->hide();
    hide22();
}

void MainWindow::hide22()
{
    ui->two_Diamond->hide();
    hide21();
}

void MainWindow::hide21()
{
    ui->two_Club->hide();
    hide15();
}

void MainWindow::hide15()
{
    ui->one_NT->hide();
    hide14();
}

void MainWindow::hide14()
{
    ui->one_Spade->hide();
    hide13();
}

void MainWindow::hide13()
{
    ui->one_Heart->hide();
    hide12();
}

void MainWindow::hide12()
{
    ui->one_Diamond->hide();
    hide11();
}

void MainWindow::hide11()
{
    ui->one_Club->hide();
}
void MainWindow::show_btn()
{
    if(con.ReDbl==true)
    {
        ui->re_doubble->hide();
        ui->doubble->hide();
        return ;
    }
    if(con.Dbl==true)
    {
        ui->doubble->hide();
        if((con.len+con.last)%2==0)
        {
            ui->re_doubble->hide();
        }
        else
        {
            ui->re_doubble->show();
        }
        return ;
    }
    if(con.last==-1)
    {
        ui->re_doubble->hide();
        ui->doubble->hide();
        return ;
    }
    ui->re_doubble->hide();
    if((con.len+con.last)%2==0)
    {
        ui->doubble->hide();
    }
    else
    {
        ui->doubble->show();
    }
    return ;
}



void MainWindow::on_re_contract_clicked()
{
    ui->one_Club->show();
    ui->one_Diamond->show();
    ui->one_Heart->show();
    ui->one_Spade->show();
    ui->one_NT->show();
    ui->two_Club->show();
    ui->two_Diamond->show();
    ui->two_Heart->show();
    ui->two_Spade->show();
    ui->two_NT->show();
    ui->three_Club->show();
    ui->three_Diamond->show();
    ui->three_Heart->show();
    ui->three_Spade->show();
    ui->three_NT->show();
    ui->four_Club->show();
    ui->four_Diamond->show();
    ui->four_Heart->show();
    ui->four_Spade->show();
    ui->four_NT->show();
    ui->five_Club->show();
    ui->five_Diamond->show();
    ui->five_Heart->show();
    ui->five_Spade->show();
    ui->five_NT->show();
    ui->six_Club->show();
    ui->six_Diamond->show();
    ui->six_Heart->show();
    ui->six_Spade->show();
    ui->six_NT->show();
    ui->seven_Club->show();
    ui->seven_Diamond->show();
    ui->seven_Heart->show();
    ui->seven_Spade->show();
    ui->seven_NT->show();
    ui->pass->show();
    ui->text_club->clear();
    ui->text_spade->clear();
    ui->text_heart->clear();
    ui->text_diamond->clear();
    ui->text_point->clear();
    ui->text_others->clear();
    ui->text_point->setEnabled(false);
    ui->text_spade->setEnabled(false);
    ui->text_heart->setEnabled(false);
    ui->text_diamond->setEnabled(false);
    ui->text_club->setEnabled(false);
    ui->text_others->setEnabled(false);
    con.restart();
    show_con();
    show_btn();
}

void MainWindow::on_one_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("11_");
    show_mean();
    show_con();
    show_btn();
    hide11();
}
void MainWindow::on_one_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("12_");
    show_mean();
    show_con();
    show_btn();
    hide12();
}
void MainWindow::on_one_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("13_");
    show_mean();
    show_con();
    show_btn();
    hide13();
}
void MainWindow::on_one_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("14_");
    show_mean();
    show_con();
    show_btn();
    hide14();
}
void MainWindow::on_one_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("15_");
    show_mean();
    show_con();
    show_btn();
    hide15();
}
void MainWindow::on_two_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("21_");
    show_mean();
    show_con();
    show_btn();
    hide21();
}
void MainWindow::on_two_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("22_");
    show_mean();
    show_con();
    show_btn();
    hide22();
}
void MainWindow::on_two_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("23_");
    show_mean();
    show_con();
    show_btn();
    hide23();
}
void MainWindow::on_two_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("24_");
    show_mean();
    show_con();
    show_btn();
    hide24();
}
void MainWindow::on_two_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("25_");
    show_mean();
    show_con();
    show_btn();
    hide25();
}
void MainWindow::on_three_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("31_");
    show_mean();
    show_con();
    show_btn();
    hide31();
}
void MainWindow::on_three_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("32_");
    show_mean();
    show_con();
    show_btn();
    hide32();
}
void MainWindow::on_three_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("33_");
    show_mean();
    show_con();
    show_btn();
    hide33();
}
void MainWindow::on_three_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("34_");
    show_mean();
    show_con();
    show_btn();
    hide34();
}
void MainWindow::on_three_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("35_");
    show_mean();
    show_con();
    show_btn();
    hide35();
}
void MainWindow::on_four_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("41_");
    show_mean();
    show_con();
    show_btn();
    hide41();
}
void MainWindow::on_four_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("42_");
    show_mean();
    show_con();
    show_btn();
    hide42();
}
void MainWindow::on_four_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("43_");
    show_mean();
    show_con();
    show_btn();
    hide43();
}
void MainWindow::on_four_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("44_");
    show_mean();
    show_con();
    show_btn();
    hide44();
}
void MainWindow::on_four_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("45_");
    show_mean();
    show_con();
    show_btn();
    hide45();
}
void MainWindow::on_five_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("51_");
    show_mean();
    show_con();
    show_btn();
    hide51();
}
void MainWindow::on_five_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("52_");
    show_mean();
    show_con();
    show_btn();
    hide52();
}
void MainWindow::on_five_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("53_");
    show_mean();
    show_con();
    show_btn();
    hide53();
}
void MainWindow::on_five_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("54_");
    show_mean();
    show_con();
    show_btn();
    hide54();
}
void MainWindow::on_five_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("55_");
    show_mean();
    show_con();
    show_btn();
    hide55();
}
void MainWindow::on_six_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("61_");
    show_mean();
    show_con();
    show_btn();
    hide61();
}
void MainWindow::on_six_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("62_");
    show_mean();
    show_con();
    show_btn();
    hide62();
}
void MainWindow::on_six_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("63_");
    show_mean();
    show_con();
    show_btn();
    hide63();
}
void MainWindow::on_six_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("64_");
    show_mean();
    show_con();
    show_btn();
    hide64();
}
void MainWindow::on_six_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("65_");
    show_mean();
    show_con();
    show_btn();
    hide65();
}
void MainWindow::on_seven_Club_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("71_");
    show_mean();
    show_con();
    show_btn();
    hide71();
}
void MainWindow::on_seven_Diamond_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("72_");
    show_mean();
    show_con();
    show_btn();
    hide72();
}
void MainWindow::on_seven_Heart_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("73_");
    show_mean();
    show_con();
    show_btn();
    hide73();
}
void MainWindow::on_seven_Spade_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("74_");
    show_mean();
    show_con();
    show_btn();
    hide74();
}
void MainWindow::on_seven_NT_clicked()
{
    con.Dbl=false;
    con.ReDbl=false;
    con.add("75_");
    show_mean();
    show_con();
    show_btn();
    hide75();
}

void MainWindow::on_doubble_clicked()
{
    con.add("-2_");
    con.Dbl=true;
    show_mean();
    show_con();
    show_btn();
}

void MainWindow::on_re_doubble_clicked()
{
    con.add("-3_");
    con.Dbl=false;
    con.ReDbl=true;
    show_mean();
    show_con();
    show_btn();
}

void MainWindow::on_pass_clicked()
{
    con.add("-1_");
    show_mean();
    show_con();
    show_btn();
    if(con.len>=4)
    {
        bool flag=true;
        for(int i=con.len-1;i>=con.len-3;i--)
        {
            if(con.con[i*3]=='-'&&con.con[i*3+1]=='1') continue;
            else
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            hide75();
            ui->doubble->hide();
            ui->pass->hide();
            ui->re_doubble->hide();
        }
    }
}

void MainWindow::on_action_triggered()
{
    DB.save();
}

void MainWindow::on_update_clicked()
{
    if(flag)
    {
        QString x=con.con;
        means y;
        y.club=ui->text_club->text();
        y.spade=ui->text_spade->text();
        y.diamond=ui->text_diamond->text();
        y.heart=ui->text_heart->text();
        y.point=ui->text_point->text();
        y.other=ui->text_others->toPlainText();
        DB.update(x,y);
        ui->update->setText("修改叫牌含义");
    }
    else
    {
        ui->update->setText("保存叫牌含义");
    }
    flag=!flag;
    ui->text_point->setEnabled(flag);
    ui->text_spade->setEnabled(flag);
    ui->text_heart->setEnabled(flag);
    ui->text_diamond->setEnabled(flag);
    ui->text_club->setEnabled(flag);
    ui->text_others->setEnabled(flag);
}
