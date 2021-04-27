#include "Wizard.h"
#include <iostream>
using namespace std;
using namespace WarriorCraft;

void Wizard::defend() const {
	if (getStrength() != 0) {
		cout << "POOF!" << endl;
	}
}
