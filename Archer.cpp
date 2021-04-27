#include "Archer.h"
using namespace std;
using namespace WarriorCraft;


void Archer::defend() const {
	if (getStrength() != 0) {
		cout << "TWANG! " << nameOfprotector();
		Warrior::defend();
	}
}