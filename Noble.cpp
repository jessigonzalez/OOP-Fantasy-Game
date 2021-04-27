#include "Noble.h"
#include <string>
#include <iostream>
using namespace std;
using namespace WarriorCraft;

string Noble::getName() const {
	return name;
}

bool Noble::nobleIsAlive() const {
	return isAlive;
}

void Noble::setAliveStatus(bool input) {
	isAlive = input;
}

float Noble::getStrength() {
	return strength;
}

void Noble::setStrength(float input) {
	strength = input;
}


void Noble::battle(Noble& nobleName) {
	float strenBefore;
	float ratioTosubtract;

	cout << name << " battles " << nobleName.getName() << endl;

	if (isAlive == false && nobleName.isAlive == false) {
		cout << "Oh, NO! They're both dead! Yuck!" << endl;
	}

	else if (isAlive == false && nobleName.isAlive == true) {
		cout << "He's dead, " << nobleName.getName() << endl;
	}

	else if (isAlive == true && nobleName.isAlive == false) {
		cout << "He's dead, " << name << endl;
	}
	else if (isAlive == true && nobleName.isAlive == true) {
		if (nobleName.getStrength() < strength) {
			ratioTosubtract = (nobleName.getStrength() / strength);

			nobleName.modifyStrength(1);
			modifyStrength(ratioTosubtract);
			nobleName.setAliveStatus(false);
			cout << name << " defeats " << nobleName.getName() << endl;

		}
		else if (nobleName.getStrength() > strength) {
			ratioTosubtract = strength / nobleName.getStrength();
			nobleName.modifyStrength(ratioTosubtract);
			modifyStrength(1);
			isAlive = false;
			cout << nobleName.getName() << " defeats " << name << endl;
		}
		else if (strength == nobleName.getStrength()) {
			cout << "Mutual Annihalation: " << name << " and " << nobleName.getName() << " die at each other's hands" << endl;

			modifyStrength(getStrength());
			nobleName.modifyStrength(1);
			nobleName.setAliveStatus(false);
			isAlive = false;
		}
	}
}


