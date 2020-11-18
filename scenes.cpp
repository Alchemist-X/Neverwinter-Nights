#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

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
            cout << "invalid move, please enter it again";
            cin >> player_decision;
            switch (player_decision);
    }
}

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
    }
}
