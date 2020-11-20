#include <iostream>
#include "data_characters.h"
#include "hero.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// In this file, we describe elements that are related with charcterr, namely player and enemies


// enemy one, the Riddler


Enemy Riddler = {"Riddler",100,100,30,20,10};
// Riddler.enemyName="Riddler";
// Riddler.gold=100;
// Riddler.enemyHealthPoint=100;
// Riddler.enemyAttackPower=30;
// Riddler.enemyDefensivePower=20;
// Riddler.enemyAgility=10;


// enemy two, the Joker


Enemy Joker = {"Joker",200,150,60,30,40};
// Joker.enemyName="Joker";
// Joker.gold=200;
// Joker.enemyHealthPoint=150;
// Joker.enemyAttackPower=60;
// Joker.enemyDefensivePower=30;
// Joker.enemyAgility=40;


// enemy three, the Thanos


Enemy Thanos = {"Thanos",500,300,100,80,70};
// Thanos.enemyName="Thanos";
// Thanos.gold=500;
// Thanos.enemyHealthPoint=300;
// Thanos.enemyAttackPower=100;
// Thanos.enemyDefensivePower=80;
// Thanos.enemyAgility=70;


// there are three little enemies we can percieve them as Monsters.


Enemy Orc = {"Orc",60,30,20,5,10};
// Orc.enemyName="Orc";
// Orc.gold=20;
// Orc.enemyHealthPoint=30;
// Orc.enemyAttackPower=20;
// Orc.enemyDefensivePower=5;
// Orc.enemyAgility=10;


Enemy Slime = {"Slime",80,90,5,15,5};
// Slime.enemyName="Slime";
// Slime.gold=5;
// Slime.enemyHealthPoint=90;
// Slime.enemyAttackPower=5;
// Slime.enemyDefensivePower=15;
// Slime.enemyAgility=5;


Enemy FallenElf = {"FallenElf",200,45,20,1,70};
// FallenElf.enemyName="FallenElf";
// FallenElf.gold=200;
// FallenElf.enemyHealthPoint=45;
// FallenElf.enemyAttackPower=20;
// FallenElf.enemyDefensivePower=1;
// FallenElf.enemyAgility=70;

// we designed a few skills


Skill crit = {"Crit"};
// crit.skillName="Crit";


Skill undefense = {"undefense"};
// undefense.skillName="Undefense";


Skill Miss = {"Miss"};
// miss.skillName="Miss";


Skill Reverse = {"Reverse"};
// reverse.skillName="Reverse";


void skillPower(Enemy enemyToBattle)
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



