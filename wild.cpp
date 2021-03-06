#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cctype>
#include "wild.h"
#include "hero.h"
#include "data_items.h"
#include "data_characters.h"
using namespace std;

Enemy Riddler = {"Riddler",100,100,30,20,10};
Enemy Joker = {"Joker",200,150,60,30,40};
Enemy Thanos = {"Thanos",500,300,100,80,70};
Enemy Orc = {"Orc",60,30,20,5,10};
Enemy Slime = {"Slime",80,90,5,15,5};
Enemy FallenElf = {"FallenElf",200,45,20,1,70};




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
void isEscape(int escape, bool &flag)
{
	if (escape==4){
		flag = 0;
	}
	else
		flag = 1;
}


// this is the function related to the player's choices in the round.
void choiceInRound(int &choiceOfTheRound, Enemy &enemyToBattle, bool &flag, int &healthPoint, int &attackPower, int &defensivePower, int &agility)
{	
	string choiceOfThePotion;
	
	switch (choiceOfTheRound)
	{	
		case 1:
		// the player choose to give a common attack
			if ((attackPower - enemyToBattle.enemyDefensivePower) >0){
				enemyToBattle.enemyHealthPoint = enemyToBattle.enemyHealthPoint + enemyToBattle.enemyDefensivePower - attackPower;
				cout << "\nThe enemy have suffered " << attackPower - enemyToBattle.enemyDefensivePower << " point of ATK from you." << endl;
				cout << "Enemy's current HP is " << enemyToBattle.enemyHealthPoint << "." << endl;
			}

			else{
				cout <<"Your attackPower is so weak that the enemy did not suffer from you." << endl;
			}
			
			break;

		case 2:
		// the player choose to use the potion
					
		cout << "\nPlease enter the name of the potion name that you want to use." << endl;
		cout << "There are these potions in your package ('Empty' means no potion in the package): " <<endl;
		cout << "Potion_1 : " << potion_1 << endl;
		cout << "Potion_2 : " << potion_2 << endl;
		cout << "Potion_3 : " << potion_3 << endl;
		cout << "Please enter 'Empty' if your package is empty as well. " << endl;

		cin >> choiceOfThePotion;
		potionPower(choiceOfThePotion, healthPoint, attackPower, defensivePower);
		break;

		case 3:
		// the player chooses to use the skills
		cout << "you decide to use skills" << endl;
		skillPower(enemyToBattle, healthPoint, attackPower, defensivePower);
		break;

		case 4:
		// the player chooses to escape from the fight
		cout << "\nYou escaped from the fight." << endl;
		isEscape(choiceOfTheRound,flag);
		break;

		default:
		// if the player enter a wrong number, we should let the player input another number.
		cout << "\nInvalid input! Please try again." << endl;
		cin >> choiceOfTheRound;
		choiceInRound(choiceOfTheRound, enemyToBattle, flag, healthPoint, attackPower, defensivePower, agility);

	}
}


// we will build the fight scene here
	
bool enterWild( int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold, int &gameLevel)	
{
	bool continueGame =1;
	bool flag =1;
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
	

	cout << "\nYou will chanllenge " << enemyToBattle.enemyName << " this time." << endl;
	cout << "Your agility is " << agility << "." << endl;
	cout << "Your enemy's agility is " << enemyToBattle.enemyAgility << "." << endl;

	// compare the agility of the hero and enemy, to determine whether the hero or the enemy fight first.

	int heroTurn=1;
	int enemyTurn=2;
	int turn;

	if (agility <= enemyToBattle.enemyAgility)
	{
		cout << endl;
		cout << "Enemy will fight first." << endl;
		turn = enemyTurn;
	}
	else
	{
		cout << endl;
		cout << "You will fight first." << endl;
		turn = heroTurn;
	}


	
	// we will begin the fight with a while function.
	while(flag)
	{
		cout << "\nThis is the Round " << round << " of the fight." << endl;

		// we will check if it's hero's turn or enemy's turn.
				
		if (turn == enemyTurn)
		// now it's enenmy's turn
		{
			cout << "\nThis is the enemy's turn of fight." << endl;


			// we want the suffer from the enemy to be positive
			
			if ((- defensivePower + enemyToBattle.enemyAttackPower)>0){
				healthPoint = healthPoint + defensivePower - enemyToBattle.enemyAttackPower;
				cout << "You have suffered " << - defensivePower + enemyToBattle.enemyAttackPower << " points of ATK from the enemy." << endl;
				cout << "Your current HP is " << healthPoint << "." << endl;
			}

			else{
				cout << "Your defensivePower is so strong that you did not lose HP." << endl;
				cout << "Your current HP is " << healthPoint << endl;
			}

			// after this round, we will change the turn for the fight
			turn = heroTurn;
		}



		else
		// now it's hero's turn
		{
			cout << "\nNow it's your turn.\n" << endl;
			cout << "Please input a number to indicate your choice." << endl;
			cout << "Enter 1 to give the enemy a common attack." << endl;
			cout << "Enter 2 to use your potion." << endl;
			cout << "Enter 3 to give the enemy a skill attack." << endl;
			cout << "Enter 4 to escape from the fight." << endl;

			int choiceOfTheRound;
			cin >> choiceOfTheRound;
			choiceInRound(choiceOfTheRound, enemyToBattle,flag,healthPoint,attackPower,defensivePower,agility);

			// after this round, we will change the turn for the fight
			turn = enemyTurn;
		}
			

		// we will check if the battle came to an end.
		if ( ! isHeroAlive(healthPoint))
		{
			flag=0;
			cout << "\nSorry, you lose the game, do better next time!" << endl;
			continueGame=0;
		}

		if (! isEnemyAlive(enemyToBattle.enemyHealthPoint))
		{
			flag=0;
			cout << "\nCongratulations! You have won the battle." << endl;
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


















