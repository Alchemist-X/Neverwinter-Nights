// we designed a few bosses.

struct Boss
{
	string bossName;
	double gold;
	double bossHealthPoint;
	double bossAttackPower;
	double bossDefensivePower;
	double bossAgility;
	
};

// boss one, the Riddler


Boss Riddler;
Riddler.bossName="Riddler";
Riddler.gold=100;
Riddler.bossHealthPoint=100;
Riddler.bossAttackPower=30;
Riddler.bossDefensivePower=20;
Riddler.bossAgility=10;


// boss two, the Joker


Boss Joker;
Joker.bossName="Joker";
Joker.gold=200;
Joker.bossHealthPoint=150;
Joker.bossAttackPower=60;
Joker.bossDefensivePower=30;
Joker.bossAgility=40;


// boss three, the Thanos


Boss Thanos;
Thanos.bossName="Thanos";
Thanos.gold=500;
Thanos.bossHealthPoint=300;
Thanos.bossAttackPower=100;
Thanos.bossDefensivePower=80;
Thanos.bossAgility=70;





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
		bossHealthPoint-=100;
		break;

		case 2:
		bossDefensivePower=0;
		break;

		case 3:
		healthpoint+=(bossAttackPower - defensivePower);
		break;

		case 4:
		double tempHealth=healthpoint;
		double tempAttack=attackPower;
		double tempDefense=defensivePower;

		healthpoint=bossHealthPoint;
		attackPower=bossAttackPower;
		defensivePower=bossDefensivePower;

		bossHealthPoint=tempHealth;
		bossAttackPower=tempAttack;
		bossDefensivePower=tempDefense;
		break;

	}

}






