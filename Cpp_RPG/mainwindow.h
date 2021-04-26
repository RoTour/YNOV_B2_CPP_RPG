#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mage.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Melee_clicked();

    void on_Fireball_clicked();

    void on_IcedArrow_clicked();

    void on_WindBlade_clicked();

    void on_Parade_clicked();

    void on_WaterWall_clicked();

    void on_Firewall_clicked();

    void on_WindShield_clicked();

private:
    Ui::MainWindow *ui;
    void setAttackButtons(bool value);
    void setDefenseButtons(bool value);
    void onAttack();
    void startGame();
    bool playerIsAssaillant = true;

    Defense* getBotDefense();
    Attack* getBotAttack();

    Mage* player;
    Mage* bot;
};
#endif // MAINWINDOW_H
