#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_roll1_clicked()
{
    die1 = (rand() % 6) + 1;
    updateTotal();
}

void MainWindow::on_roll2_clicked()
{
    die2 = (rand() % 6) + 1;
    updateTotal();
}

void MainWindow::on_roll3_clicked()
{
    die3 = (rand() % 6) + 1;
    updateTotal();
}
void MainWindow::updateTotal()
{
    total = die1 + die2 + die3;
    ui->rTotalLabel->setText(QString::number(total));
}

void MainWindow::on_charGen_clicked()
{

    updateCharacter();

}
void MainWindow::updateCharacter()
{
    subNum = (rand() % 4);
    charN = cName[subNum];
    charClass = cClass[subNum];
    charGender = cGender[subNum];

    QPixmap donPix("C:/Users/zach/Desktop/projpics/trump.png");
    QPixmap hillPix("C:/Users/zach/Desktop/projpics/hill.png");
    QPixmap bernPix("C:/Users/zach/Desktop/projpics/bern.png");
    QPixmap rubiPix("C:/Users/zach/Desktop/projpics/rubi.png");

    if(charClass == "Warrior")
    {
        stamina = 65;
        strength = 220;
        intellect = 0;
        spirit = 0;

        ui->charPix->setPixmap(donPix);
    }

    else if(charClass == "Paladin")
    {
        stamina = 50;
        strength = 220;
        intellect = 50;
        spirit = 10;

        ui->charPix->setPixmap(bernPix);
    }

    else if(charClass == "Warlock")
    {
        stamina = 30;
        strength = 0;
        intellect = 200;
        spirit = 80;

        ui->charPix->setPixmap(hillPix);
    }

    else if(charClass == "Druid")
    {
        stamina = 30;
        strength = 0;
        intellect = 200;
        spirit = 120;

        ui->charPix->setPixmap(rubiPix);
    }

    ui->nameLabel->setText(charN);
    ui->classLabel->setText(charClass);
    ui->genderLabel->setText(charGender);

    ui->strLabel->setText(QString::number(strength));
    ui->staLabel->setText(QString::number(stamina));
    ui->intLabel->setText(QString::number(intellect));
    ui->spirLabel->setText(QString::number(spirit));
}

void MainWindow::updateWep()
{
    subNum = (rand() % 4);
    wName = wepName[subNum];
    wType = wepType[subNum];
    wClass = wepClass[subNum];
    wDmg = wepDmg[subNum];
    wDescrip = wepDescrip[subNum];

    ui->wepCLabel->setText(wClass);
    ui->wepNLabel->setText(wName);
    ui->wepTLabel->setText(wType);
    ui->descripLabel->setText(wDescrip);
    ui->dmgLabel->setText(wDmg);

    QPixmap swordPix("C:/Users/zach/Desktop/projpics/wowsword");
    QPixmap macePix("C:/Users/zach/Desktop/projpics/wowmace");
    QPixmap daggPix("C:/Users/zach/Desktop/projpics/wowdagg");
    QPixmap staffPix("C:/Users/zach/Desktop/projpics/wowstaff");

    if(wClass == "Warrior")
        ui->wepPix->setPixmap(swordPix);
    else if(wClass == "Paladin")
        ui->wepPix->setPixmap(macePix);
    else if(wClass == "Druid")
        ui->wepPix->setPixmap(staffPix);
    else if(wClass == "Warlock")
        ui->wepPix->setPixmap(daggPix);
    else
        ui->wepPix->setText("No Picture Provided!");
}

void MainWindow::on_wepGen_clicked()
{
    updateWep();
}
