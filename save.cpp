#include <iostream>
#include "save.h"
#include "hero.h"
#include <fstream>
using namespace std;

void Save(std::string heroName, int &gameLevel, int &gold, int &healthPoint, int &attackPower, int &defensivePower, int &agility, std::string &race, std::string &equipment_1, std::string &equipment_2, std::string &equipment_3, std::string &potion_1, std::string &potion_2, std::string &potion_3, std::string &talent, int max_HP)
{	
	ofstream fout;
	fout.open("save.txt");
	if ( fout.fail() ) {
		cout << "Error in file opening!" << endl;
		exit(1);
	}

	fout << heroName << endl;
	fout << gameLevel << endl;
	fout << gold << endl;
	fout << healthPoint << endl;
	fout << attackPower << endl;
	fout << defensivePower << endl;
	fout << agility << endl;
	fout << race << endl;
	fout << equipment_1 << endl;
	fout << equipment_2 << endl;
	fout << equipment_3 << endl;
	fout << potion_1 << endl;
	fout << potion_2 << endl;
	fout << potion_3 << endl;
	fout << talent << endl;
	fout << max_HP << endl;

	fout.close();
}

