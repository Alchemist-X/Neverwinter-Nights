#include <iostream>
#include "data_items.h"
#include "hero.h"
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

//In this file, we decribe the functions 

Equipment knife = {"knife", 100};
// knife.equipmentName="Knife";
// knife.equipmentValue=100;


Equipment sword = {"sword", 120};
// sword.equipmentName="Sword";
// sword.equipmentValue=120;

Equipment shield = {"shield", 130};
// shield.equipmentName="Shield";
// shield.equipmentValue=130;


Equipment armour = {"armour", 150};
// armour.equipmentName="Armour";
// armour.equipmentValue=150;


Equipment tank = {"tank", 250};
// tank.equipmentName="Tank";
// tank.equipmentValue=250;

void equipmentPower(string equipmentName)
{	
	// here we let pick the second character of equipmentName to determine the kind of equipment
	
	char temp[20];
	strcpy(temp,equipmentName.c_str());
	char second_character;
	second_character=temp[1];

	switch (second_character)
	{
		case 'n':
		attackPower+=30;
		defensivePower+=10;
		gold=gold-knife.equipmentValue;
		break;

		case 'w':
		attackPower+=40;
		defensivePower+=10;
		gold=gold-sword.equipmentValue;
		break;

		case 'h':
		attackPower+=10;
		defensivePower+=30;
		gold=gold-shield.equipmentValue;
		break;

		case 'r':
		attackPower+=20;
		defensivePower+=50;
		gold=gold-armour.equipmentValue;
		break;

		case 'a':
		attackPower+=90;
		defensivePower+=70;
		gold=gold-tank.equipmentValue;
		break;
	}
}



// we designed a few potions


Potion blood = {"blood", 50};
// boold.potionName="Blood";
// boold.potionValue=50;


Potion strength = {"strength", 40};
// strength.potionName="Strength";
// strength.potionValue=40;


Potion hardness = {"hardness", 60};
// hardness.potionName="Hardness";
// hardness.potionValue=60;


Potion randomenhance = {"randomenhance", 30};
// randomenhance.potionName="RandomEnhance";
// randomenhance.potionValue=30;



void potionPower(string potionName)
{
	// here we pick up the first character to determine the potion kind.
	char temp[20];
	strcpy(temp,potionName.c_str());
	char first_character;
	first_character=temp[0];

	switch(first_character)
	{
		case 'E':
		// there is no potion in the package, and the potion name is therefore Empty
		break;

		case 'B':
		healthPoint+=20;
		break;

		case 'S':
		attackPower+=20;
		break;

		case 'H':
		defensivePower+=20;
		break;


		case 'R':
		srand(time(NULL));
		int potionRandomNumber;
		potionRandomNumber=rand()%3+1;
		if (potionRandomNumber==1){
			healthPoint+=20;
		}
		if (potionRandomNumber==2){
			attackPower+=20;
		}
		else{
			defensivePower+=20;
		}
		break;

		default:
		cout << "Ivalid input, please enter again." << endl;
		cin >> potionName;
		potionPower(potionName);

	}
}

