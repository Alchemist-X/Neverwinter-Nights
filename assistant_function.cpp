#include <iostream>
#include "assistant_function.h"
#include <cstdlib>
using namespace std;


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

	}
}
