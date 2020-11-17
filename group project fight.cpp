#include <iostream>
#include <cmath>
#include <fstream>
#include "status.h"
#include <string>
#include <sstream>
using namespace std;


//in this cpp file, we will build the fight scene. 


// first of all, these are the basic data for the character
string characterName;
int gameLevel;
double correntMoney;
double healthPoint;
double attackPower;
double defensivePower;
double agility;
string equipment_1;
string equipment_2;
string equipment_3;
string potion_1;
string potion_2;
string potion_3;
string skill_1;
string skill_2;
string race;


// we have designed five equipments for the players to select

 


int main(){
	ifstream fin;
	fin.open("character_status.txt");
	// in all *status.txt, all the data have the following format：
	// character name: 
	// game level that the player in:
	// the character's money:
	// the character's health point:
	// the character's attack power:
	// the character's defensive power:
	// the character's agility:
	// the character's equipment_1:
	// the character's equipment_2:
	// the character's equipment_3:
	// the character's potion_1:
	// the character's potion_2:
	// the character's potion_3:
	// the character's skill_1:
	// the character's skill_2:
	// the character's race
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
	equipment_1=l8;
	getline(fin,l9);
	equipment_2=l9;
	getline(fin,l10);
	equipment_3=l10;
	getline(fin,l11);
	potion_1=l11;
	getline(fin,l12);
	potion_2=l12;
	getline(fin,l13);
	potion_3=l13;
	getline(fin,l14);
	skill_1=l14;
	getline(fin,l15);
	skill_2=l15;
	getline(fin,l16);
	race=l16;
	// we read the data from the file of character's status
	fin.close();

	

}




