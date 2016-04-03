#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int die1, die2, die3 = 0;
    int total;
    int subNum;
    int strength;
    int stamina;
    int intellect;
    int spirit;


    QString cName[4] = {"WarrenBuffet", "LocknessMonster", "Lawladin", "WillFeral"};
    QString cClass[4] = {"Warrior", "Warlock", "Paladin", "Druid"};
    QString cGender[2] = {"Male", "Female"};
    QString charN;
    QString charClass;
    QString charGender;

    QString wepType[4] = {"2Hand Sword", "Dagger/Offhand", "2Hand Mace", "Staff"};
    QString wepClass[4] = {"Warrior", "Warlock", "Paladin", "Druid"};
    QString wepDmg[4] = {"200 Armor Penetrate", "180 SpellPower", "200 AttackPower", "220 SpellPower"};
    QString wepName[4] = {"Sword of Capability", "Dagger of Thieves", "Mace of Doom", "Staff of Royalty"};
    QString wepDescrip[4] = {"\"Only for the capable..\"", "\"No honor among thieves..\"", "\"Mace from the under world..\"", "\"Only for the noble..\""};
    QString wType;
    QString wClass;
    QString wDmg;
    QString wName;
    QString wDescrip;


    void updateTotal();
    void updateCharacter();
    void updateCharPix();
    void updateWep();




private slots:
    void on_roll1_clicked();

    void on_roll2_clicked();

    void on_roll3_clicked();

    void on_charGen_clicked();

    void on_wepGen_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
