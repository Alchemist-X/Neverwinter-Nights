#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include "initialization.h"
#include "wild.h"
#include "scenes.h"
#include "save.h"
#include "hero.h"
using namespace std;

std::string heroName,race,equipment_1,equipment_2,equipment_3,potion_1,potion_2,potion_3,talent;
int gameLevel,gold,healthPoint,attackPower,defensivePower,agility,max_HP;
bool continueGame = 1;
bool continueProgram = 1;
bool saveExist = 1;
bool final(bool &continuGame);

int main()
{
	char playerChoice;
	
	//we use two loops to determinge control the game and program.
	while (continueProgram)
	{
		ifstream fin("save.txt");
		if (!fin)
			saveExist = 0;

		cout << "\nWelcome to the world of Neverwinter Nights! \n"
		"***   New Game   ***" << endl;
		if (saveExist)
			cout << "***   Load Game   ***" << endl;
		cout << "***   Developers   *** \n"
		"***   Quit Game   ***" << endl;
		cout << "\n"
		"Enter 1 to play a new game \n"
		"Enter 2 to continue playing \n"
		"Enter 3 to check developers \n"
		"Enter 4 to quit the game" << endl;
		cin >> playerChoice;
		switch(playerChoice)
		{
			case '1':
				// we will have a initialization here.
				initialize();
				break;
			case '2':
				cout << "\nLoading... \n"
				"Welcome Back! Adventurer ~" << endl;
				break;
			case '3':
				cout << "\nCo-Developers"
				"Yishu Wang BEng(CE) Yr2 \n"
				"Shuang Wu BSC Yr2" << endl;
				break;
			case '4':
				return 0;
				break;
			case 'M':
				cout << "\nDeveloper's shortcut \n"
				"let's see the end of game ~ \n" << endl;
				final(continueGame);
		}

		while (continueGame)
		{

			// we will read the hero's status from the save.txt file.
			ifstream fin;
			fin.open("save.txt");
			// in all save.txt, all the data have the following format：
			// hero name:
			// game level that the player in:
			// the hero's money:
			// the hero's health point:
			// the hero's attack power:
			// the hero's defensive power:
			// the hero's agility:
			// the hero's race
			// the hero's equipment_1:
			// the hero's equipment_2:
			// the hero's equipment_3:
			// the hero's potion_1:
			// the hero's potion_2:
			// the hero's potion_3:
			// the hero's talent:
			// the max_HealthPoint of the hero:

			// we want to get the datas from the save.txt
			// these global values will be used throughout the program.
			

			string l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16;

			getline(fin, l1);
			heroName = l1;
			getline(fin, l2);
			istringstream is_1(l2);
			is_1 >> gameLevel;
			getline(fin, l3);
			istringstream is_2(l3);
			is_2 >> gold;
			getline(fin, l4);
			istringstream is_3(l4);
			is_3 >> healthPoint;
			getline(fin, l5);
			istringstream is_4(l5);
			is_4 >> attackPower;
			getline(fin, l6);
			istringstream is_5(l6);
			is_5 >> defensivePower;
			getline(fin, l7);
			istringstream is_6(l7);
			is_6 >> agility;
			getline(fin, l8);
			race = l8;
			getline(fin, l9);
			equipment_1 = l9;
			getline(fin, l10);
			equipment_2 = l10;
			getline(fin, l11);
			equipment_3 = l11;
			getline(fin, l12);
			potion_1 = l12;
			getline(fin, l13);
			potion_2 = l13;
			getline(fin, l14);
			potion_3 = l14;
			getline(fin, l15);
			talent = l15;
			getline(fin, l16);
			istringstream is_7(l16);
			is_7 >> max_HP;

			// we read the data from the file of hero's status
			fin.close();

			char toGo;
			cout << "Hi, " << heroName << endl;
			cout << "where do you want to go? \n"
					"Enter I to go to Inn \n"
					"Enter S to go to Shop \n"
					"Enter C to go to Church \n"
					"Enter B to go to Bar \n"
					"Enter W to go to wild and fight with enemy \n"
					"Enter Q to save and return to menu"
				 << endl;
			cin >> toGo;

			switch (toGo)
			{
			case 'I':
				enterInn(healthPoint, gold);
				break;
			case 'S':
				enterShop(healthPoint, attackPower, defensivePower, agility, gold);
				break;
			case 'C':
				enterChurch(healthPoint, attackPower, defensivePower, agility, gold);
				break;
			case 'B':
				enterBar(healthPoint, attackPower, defensivePower, agility, gold);
				break;
			case 'W':
				enterWild(healthPoint, attackPower, defensivePower, agility, gold, gameLevel);
				break;
			case 'Q':
				Save(heroName,gameLevel,gold,healthPoint,attackPower,defensivePower,agility,race,equipment_1,equipment_2,equipment_3,potion_1,potion_2,potion_3,talent,max_HP);
				break;
			}
		}
	}
}


// This is the final chapter of the game
bool final(bool &continuGame)
{

    cout << "\nYour blade inserts the chest of Thanos \n"
    "It's ...... impossible!!! Thanos yell out \n"
    "Within second, the giant creature falls dawn and turn into ashes immediately \n"
    "In the ground, you suprisingly find the ... !!! \n"
    "The condemned heart of fallen Lich !!!! \n"
    "Congratulation! warrior, with this legendary item, you are now able to end the tragedy in the world of Neverwinter Nights \n" 
	"THE END" << endl;
    continueProgram = false;
	continueGame = false;
    return continueProgram;
}
