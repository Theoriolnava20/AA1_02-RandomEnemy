#include <iostream>
#include "Header.h"
using namespace std;
#define MAX_ENEMIES 5;


int main() {
	Enemy enemies[MAX_ENEMIES];
	for (int i = 0; i < MAX_ENEMIES) {
		enemies[i] = createRandomEnemy();
		if (equalenemies() == true)
			enemies[i] = createRandomEnemy;
		else
			i++;
	}
	for (int f = 0; f <= MAX_ENEMIES) {
		cout << enemies[f] << "\n";
		f++;
	}
}
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