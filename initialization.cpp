#include <iostream>
#include <fstream>
#include <string>
#include "hero.h"
using namespace std;


void chooseDistribution(int &totalPoints, int &healthPoint, int &attackPower, int &defensivePower, int &agility)
{
    int distribution_1,distribution_2,distribution_3,distribution_4;
    cin >> distribution_1 >> distribution_2 >> distribution_3 >> distribution_4;

    if((distribution_1 >=0) && (distribution_2 >=0) && (distribution_3 >=0) && (distribution_4 >=0) && (distribution_1+distribution_2+distribution_3+distribution_4 ==30))
    {
        attackPower += distribution_1;
        defensivePower += distribution_2;
        agility += distribution_3;
        healthPoint += distribution_4;
    }
    else
    {
        cout << "Invalid input! Please try again." << endl;
        chooseDistribution(totalPoints, healthPoint, attackPower, defensivePower, agility);
    }
}


void chooseRace(char decision)
{
    switch(decision)
    {
        case 'H':
            race = "Human";
            attackPower += 5;
            defensivePower += 5;
            break; 

        case 'D':
            race = "Dwarf";
            attackPower += 5;
            healthPoint += 20;
            break;

        case 'E':
            race = "Elf";
            attackPower += 15;
            agility += 20;
            defensivePower -= 5;
            healthPoint += 30;
            break;

        case 'G':
            race = "Goblin";
            defensivePower += 5;
            healthPoint += 20;
            break;

        default :
            cout << "Invalid input! Please try again!" << endl;
            cin >> decision;
            chooseRace(decision);

    } 
}



void initialize()
{   
    char decision;
    int totalPoints;
    
    totalPoints = 30;
    healthPoint = 100;
    attackPower = 30;
    defensivePower = 25;
    agility = 20;
    gold = 100;
    gameLevel = 1;
    max_HP = 150;

    cout << "\nWelcome to the world of Neverwinter Nights! Brave Adventurer! \n"
    "In the game, you will be able to discover the hidden secret of a mysterious relic. \n"
    "Along the adventure, you can beat various type of enemies, collect special items and enhace your properties. \n"
    "*** ♪(´ε｀ ) *** \n"
    "Please decide the name for your character, press Enter to finish ~" << endl;

    cin >> heroName;
    cout << "Cool! " << heroName << " , A name of Warrior" << endl;
    cout << "Now, it's time to distribute points through attackPower,defensivePower,agility and healthPoint. " << endl;
    cout << "** Hint: attackPower,defensivePower,agility and healthPoint stands for attack,defensivePowerence,agility and health points ins equence. **" << endl;
    cout << "You will be give 30 points in total" << endl;
    cout << "Please enter the properties that you want to distribute" << endl;
    cout << "Please input four numbers, 1st stands for increase in attackPower, 2nd for defensivePower, 3rd for agility, 4th for healthPoint." << endl;
    
    
    chooseDistribution(totalPoints, healthPoint, attackPower, defensivePower, agility);


    cout << "Your character can have different races, please choose one of the following \n"
    "Enter H for Human \n"
    "Enter D for Dwarf \n"
    "Enter E for Elf \n"
    "Enter G for Goblin" << endl;
    cin >> decision;
    
    chooseRace(decision);
    cout << "\n OK!, your race is " << race << "!" << endl;

    // there we want to know the max health point of the hero, and thus recover to this value in the inn.
    int max_HP = healthPoint;

    ofstream fout;
    fout.open("save.txt");
    if ( fout.fail() ) {
        cout << "Error in file opening!"
               << endl;
        exit(1);
    }

    fout << heroName << endl;
    fout << gameLevel << endl;
    fout << gold << endl;
    fout << healthPoint << endl;
    fout << attackPower << endl;
    fout << defensivePower << endl;
    fout << agility << endl;
    fout << race << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << "blood" << endl;
    fout << "strength" << endl;
    fout << "Empty" << endl;
    fout << "Empty" << endl;
    fout << max_HP << endl;

    fout.close();
    
}
