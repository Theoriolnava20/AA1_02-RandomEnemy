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

enum EnemyType {ZOMBIE, VAMPIRE, GHOST, WITCH};

struct Enemy {
	EnemyType type;
	char Name[10];
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

bool EqualEnemies(Enemy enemy1, Enemy enemy2) {
	bool Compare = false;
	if (enemy1::type == enemy2::type) {
		for (i = 0; i < 10; i++) {
			if (!(enemy1::name[i] == enemy2::name[i])) {
				Compare = false;
				break;
			}
			else
				Comapare = true;
		}
	}
	return Comapre
}

Enemy createRandomEnemy() {
	Enemy::type = rand() % 4;
	Enemy::health = rand() % 1000;
	return Enemy;
}