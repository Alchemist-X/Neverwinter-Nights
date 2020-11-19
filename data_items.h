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
	char second_character;
	switch (second_character)
	{
		case 'n':
		attackPower+=30;
		defensivePower+=10;
		currentMoney=currentMoney-knife.equipmentValue;
		break;

		case 'w':
		attackPower+=40;
		defensivePower+=10;
		currentMoney=currentMoney-sword.equipmentValue;
		break;

		case 'h':
		attackPower+=10;
		defensivePower+=30;
		currentMoney=currentMoney-shield.equipmentValue;
		break;

		case 'r':
		attackPower+=20;
		defensivePower+=50;
		currentMoney=currentMoney-armour.equipmentValue;
		break;

		case 'a':
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

	char first_character;
	switch(first_character)
	{
		case 'E':
		// there is no potion in the package, and the potion name is therefore Empty
		break;

		case 'B':
		healthpoint+=20;
		currentMoney=currentMoney-boold.equipmentValue;
		break;

		case 'S':
		attackPower+=20;
		currentMoney=currentMoney-strength.equipmentValue;
		break;

		case 'H':
		defensivePower+=20;
		currentMoney=currentMoney-hardness.equipmentValue;
		break;


		case 'R':
		srand(time(NULL));
		int potionRandomNumber;
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
		break;

		default:
		cout << "Ivalid input, please enter again." << endl;
		cin >> potionName;
		potionPower(potionName);

	}
}
