#include "mainwindow.h"
#include "mage.h"

#include <QApplication>

void startGame() {
    Mage player = Mage();
    Mage bot = Mage();

//    while (player.isAlive() && bot.isAlive()) {

//    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    startGame();

    return a.exec();
}
