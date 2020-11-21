#ifndef DATA_ITEMS_H
#define DATA_ITEMS_H


//In this file, we decribe the functions related with equipments and potions

struct Equipment
{
	std::string equipmentName;
	double equipmentValue;
	void equipmentPower(std::string equipmentName);
};

void equipmentPower(std::string equipmentName);

extern Equipment knife;
extern Equipment sword;
extern Equipment shield;
extern Equipment armour;
extern Equipment tank;
// Equipment knife = {"knife", 100};
// Equipment sword = {"sword", 120};
// Equipment shield = {"shield", 130};
// Equipment armour = {"armour", 150};
// Equipment tank = {"tank", 250};

// we designed a few potions

struct Potion
{
	std::string potionName;
	double potionValue;
	void potionPower(std::string potionName);
};

void potionPower(std::string potionName);
extern Potion blood;
extern Potion strength;
extern Potion hardness;
extern Potion randomenhance;


#endif
