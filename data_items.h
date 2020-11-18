// This header file shows all items
struct Equipment
{
	string equipmentName;
	double equipmentValue;
	void equipmentPower(string equipmentName);
};

Equipment knife;
knife.equipmentName="Knife";
knife.equipmentValue=70;

Equipment sword;
sword.equipmentName="Sword";
sword.equipmentValue=90;

Equipment shield;
shield.equipmentName="Shield";
shield.equipmentValue=80;

Equipment armour;
armour.equipmentName="Armour";
armour.equipmentValue=100;

Equipment tank;
tank.equipmentName="Tank";
tank.equipmentValue=250;

void equipmentPower(string equipmentName)
{
	switch (equipmentName)
	{
		case "Knife":
		attackPower+=30;
		defensivePower+=10;
		currentMoney=currentMoney-knife.equipmentValue;
		break;

		case "Sword":
		attackPower+=40;
		defensivePower+=10;
		currentMoney=currentMoney-sword.equipmentValue;
		break;

		case "Shield":
		attackPower+=10;
		defensivePower+=30;
		currentMoney=currentMoney-shield.equipmentValue;
		break;

		case "Armour":
		attackPower+=20;
		defensivePower+=50;
		currentMoney=currentMoney-armour.equipmentValue;
		break;

		case "Tank":
		attackPower+=90;
		defensivePower+=70;
		currentMoney=currentMoney-tank.equipmentValue;
		break;
	}
}



// we designed a few potions


struct Potion
{
	string potionName;
	double potionValue;
	void potionPower(string potionName);
};

Potion blood;
boold.potionName="Blood";
boold.potionValue=50;

Potion strength;
strength.potionName="Strength";
strength.potionValue=40;

Potion hardness;
hardness.potionName="Hardness";
hardness.potionValue=60;

Potion randomenhance;
randomenhance.potionName="RandomEnhance";
randomenhance.potionValue=30;



void potionPower(string potionName)
{
	switch(potionName)
	{
		case "Boold":
		healthpoint+=20;
		currentMoney=currentMoney-boold.equipmentValue;
		break;

		case "Strength":
		attackPower+=20;
		currentMoney=currentMoney-strength.equipmentValue;
		break;

		case "Hardness":
		defensivePower+=20;
		currentMoney=currentMoney-hardness.equipmentValue;
		break;


		case "RandomEnhance":
		srand(time(NULL));
		potionRandomNumber=rand()%3+1;
		if (potionRandomNumber==1){
			healthpoint+=20;
			currentMoney=currentMoney-boold.equipmentValue;
		}
		if (potionRandomNumber==2){
			attackPower+=20;
			currentMoney=currentMoney-strength.equipmentValue;
		}
		else{
			defensivePower+=20;
			currentMoney=currentMoney-hardness.equipmentValue;
		}
	}
}

