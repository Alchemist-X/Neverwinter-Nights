#ifndef DATA_ITEMS_H
#define DATA_ITEMS_H

//In this file, we decribe the functions 
struct Equipment
{
	string equipmentName;
	double equipmentValue;
	void equipmentPower(string equipmentName);
};

void equipmentPower(string equipmentName);
Equipment knife;
Equipment sword;
Equipment shield;
Equipment armour;
Equipment tank;


// we designed a few potions

struct Potion
{
	string potionName;
	double potionValue;
	void potionPower(string potionName);
};

void potionPower(string potionName);
Potion blood;
Potion strength;
Potion hardness;
Potion randomenhance;




#endif
