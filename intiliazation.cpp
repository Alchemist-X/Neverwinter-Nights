#include <iostream>
#include <fstream>
#include <cstdlib>
#include "data_chracters.h"
#include "status.h"
#include <string>
using namespace std;

void intialize()
{   
    string inputNickname,race;
    char decision;
    int totalPoints,healthPoint,attackPower,defensivePower,agility;

    totalPoints = 30;
    healthPoint = 50;
    attackPower = 30;
    defensivePower = 25;
    agility = 20;

    cout << "Welcome to the world of Neverwinter Nights! Brave Adventurer! \n"
    "In the game, you will be able to discover the hidden secret of a mysterious relic. \n"
    "Along the adventure, you can beat various type of enemies, collect distinguised items and enhace your properties. \n"
    "*** ♪(´ε｀ ) *** \n"
    "Please decide the name for your character, press Enter to finish~" << endl;

    cin >> inputNickname;
    cout << "Cool! " << inputNickname << ", A name of Warrior" << endl;
    cout << "Now, it's time to distribute points through attackPower,defensivePower,agility and healthPoint. \n" 
    "** Hint: attackPower,defensivePower,agility and healthPoint stands for attack,defensivePowerence,agilitylity and health points ins equence. **"
    "You will be give 30 points in total"
    "Please enter the properties that you want to distribute" << endl;
    // todo
    cout << "Your character can have different races, please choose one of the following \n"
    "Enter H for Human \n"
    "Enter D for Dwarf \n"
    "Enter E for Elf \n"
    "Enter G for Goblin" << endl;
    cin >> decision;
    switch(decision)
    {
        case 'H':
            race = "Human";
            attackPower += 5;
            defensivePower += 5;
        case 'D':
            race = "Dwarf";
            attackPower += 5;
            healthPoint += 20;
        case 'E':
            race = "Elf";
            attackPower += 15;
            agility += 20;
            defensivePower -= 5;
            healthPoint += 30;
        case 'G':
            race = "Goblin";
            defensivePower += 5;
            healthPoint += 20;
    } 

    ofstream fout;
    fout.open("save.txt");
    if ( fout.fail() ) {
        cout << "Error in file opening!"
               << endl;
        exit(1);
    }

    fout << inputNickname << endl;
    fout << 1 << endl;
    fout << 100 << endl;
    fout << healthPoint << endl;
    fout << attackPower << endl;
    fout << defensivePower << endl;
    fout << agility << endl;
    fout << race << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;

    fout.close();
    
}
