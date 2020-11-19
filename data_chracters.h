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

// enemy one, the Riddler


Enemy Riddler;
Riddler.enemyName="Riddler";
Riddler.gold=100;
Riddler.enemyHealthPoint=100;
Riddler.enemyAttackPower=30;
Riddler.enemyDefensivePower=20;
Riddler.enemyAgility=10;


// enemy two, the Joker


Enemy Joker;
Joker.enemyName="Joker";
Joker.gold=200;
Joker.enemyHealthPoint=150;
Joker.enemyAttackPower=60;
Joker.enemyDefensivePower=30;
Joker.enemyAgility=40;


// enemy three, the Thanos


Enemy Thanos;
Thanos.enemyName="Thanos";
Thanos.gold=500;
Thanos.enemyHealthPoint=300;
Thanos.enemyAttackPower=100;
Thanos.enemyDefensivePower=80;
Thanos.enemyAgility=70;

// there are three little enemies we can percieve them as Monsters.
Enemy Orc;
Orc.enemyName="Orc";
Orc.gold=20;
Orc.enemyHealthPoint=30;
Orc.enemyAttackPower=20;
Orc.enemyDefensivePower=5;
Orc.enemyAgility=10;

Enemy Slime;
Slime.enemyName="Slime";
Slime.gold=5;
Slime.enemyHealthPoint=90;
Slime.enemyAttackPower=5;
Slime.enemyDefensivePower=15;
Slime.enemyAgility=5;

Enemy FallenElf;
FallenElf.enemyName="FallenElf";
FallenElf.gold=200;
FallenElf.enemyHealthPoint=45;
FallenElf.enemyAttackPower=20;
FallenElf.enemyDefensivePower=1;
FallenElf.enemyAgility=70;

// we designed a few skills


struct Skill
{
	string skillName;
	void skillPower();
};

Skill crit;
crit.skillName="Crit";

Skill undefense;
undefense.skillName="Undefense";

Skill miss;
miss.skillName="Miss";

Skill reverse;
reverse.skillName="Reverse";

void skillPower()
{
	srand(time(NULL));
	int skillRandomNumber;
	skillRandomNumber=rand()%4+1;
	switch (skillRandomNumber)
	{
		case 1:
		enemyHealthPoint-=100;
		break;

		case 2:
		enemyDefensivePower=0;
		break;

		case 3:
		healthpoint+=(enemyAttackPower - defensivePower);
		break;

		case 4:
		int tempHealth=healthpoint;
		int tempAttack=attackPower;
		int tempDefense=defensivePower;

		healthpoint=enemyHealthPoint;
		attackPower=enemyAttackPower;
		defensivePower=enemyDefensivePower;

		enemyHealthPoint=tempHealth;
		enemyAttackPower=tempAttack;
		enemyDefensivePower=tempDefense;
		break;

	}

}






