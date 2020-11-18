#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

// In this file, we write several scenes that are waiting for the player to discover.


// this function shows what player will come across in the inn.
void enterInn()
{
    char player_decision;
    int max_HP;
    int current_golds;

    cout << "Welcome to the Inn, would you like to have a rest?\n" 
    "With only 20 golds, you could enjoy the cozy bed and warm drink" << endl;
    cout << "Enter Y to stay, N to leave the Inn" << endl;
    cin >> player_decision;


    switch(player_decision)
    {
        case 'Y':
            cout << "you have a good sleep in a comfortable room, you feel energetic again" << endl;
            // todo
            break;
        case 'N':
            cout << "you slam the door and leave the Inn";
            break;
        default:
            cout << "invalid input, please enter it again";
            cin >> player_decision;
            switch (player_decision);
    }
}


// this function shows what player will come across in the Smithy.
void enterSmithy()
{
    char player_decision;
    int current_golds;


    cout << "Welcome! Here you can see all the equipments\n"
    "As long as you pay a good price, i could provide you with whatever you want\n"
    "Would like to have a look?" << endl;

    cout << "Enter Y to see the provided equipments, N to leave the Smithy" << endl;
    cin >> player_decision;

    switch(player_decision)
    {
        case 'Y':
            cout << "Sir, take a look at these handy equipments" << endl;
            // todo
            break;
        case 'N':
            cout << "you slam the door and leave the Smithy" << endl;
        default:
            cout << "invalid input, please enter it again";
            cin >> player_decision;
            switch (player_decision);
    }
}


// this function shows what player will come across in the Church.
void enterChurch()
{
    char player_decision;
    int current_golds;

    cout << "Welcome! I am priest Martin, what can i do for you?" << endl;
    cout << "Enter 1 to see property promotion\n"
    cout << "Enter 2 to see provided skills\n"
    cout << "Enter N to leave" << endl;
    cin >> player_decision;

    switch(player_decison)
    {
        case '1':
            cout << "What kind of property would you like to enhace?\n"
            cout << "ATK+5 (20 Golds) \n"
            cout << "DEF+5 (30 Golds) \n"
            cout << "AGI+5 (60 Golds) \n"
            cin >> player_decison;
            // todo
        case '2':
            cout << "What kind of skill would you like to learn?\n"
            cout << "Fighting Style (15 Golds) \n" 
            cout << "** skilful fighting allow you to increase ATK by 5 points ** \n"
            cout << "Extra Attack (60 Golds) \n"
            cout << " ** the warrior instinct enable you to hit enemy twice in the first round ** \n"
            cout << "Indomitable (100 Golds) \n"
            cout << " ** unyielding heart burst out fuel when player is dying, this allows you to restore HP to 1** "
            cin >> player_decision;
            // todo
        case 'N':
            cout << "you slam the door and leave the Church" << endl;
        default:
            cout << "invalid move, please enter it again";
            cin >> player_decision;
            switch (player_decision);
    }
}


// this function shows what player will come across in the Bar.
Void enterBar()
{   
    char player_decision;
    string current_mission;
    int current_golds;
    int beer_count;

    beer_count = 0;

    cout << "You enter the noisy and crowded bar, what would you like to do? \n"
    cout << "Enter 1 to have a cup of beer (cost 3 golds) \n"
    cout << "Enter 2 to chat with the owner \n"
    cout << "Enter 3 to listen to the travelling poet \n"
    cout << "Enter N to leave the Bar" << endl;
    cin >> player_decision;

    switch(player_decision)
    {
        case '1':
            cout << "It tastes nice, you murmur in a low voice \n"
            // todo
            beer_count++;
            cout << "I got more important thing to do, rather than getting drunk here \n"

            cout << "So, what's your next step? \n" ;
            cout << "Enter 1 to have a cup of beer (cost 3 golds) \n"
            cout << "Enter 2 to chat with the shopkeeper \n"
            cout << "Enter 3 to listen to the travelling poet \n"
            cout << "Enter N to leave the Bar" << endl;
            switch(player_decision)
        case '2':
            cout << "you make your way through the exciting crowds, begin chatting with the shopkeeper \n"
            cout << "It's a new face here, would you like to take some missions?"
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
            "Let's continue the story of Siegfiled in another day" << endl;
        case 'N':
            cout << "you slam the door and leave the Bar" << endl;
        default:
            cout << "invalid move, please enter it again";
            cin >> player_decision;
            switch (player_decision);
    }
}
