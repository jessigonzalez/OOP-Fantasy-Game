#include "Protector.h"
using namespace std;
using namespace WarriorCraft;

float Protector::getStrength() const {
	return strength;
}

void Protector::setStrength(float newStren) {
	strength = newStren;
}

string Protector::nameOfprotector() const {
	return name;
}

bool Protector::hireStatus() const {
	if (nobleImEmployedTo == nullptr) {
		return false;
	}
	return true;
}

void Protector::changeNoble(Noble& masterName) {
	nobleImEmployedTo = &masterName;
}

void Protector::changeNobleNull() {
	nobleImEmployedTo = nullptr;
}

Noble* Protector::getMyNoble() const {
	return nobleImEmployedTo;
}

