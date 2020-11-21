#ifndef SCENES_H
#define SCENES_H

// this function shows what player will come across in the Inn.
void enterInn(int &healthPoint, int &gold);

// this function shows what player will come across in the Shop.
void enterShop(int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold);


// this function shows what player will come across in the Church.
void enterChurch(int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold);

// this function shows what player will come across in the Bar.
void enterBar(int &healthPoint, int &attackPower, int &defensivePower, int &agility, int &gold);

#endif
