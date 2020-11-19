// we will build the fight scene here
	
	
	bool flag =1;
	int round=1;

	
	Enemy enemyToBattle;
	// copy the enemy to battle from the enemy that have already designed.

	
	cout << "You will chanllenge " << enemyToBattle.enemyName << " this time." endl;
	cout << "Your agility is " << agility << "  " << "Your enemy's agility is " << enemyToBattle.enemyAgility << endl;

	// compare the agility of the hero and enemy, to determine whether the hero or the enemy fight first.
	int heroTurn=1;
	int enemyTurn=2;
	int turn;
	if (agility <= enemyToBattle.enemyAgility)
	{
		cout << "Enemy will fight first." << endl;
		turn = enemyTurn;
	}
	else
	{
		cout << "You will fight first." << endl;
		turn = heroTurn;
	}


	
	// we will begin the fight with a while function.
	while(flag)
	{
		cout << "This is the Round " << round << " of the fight." << endl;

		// we will check if it's hero's turn or enemy's turn.
				
		if (turn == enemyTurn)
		// now it's enenmy's turn
		{
			cout << "This is the enemy's turn of fight." << endl;

			healthPoint = healthPoint + defensivePower - enemyToBattle.enemyAttackPower;

			cout << "You have suffered " << - defensivePower + enemyToBattle.enemyAttackPower << "point of ATK from the enemy." << endl;
			cout << "Your current HP is " << healthPoint << endl;

			// after this round, we will change the turn for the fight
			turn = heroTurn;
		}



		else
		// now it's hero's turn
		{
			cout << "Now it's your turn." << endl;
			cout << "Please input a number to indicate your choice." << endl;
			cout << "Enter 1 to give the enemy a common attack." << endl;
			cout << "Enter 2 to use your potion." << endl;
			cout << "Enter 3 to give the enemy a skill attack." << endl;
			cout << "Enter 4 to escape from the fight." << endl;

			int choiceOfTheRound;
			cin >> choiceOfTheRound;
			choiceInRound(choiceOfTheRound);

			// after this round, we will change the turn for the fight
			turn = enemyTurn;
		}
			

		// we will check if the battle came to an end.
		if ( ! isHeroAlive(healthPoint))
		{
			flag=0;
			cout << "Sorry, you lose the game, do better next time!" << endl;
		}

		if (! isEnemyAlive(enemyHealthPoint))
		{
			flag=0;
			cout << "Congratulations! You have won the game." << endl;
		}

		// if nothing happened, then we will go to the next round.
		round++;
	}