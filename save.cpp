#include <iostream>
#include "save.h"
#include "hero.h"
#include <fstream>
using namespace std;

void Save()
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

