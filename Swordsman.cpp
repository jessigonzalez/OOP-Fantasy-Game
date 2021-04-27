#include "Swordsman.h"
#include <iostream>
using namespace std;
using namespace WarriorCraft;

void Swordsman::defend() const {
	if (getStrength() != 0) {
		cout << "CLANG! " << nameOfprotector();
		Warrior::defend();
	}
}

