#include "mage.h"
#include "mainwindow.h"
#include "melee.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new Mage();
    bot = new Mage();
//    setAttackButtons(false);
    setDefenseButtons(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setAttackButtons(bool value)
{
    ui->Melee->setEnabled(value);
    ui->Fireball->setEnabled(value);
    ui->IcedArrow->setEnabled(value);
    ui->WindBlade->setEnabled(value);
}

void MainWindow::setDefenseButtons(bool value)
{
    ui->Parade->setEnabled(value);
    ui->WaterWall->setEnabled(value);
    ui->Firewall->setEnabled(value);
    ui->WindShield->setEnabled(value);
}

void MainWindow::onAttack()
{

}

Defense *MainWindow::getBotDefense()
{

}

Attack *MainWindow::getBotAttack()
{

}



// Attack buttons
void MainWindow::on_Melee_clicked()
{
    if(playerIsAssaillant) {
        Mage::attack(player, bot, new Melee(), getBotDefense());
        return;
    }
}

void MainWindow::on_Fireball_clicked()
{

}

void MainWindow::on_IcedArrow_clicked()
{

}

void MainWindow::on_WindBlade_clicked()
{

}


// Defense Buttons

void MainWindow::on_Parade_clicked()
{

}

void MainWindow::on_WaterWall_clicked()
{

}

void MainWindow::on_Firewall_clicked()
{

}

void MainWindow::on_WindShield_clicked()
{

}
