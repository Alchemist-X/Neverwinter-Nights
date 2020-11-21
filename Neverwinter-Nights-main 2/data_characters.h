#ifndef DATA_CHARACTERS_H
#define DATA_CHARACTERS_H

// In this file, we describe elements that are related with charcterr, namely player and enemies
// we designed a few enemies.

struct Enemy
{
	std::string enemyName;
	int gold;
	int enemyHealthPoint;
	int enemyAttackPower;
	int enemyDefensivePower;
	int enemyAgility;
	
};


// In this file, we describe elements that are related with charcterr, namely player and enemies
// enemy one, the Riddler
// enemy two, the Joker
// enemy three, the Thanos
// Enemy Riddler = {"Riddler",100,100,30,20,10};
// Enemy Joker = {"Joker",200,150,60,30,40};
// Enemy Thanos = {"Thanos",500,300,100,80,70};

// there are three little enemies we can percieve them as Monsters.
// Enemy Orc = {"Orc",60,30,20,5,10};
// Enemy Slime = {"Slime",80,90,5,15,5};
// Enemy FallenElf = {"FallenElf",200,45,20,1,70};

extern Enemy Riddler;
extern Enemy Joker;
extern Enemy Thanos;
extern Enemy Orc;
extern Enemy Slime;
extern Enemy FallenElf;


struct Skill
{
	std::string skillName;
	void skillPower(Enemy enemyToBattle, int &healthPoint, int &attackPower, int &defensivePower);
};

void skillPower(Enemy enemyToBattle, int &healthPoint, int &attackPower, int &defensivePower);
extern Skill crit;
extern Skill undefense;
extern Skill miss;
extern  Skill reverse;


#endif



