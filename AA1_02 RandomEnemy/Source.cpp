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