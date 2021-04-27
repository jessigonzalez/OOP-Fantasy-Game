#include "Warrior.h"
#include <iostream>
using namespace std;
using namespace WarriorCraft;

void Warrior::defend() const {
	if (getStrength() != 0) {
		cout << " says: Take that in the name of my lord, " << getMyNoble()->getName() << endl;
	}
}

