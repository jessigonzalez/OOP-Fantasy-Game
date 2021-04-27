#include "Lord.h"
#include "Protector.h"
#include <iostream>
using namespace std;
using namespace WarriorCraft;

bool Lord::hires(Protector& hired) {
	if (hired.hireStatus() != true && nobleIsAlive() == true) {
		if (army.size() == 0) {
			army.push_back(&hired);
			hired.changeNoble(*this);
			float strenBefore = getStrength();
			setStrength(strenBefore + hired.getStrength());
			return true;
		}

		for (size_t i = 0; i < army.size(); ++i) {
			hired.changeNoble(*this);
			army.push_back(&hired);
			return true;
		}
	}
	return false;
}

void Lord::modifyStrength(float ratio) {
	for (size_t i = 0; i < army.size(); ++i) {
		army[i]->defend();
	}

	for (size_t i = 0; i < army.size(); ++i) {
		float strenBefore = army[i]->getStrength();
		army[i]->setStrength((1 - ratio) * strenBefore);
	}

	float changingStren = 0;
	for (size_t i = 0; i < army.size(); ++i) {
		changingStren += army[i]->getStrength();
	}
	setStrength(changingStren);
}

bool Lord::fire(Protector& nameOfwarrior) {
	if (nobleIsAlive() == true && nameOfwarrior.hireStatus() == true) {
		nameOfwarrior.changeNobleNull();
		setStrength(getStrength() - nameOfwarrior.getStrength());
		for (size_t i = 0; i < army.size(); ++i) {
			if (nameOfwarrior.nameOfprotector() == army[i]->nameOfprotector()) {
				cout << nameOfwarrior.nameOfprotector() << ", you're fired! -- " << getName() << endl;
				army[i] = army.back();
				army.pop_back();
				return true;
			}
		}
	}
	return false;
}


bool Lord::remove(Protector& thisProtector) {
	if (nobleIsAlive() == true && thisProtector.hireStatus() == true) {
		thisProtector.changeNobleNull();
		setStrength(getStrength() - thisProtector.getStrength());
		for (size_t i = 0; i < army.size(); ++i) {
			if (thisProtector.nameOfprotector() == army[i]->nameOfprotector()) {
				cout << thisProtector.nameOfprotector() << " flees in terror, abandoning his lord, " << getName() << endl;
				army[i] = army.back();
				army.pop_back();
				return true;
			}
		}
	}
	return false;
}