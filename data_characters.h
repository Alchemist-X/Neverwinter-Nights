#ifndef DATA_CHARACTERS_H
#define DATA_CHARACTERS_H

// In this file, we describe elements that are related with charcterr, namely player and enemies
// we designed a few enemies.

struct Enemy
{
	string enemyName;
	int gold;
	int enemyHealthPoint;
	int enemyAttackPower;
	int enemyDefensivePower;
	int enemyAgility;
	
};

Enemy Riddler;
Enemy Joker;
Enemy Thanos;
Enemy Orc;
Enemy Slime;
Enemy FallenElf;


struct Skill
{
	string skillName;
	void skillPower();
};

void skillPower();
Skill crit;
Skill undefense;
Skill miss;
Skill reverse;


#endif



