#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include "scenes.h"
#include "data_items.h"
#include "hero.h"

using namespace std;

// In this file, we write several scenes that are waiting for the player to discover.

// this function shows what player will come across in the inn.
void notEnoughGold()
{
    cout << "Next time, remember to bring enough money! \n"
            "you are kicked out of the door."
         << endl;
}

void buyThings(int &healthPoint, int &attackPower, int &defensivePower, int &gold , string buyItem)
{
    cin >> buyItem;

    if (equipment_1 == "Empty")
    {
        equipment_1 = buyItem;
    }
    else
    {
        if (equipment_2 == "Empty")
        {
            equipment_2 = buyItem;
        }
        else
        {
            if (equipment_3 == "Empty")
            {
                equipment_3 = buyItem;
            }
            else{
                return;
            }
        }
    }
    equipmentPower(buyItem, healthPoint, attackPower, defensivePower, gold);
    cout << "Thank for purchasing! See u next time~" << endl;
}

void enterInn(int &healthPoint, int &gold)
{
    char player_decision;

    cout << "Welcome to the Inn, would you like to have a rest? \n"
            "With only 20 gold, you could enjoy the cozy bed and warm drink \n"
            "Enter Y to stay, N to leave the Inn"
         << endl;
    cin >> player_decision;

    switch (player_decision)
    {
    case 'Y':
        cout << "you have a good sleep in a comfortable room, you feel energetic again." << endl;
        if (gold >=0)
        {
            healthPoint = max_HP;
            gold -= 20;
        }
        else
            notEnoughGold();
        
        break;

    case 'N':
        cout << "you slam the door and leave the Inn";
        break;

    default:
        cout << "invalid input, please enter it again";
        cin >> player_decision;
        enterInn(healthPoint,gold);
    }
}

// this function shows what player will come across in the Shop.
void enterShop(int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold)
{
    string buyItem;
    char player_decision;

    cout << "Welcome! Here you can see all the equipments\n"
            "As long as you pay a good price, i could provide you with whatever you want\n"
            "Would like to have a look?"
         << endl;

    cout << "Enter Y to see the provided equipments, N to leave the Shop" << endl;
    cin >> player_decision;

    switch (player_decision)
    {
    case 'Y':
        cout << "Sir, take a look at these handy equipments" << endl;
        cout << "The equipments are listed below \n"
                " Knife *** gold:100 *** ATK+30 *** DEF+10 *** \n"
                " Sword *** gold:120 *** ATK+40 *** DEF+10 *** \n"
                "Shield *** gold:130 *** ATK+10 *** DEF+30 *** \n"
                "Armour *** gold:150 *** ATK+20 *** DEF+50 *** \n"
                "  Tank *** gold:250 *** ATK+90 *** DEF+70 *** \n"
                "Enter the exact name of equipments to buy it~"
             << endl;

        buyThings(healthPoint, attackPower, defensivePower, gold, buyItem);

        break;
    case 'N':
        cout << "you slam the door and leave the Shop" << endl;
    default:
        cout << "invalid input, please enter it again";
        cin >> player_decision;
        enterShop(healthPoint, attackPower, defensivePower, agility, gold);
    }
}

// this function shows what player will come across in the Church.
void enterChurch(int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold)
{
    char player_decision;

    cout << "Welcome! I am priest Martin, what can i do for you?" << endl;
    cout << "Enter 1 to see property promotion\n"
            "Enter 2 to see provided skills\n"
            "Enter N to leave"
         << endl;
    cin >> player_decision;

    switch (player_decision)
    {
    case '1':
        cout << "What kind of property would you like to enhace?\n"
                "ATK+5 (20 gold) \n"
                "DEF+5 (30 gold) \n"
                "AGI+5 (60 gold) \n"
                "HP+20 (40 gold) \n"
             << endl;
        cin >> player_decision;

        cout << " Enter A to enhace ATK \n"
                "Enter D to enhace DEF \n"
                "ENter G to enhace AGI \n"
                "Enter H to enhace HP "
             << endl;

        switch (player_decision)
        {
        case 'A':
            if (gold < 20)
                {notEnoughGold();
                break;}
            attackPower += 5;
            break;
        case 'D':
            if (gold < 30)
                {notEnoughGold();
                break;}
            defensivePower += 5;
            break;
        case 'G':
            if (gold < 60)
                {notEnoughGold();
                break;}
            agility += 5;
            break;
        case 'H':
            if (gold < 40)
                {notEnoughGold();
                break;}
            healthPoint += 20;
            break;
        }
    case '2':
        cout << "What kind of skill would you like to learn?\n"
                "Fighting Style (15 gold) \n"
                "** skilful fighting allow you to increase ATK by 5 points ** \n"
                "Extra Attack (60 gold) \n"
                " ** the warrior instinct enable you to hit enemy twice in the first round ** \n"
                "Indomitable (100 gold) \n"
                " ** unyielding heart burst out fuel when player is dying, this allows you to restore HP to 1** "
             << endl;
        cin >> player_decision;
        // todo
    case 'N':
        cout << "you slam the door and leave the Church" << endl;
    default:
        cout << "invalid move, please enter it again";
        cin >> player_decision;
        enterChurch(healthPoint, attackPower, defensivePower, agility, gold);
    }
}

// this function shows what player will come across in the Bar.
void enterBar(int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold)
{
    char player_decision;
    string current_mission;
    int beer_count;

    beer_count = 0;

    cout << "You are in a noisy and crowded bar, what would you like to do? \n"
            "Enter 1 to have a cup of beer (cost 3 gold) \n"
            "Enter 2 to chat with the owner \n"
            "Enter 3 to listen to the travelling poet \n"
            "Enter N to leave the Bar"
         << endl;
    cin >> player_decision;

    switch (player_decision)
    {
    case '1':
        cout << "It tastes nice, you murmur in a low voice " << endl;
        // todo
        beer_count++;
        cout << "I got more important thing to do, rather than getting drunk here \n"
             << endl;
        enterBar(healthPoint, attackPower, defensivePower, agility, gold);
        break;
    case '2':
        cout << "you make your way through the exciting crowds, begin chatting with the shopkeeper \n"
                "It's a new face here, would you like to take some missions?"
             << endl;
        break;
        //todo
    case '3':
        cout << "Now he was of the strength that he bare weapons well \n"
                "Whatever he needed thereto, of this he had enow. With purpose he began to woo fair ladies \n"
                "these bold Siegfried courted well in proper wise \n"
                "Then bade Siegmund have cried to all his men, that he would hold a feasting with his loving kindred \n"
                "The tidings thereof men brought into the lands of other kings \n"
                "To the strangers and the home-folk he gave steeds and armor. Wheresoever any was found who, because of his birth, should become a knight \n"
                "these noble youths were summoned to the land for the feasting \n"
                "…… \n"
                "It's late now \n"
                "Let's continue the story of Siegfiled in another day"
             << endl;

        cout << "So, what's your next step? \n"
                "Enter 1 to have a cup of beer (cost 3 gold) \n"
                "Enter 2 to chat with the shopkeeper \n"
                "Enter 3 to listen to the travelling poet \n"
                "Enter N to leave the Bar"
             << endl;
        break;
    case 'N':
        cout << "you slam the door and leave the Bar" << endl;
        break;
    default:
        cout << "invalid move, please enter it again";
        cin >> player_decision;
        enterBar(healthPoint, attackPower, defensivePower, agility, gold);
    }
}
