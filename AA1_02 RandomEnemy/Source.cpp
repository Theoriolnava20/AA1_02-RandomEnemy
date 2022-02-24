#include <iostream>

const int MAX_ENEMIES = 5;

using namespace std;

enum EnemyType = { ZOMBIE, VAMPIRE, GHOST, WITCH };

struct Enemy {
	EnemyType type;
	char name[10];
	int health;
};

int main() {
	Enemy enemies[MAX_ENEMIES];
	enemies[0] = createRandomEnemy();
	for (int i = 1; i < MAX_ENEMIES) {
		enemies[i] = createRandomEnemy();
		if (EqualEnemies(enemies[i - 1], enemies[i]) == true)
			enemies[i] = createRandomEnemy;
		else
			i++;
	}
	for (int f = 0; f <= MAX_ENEMIES) {
		cout << enemies[f] << "\n";
		f++;
	}
	return 0;
}

string getEnemyString(EnemyType type) {
	if (type == EnemyType::ZOMBIE)
		return "zombie";
	else if (type == EnemyType::VAMPIRE)
		return "vampire";
	else if (type == EnemyType::GHOST)
		return "ghost";
	else
		return "witch";
}

bool EqualEnemies(Enemy enemy1, Enemy enemy2) {
	bool Compare = false;
	if (enemy1.type == enemy2.type) {
		for (i = 0; i < 10; i++) {
			if (!(enemy1.name[i] == enemy2.name[i])) {
				Compare = false;
				break;
			}
			else
				Compare = true;
		}
	}
	return Compare;
}

Enemy createRandomEnemy() {
	Enemy enemy1;
	enemy1.type = rand() % 4;
	enemy1.health = rand() % 1000;
	return enemy1;
}
