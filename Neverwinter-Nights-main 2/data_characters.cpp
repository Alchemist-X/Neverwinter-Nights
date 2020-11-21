#include <iostream>
#include "data_characters.h"
#include "hero.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// we designed a few skills
Skill crit = {"Crit"};
Skill undefense = {"undefense"};
Skill Miss = {"Miss"};
Skill Reverse = {"Reverse"};

void skillPower(Enemy enemyToBattle, int &healthPoint, int &attackPower, int &defensivePower)
{
	srand(time(NULL));
	int skillRandomNumber;
	skillRandomNumber=rand()%4+1;
	switch (skillRandomNumber)
	{
		case 1:
		cout << "You are using the Crit skill now." << endl;
		enemyToBattle.enemyHealthPoint-=100;
		break;

		case 2:
		cout << "You are using the Undefense skill now." << endl;
		enemyToBattle.enemyDefensivePower=0;
		break;

		case 3:
		cout << "You are using the Miss skill now." << endl;
		healthPoint+=(enemyToBattle.enemyAttackPower - defensivePower);
		break;

		case 4:
		cout << "You are using the Reverse skill now." << endl;
		int tempHealth=healthPoint;
		int tempAttack=attackPower;
		int tempDefense=defensivePower;

		healthPoint=enemyToBattle.enemyHealthPoint;
		attackPower=enemyToBattle.enemyAttackPower;
		defensivePower=enemyToBattle.enemyDefensivePower;

		enemyToBattle.enemyHealthPoint=tempHealth;
		enemyToBattle.enemyAttackPower=tempAttack;
		enemyToBattle.enemyDefensivePower=tempDefense;
		break;

	}

}



