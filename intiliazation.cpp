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
    int totalPoints,HP,ATK,DEF,AGI;

    totalPoints = 30;
    HP = 50;
    ATK = 30;
    DEF = 25;
    AGI = 20;

    cout << "Welcome to the world of Neverwinter Nights! Brave Adventurer! \n"
    "In the game, you will be able to discover the hidden secret of a mysterious relic. \n"
    "Along the adventure, you can beat various type of enemies, collect distinguised items and enhace your properties. \n"
    "*** ♪(´ε｀ ) *** \n"
    "Please decide the name for your character, press Enter to finish~" << endl;

    cin >> inputNickname;
    cout << "Cool! " << inputNickname << ", A name of Warrior" << endl;
    cout << "Now, it's time to distribute points through ATK,DEF,AGI and HP. \n" 
    "** Hint: ATK,DEF,AGI and HP stands for attack,defence,agility and health points ins equence. **"
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
            ATK += 5;
            DEF += 5;
        case 'D':
            race = "Dwarf";
            ATK += 5;
            HP += 20;
        case 'E':
            race = "Elf";
            ATK += 15;
            AGI += 20;
            DEF -= 5;
            HP += 30;
        case 'G':
            race = "Goblin";
            DEF += 5;
            HP += 20;
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
    fout << HP << endl;
    fout << ATK << endl;
    fout << DEF << endl;
    fout << AGI << endl;
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
