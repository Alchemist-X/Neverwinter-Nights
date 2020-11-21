# Neverwinter Nights ![](https://img.shields.io/badge/License-HKU-yellow) ![](https://img.shields.io/badge/Course-ENGG1340-blue)


## Install

Please use the command "./main" after the command "make" :)

Have fun and enjoy your playing!

```
make
./Neverwinter-Nights
```


## Contributing

**Yishu Wang (CE, Year 2, UID:3035638272, user name: Alechemist-X)** 

In charge of the various scenes design, makefile and complilation issues

**Shuang Wu (BSc, Year 2, UID:3035639109, user name: wsjack22)**

In charge of the complex battle system, database structure design

## Game Description & Basic Rules

Our game is a role-playing text-based game, we try to make it similar to Dungeons & Dragons (DND). Players will explore a wild and remote zone. On their adventure, they will beat enemies, collect items, and eventually discover the hidden secret of a mysterious relic.

**1. Players**

The game will require four players to join.

**2. Intilization Of Game**

On the beginning of game, after naming their characters, players will be given chances to decide their races, talents and attributes. Different choices would have multiple impact on the gameplay. They can distribute whatever amount of points to different attributes.

**3. Moving and Travelling**

The player can decide where to go. On different places, players will face different incidents and distinguishtive activities.
The following are places that we have designed
Bar: Have a drink; Get mission from stranger; Listen to travelling poet
Inn: Rest, recover HP.
Church: Enhance attributes; learn skills.
Shop: Buy equipments and potions.

**4. Battle System**

Players have to beat dangerous monsters along their journey. We introduce a battle system including HP, ATT, DEF, AGI (stands for attack, agility, life, defence). Besides, a complxe mixture with potions, equipments and skills enable player to have various choices opposing an enemy. Only wise and lucky ones could beat the monsters and Bosses along the way.

**5. Player Status**

Players have multiple attributes. Some of them are crucial to them, like health points (HP) or wealth (number of coins you got). For instance, your gameplay will end if the HP of character goes zero. You can't pass some shortcuts without paying a certain amount of money to the guards.

**6. Save & Load**

Players can save their progress when deciding where-to-go. If they unluckily get all killed in a battle, they would be able to reload it and have a second chance.

**7. How To Win**

As long as players make themselves to the deepest spot of this ancient relic, getting the legendary item -- the condemned heart of fallen Lich, beating up the final boss. They will be able to end the tragedy in this cursed area and got final victory.


## Libray We Use:

cstdlib and ctime: use for make random numbers while rolling the dice.

iostream: standard input and output fstream: file I/O.

string: store the data of each move and conditions.

cmath: use for calculation.

vector: to store the data and do some operations.

map: do some operations on stored data.

algorithm: use some well-worked functions and algorithms.

iomanip: manipulate input and output.

// we also cover extern and static variables in our program


## Coming Features (initial goal, for prposal only)

feature 1: we will generate random numbers to make the each boss, each payoff after winning random.
feature 2: we will make a data file to store the level, the weapons, the money that a player have.
feature 3: we will make it possible to enter a player's data by type in the player's username.
feature 4: we will make it possible to change the game status(level,or weapons etc.) by inputting & outputting when necessary.
feature 5: we will make several files, such as the boss file, weapons file, and we will make it possible to program these files as a whole.


## Noticable Features

To follow Code Requirement, we have done folloing things ~

**1. Generation of random game sets or events**

e.g. the use of skills in battle system involved with function rand() and library <ctime>.

**2. Data structures for storing game status**

e.g. For equipments, monsters, potions, skills and ..., we have claimed various structs to access them.

**3. Dynamic memory management**

e.g. we have covered static variables, dynamic variables, using what we have learned about pointer, to store data that are related with specific scenes, like Bar.

**4. File input/output**

e.g. we use txt file to store the status of player, and access it when needed.

**5. Program codes in multiple files**

e.g. We have files including multiple .h .cpp files

**6. Proper indentation and naming styles**

We follow the well recommended coding style for C++ and have use IDE to automatically adjust it.

**7. In-code documentation**

With thoutough in-code documentation, our program is quitely friendly for developers and thus facilitating future development.
