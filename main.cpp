#include <iostream>
#include <cmath>
#include <fstream>
#include "data_items.h"
#include "data_chracters.h"
#include "status.h"
#include "intiliazation.cpp"
#include "battle.h"
#include "assistant_function.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
	// we will have a initialization here.
	void initialize();

	// we will read the hero's status from the save.txt file.
	ifstream fin;
	fin.open("save.txt");
	// in all *status.txt, all the data have the following format：
	// hero name: 
	// game level that the player in:
	// the character's money:
	// the character's health point:
	// the character's attack power:
	// the character's defensive power:
	// the character's agility:
	// the character's race
	// the character's equipment_1:
	// the character's equipment_2:
	// the character's equipment_3:
	// the character's potion_1:
	// the character's potion_2:
	// the character's potion_3:
	// the character's skill:
	// the character's talent:


	string l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15,l16;

	getline(fin,l1);
	characterName=l1;
	getline(fin,l2);
	istringstream is(l2);
	is >> gameLevel;
	getline(fin,l3);
	istringstream is(l3);
	is >> correntMoney;
	getline(fin,l4);
	istringstream is(l4);
	is >> healthPoint;
	getline(fin,l5);
	istringstream is(l5);
	is >> attackPower;
	getline(fin,l6);
	istringstream is(l6);
	is >> defensivePower;
	getline(fin,l7);
	istringstream is(l7);
	is >> agility;
	getline(fin,l8);
	race=l8;
	getline(fin,l9);
	equipment_1=l9;
	getline(fin,l10);
	equipment_1=l10;
	getline(fin,l11);
	equipment_3=l11;
	getline(fin,l12);
	potion_1=l12;
	getline(fin,l13);
	potion_2=l13;
	getline(fin,l14);
	potion_3=l14;
	getline(fin,l15);
	skill=l15;
	getline(fin,l16);
	talent=l16;
	// we read the data from the file of character's status
	fin.close();

	


}



