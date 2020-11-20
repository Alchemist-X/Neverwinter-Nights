#ifndef ASSISTANT_FUNCTION_H
#define ASSISTANT_FUNCTION_H

// there are several pivotal functions in this program.

// we want to check if the hero is alive at the end of each round 
bool isHeroAlive(int healthPoint);

// we want to check if the boss is alive at the end of each round
bool isEnemyAlive(int enemyHealthPoint);


// we want to confirm if the player wants to escape from the fight
void isEscape(int escape);

// this is the function related to the player's choices in the round.
void choiceInRound(int choiceOfTheRound);

#endif