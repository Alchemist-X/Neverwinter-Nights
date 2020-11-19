#include <iostream>
#include <cmath>
#include <fstream>
#include "data_items.h"
#include "data_chracters.h"
#include "status.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
using namespace std;


//in this cpp file, we will build the fight scene. 

// there are several pivotal functions in this program.

// we want to check if the hero is alive at the end of each round 
bool isHeroAlive(int healthPoint)
{
	if(healthPoint>0){
		return 1;
	}
	else
		return 0;
}

// we want to check if the boss is alive at the end of each round
bool isEnemyAlive(int enemyHealthPoint)
{
	if(enemyHealthPoint>0){
		return 1;
	}
	else
		return 0;
}


// we want to confirm if the player wants to escape from the fight
void isEscape(int escape)
{
	if (escape==4){
		flag = 0;
	}
	else
		flag = 1;
}


// this is the function related to the player's choices in the round.
void choiceInRound(int choiceOfTheRound)
{
	switch (choiceOfTheRound)
	{
		case 1:
		// the player choose to give a common attack
					
		enemyToBattle.enemyHealthPoint = enemyToBattle.enemyHealthPoint + enemyToBattle.enemyDefensivePower - attackPower;
		cout << "The enemy have suffered " << - enemyToBattle.enemyDefensivePower + attackPower << "point of ATK from you." << endl;
		cout << "Enemy's current HP is " << enemyToBattle.enemyHealthPoint << endl;
		break;

		case 2:
		// the player choose to use the potion
					
		cout << "Please enter the name of the potion name that you want to use." << endl;
		cout << "There are these potions in your package ('Empty' means no potion in the package): " <<endl;
		cout << "Potion_1 : " << potion_1 << endl;
		cout << "Potion_2 : " << potion_2 << endl;
		cout << "Potion_3 : " << potion_3 << endl;
		cout << "Please enter 'Empty' if your package is empty as well. " << enld;

		string choiceOfThePotion;
		cin >> choiceOfThePotion;
		potionPower(choiceOfThePotion);
		break;

		case 3:
		// the player chooses to use the skills
		skillPower();
		break;

		case 4:
		// the player chooses to escape from the fight
		cout << "You escaped from the fight." << endl;
		isEscape(choiceOfTheRound);
		break;

		default:
		// if the player enter a wrong number, we should let the player input another number.
		cout << "Invalid input! Please try again." << endl;
		cin >> choiceOfTheRound;
		choiceInRound(choiceOfTheRound);
		break;

	}
}



int main()
{
	// first of all, we want to welcome the players and explain this game. 
	cout << "Welcome to this game of adventure!" <<endl;




	// the player can choose the race for the hero.
	cout << "Please choose the race for your hero." << endl;
	string inputRace;
	cin >> inputRace;
	if (inputRace=="Human")
	{
		raceHuman.race="Human";
	}
	if (inputRace=="Monster")
	{
		raceMonster.race="Monster";
	}
	if (inputRace=="Fairy")
	{
		raceFairy.race="Fairy";
	}
	if (inputRace=="Magician")
	{
		raceMagician.race="Magician";
	}


	// the player can name for the hero.
	cout << "Please pick a adorable name for your hero." << endl;
	string inputName;
	cin >> inputName;
	




	ifstream fin;
	fin.open("save.txt");
	// in all *status.txt, all the data have the following format：
	// character name: 
	// game level that the player in:
	// the character's money:
	// the character's health point:
	// the character's attack power:
	// the character's defensive power:
	// the character's agility:
	// the character's equipment_1:
	// the character's equipment_2:
	// the character's equipment_3:
	// the character's potion_1:
	// the character's potion_2:
	// the character's potion_3:
	// the character's skill_1:
	// the character's skill_2:
	// the character's race
	getline(fin,l1);
	characterName=l1;
	getline(fin,l2);
	istringstream is(l2);
	is >> gameLevel;
	getline(fin,l3);
	istringstream is(l3);
	is >> correntMoney;
	getline(fin,l4);
	istringstream is(l4);
	is >> healthPoint;
	getline(fin,l5);
	istringstream is(l5);
	is >> attackPower;
	getline(fin,l6);
	istringstream is(l6);
	is >> defensivePower;
	getline(fin,l7);
	istringstream is(l7);
	is >> agility;
	getline(fin,l8);
	equipment_1=l8;
	getline(fin,l9);
	equipment_2=l9;
	getline(fin,l10);
	equipment_3=l10;
	getline(fin,l11);
	potion_1=l11;
	getline(fin,l12);
	potion_2=l12;
	getline(fin,l13);
	potion_3=l13;
	getline(fin,l14);
	skill_1=l14;
	getline(fin,l15);
	skill_2=l15;
	getline(fin,l16);
	race=l16;
	// we read the data from the file of character's status
	fin.close();

	// we will build the fight scene here
	
	bool flag =1;
	int round=1;
	
	//cout << "Please choose a Monster or a Boss to fight." << endl;
	//cout << "Please tpye a number to choose." << endl;
	//cout << "Enter 1 to battle with Monster Orc." << endl;
	//cout << "Enter 2 to battle with Monster Slime." << endl;
	//cout << "Enter 3 to battle with Monster FallenElf." << endl;
	//cout << "Enter 4 to battle with Boss Riddler." << endl;
	//cout << "Enter 5 to battle with Boss Joker." << endl;
	//cout << "Enter 6 to battle with Boss Thanos." << endl;

	//int choiceOfEnemy;
	Enemy enemyToBattle;
	//cin >> choiceOfEnemy;

	cout << "You will chanllenge " << enemyToBattle.enemyName << " this time." endl;
	cout << "Your agility is " << agility << "  " << "Your enemy's agility is " << enemyToBattle.enemyAgility << endl;

	// compare the agility of the hero and enemy, to determine whether the hero or the enemy fight first.
	int heroTurn=1;
	int enemyTurn=2;
	int turn;
	if (agility <= enemyToBattle.enemyAgility)
	{
		cout << "Enemy will fight first." << endl;
		turn = enemyTurn;
	}
	else
	{
		cout << "You will fight first." << endl;
		turn = heroTurn;
	}


	// we will begin the fight with a while function.
	while(flag)
	{
		cout << "This is the Round " << round << " of the fight." << endl;

		// we will check if it's hero's turn or enemy's turn.
				
		if (turn == enemyTurn)
		// now it's enenmy's turn
		{
			cout << "This is the enemy's turn of fight." << endl;

			healthPoint = healthPoint + defensivePower - enemyToBattle.enemyAttackPower;

			cout << "You have suffered " << - defensivePower + enemyToBattle.enemyAttackPower << "point of ATK from the enemy." << endl;
			cout << "Your current HP is " << healthPoint << endl;

			// after this round, we will change the turn for the fight
			turn = heroTurn;
		}



		else
		// now it's hero's turn
		{
			cout << "Now it's your turn." << endl;
			cout << "Please input a number to indicate your choice." << endl;
			cout << "Enter 1 to give the enemy a common attack." << endl;
			cout << "Enter 2 to use your potion." << endl;
			cout << "Enter 3 to give the enemy a skill attack." << endl;
			cout << "Enter 4 to escape from the fight." << endl;

			int choiceOfTheRound;
			cin >> choiceOfTheRound;
			choiceInRound(choiceOfTheRound);

			// after this round, we will change the turn for the fight
			turn = enemyTurn;
		}
			

		// we will check if the battle came to an end.
		if ( ! isHeroAlive(healthPoint))
		{
			flag=0;
			cout << "Sorry, you lose the game, do better next time!" << endl;
		}

		if (! isEnemyAlive(enemyHealthPoint))
		{
			flag=0;
			cout << "Congratulations! You have won the game." << endl;
		}

		// if nothing happened, then we will go to the next round.
		round++;
	}
}



