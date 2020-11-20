#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cctype>
#include "assistant_function.h"
#include "wild.h"
#include "hero.h"
#include "data_items.h"
#include "data_characters.h"
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
	bool flag =1;
	if (escape==4){
		flag = 0;
	}
	else
		flag = 1;
}


// this is the function related to the player's choices in the round.
void choiceInRound(int choiceOfTheRound, Enemy enemyToBattle)
{	
	switch (choiceOfTheRound)
	{
		case 1:
		// the player choose to give a common attack
					
			enemyToBattle.enemyHealthPoint = enemyToBattle.enemyHealthPoint + enemyToBattle.enemyDefensivePower - attackPower;
			cout << "The enemy have suffered " << attackPower - enemyToBattle.enemyDefensivePower << "point of ATK from you." << endl;
			cout << "Enemy's current HP is " << enemyToBattle.enemyHealthPoint << endl;
			break;

		case 2:
		// the player choose to use the potion
					
		cout << "Please enter the name of the potion name that you want to use." << endl;
		cout << "There are these potions in your package ('Empty' means no potion in the package): " <<endl;
		cout << "Potion_1 : " << potion_1 << endl;
		cout << "Potion_2 : " << potion_2 << endl;
		cout << "Potion_3 : " << potion_3 << endl;
		cout << "Please enter 'Empty' if your package is empty as well. " << endl;

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


// we will build the fight scene here
	
bool enterWild()	
{
	bool flag =1;
	bool continueGame = 1 ;
	int round=1;

	
	Enemy enemyToBattle;
	// copy the enemy to battle from the enemy that have already designed.
	// we will determine which enemy to fight with according to the hero's gameLevel. 
	switch (gameLevel)
	{
		case 1:
		enemyToBattle = Orc;
		break;

		case 2:
		enemyToBattle = Slime;
		break;

		case 3:
		enemyToBattle = FallenElf;
		break;

		case 4:
		enemyToBattle = Riddler;
		break;

		case 5:
		enemyToBattle = Joker;
		break;

		case 6:
		enemyToBattle = Thanos;
		break;
	}
	

	cout << "You will chanllenge " << enemyToBattle.enemyName << " this time." << endl;
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
			choiceInRound(choiceOfTheRound, enemyToBattle);

			// after this round, we will change the turn for the fight
			turn = enemyTurn;
		}
			

		// we will check if the battle came to an end.
		if ( ! isHeroAlive(healthPoint))
		{
			flag=0;
			cout << "Sorry, you lose the game, do better next time!" << endl;
			continueGame=0;
		}

		if (! isEnemyAlive(enemyToBattle.enemyHealthPoint))
		{
			flag=0;
			cout << "Congratulations! You have won the battle." << endl;
			gold += enemyToBattle.gold;
		}

		// if nothing happened, then we will go to the next round.
		round++;
	}
	// when the hero defeat the enemy, the hero's gameLevel will be enhanced.
	
	if (continueGame)
	{
		gameLevel++;
	}


	// return a boolean value to determine if the game will go on.
	
	return continueGame;
}


















