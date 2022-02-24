#include <iostream>

enum EnemyType {ZOMBIE, VAMPIRE, GHOST, WITCH};

struct Enemy {
	EnemyType type;
	char enemyName[10];
	int health;
}

string getEnemyString{
	if (EnemyType == ZOMBIE)
		return "zombie";
	else if (EnemyType == VAMPIRE)
		return "vampire";
	else if (EnemyType == GHOST)
		return "ghost";
	else
		return "witch";
}



Enemy createRandomEnemy() {
	Enemy::type = rand() % 4;
	Enemy::health = rand() % 1000;
	return Enemy;
}