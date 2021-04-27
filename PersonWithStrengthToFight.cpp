#include "PersonWithStrengthToFight.h"
using namespace std;
using namespace WarriorCraft;

void PersonWithStrengthToFight::modifyStrength(float ratio) {
	float prevStrength = getStrength();
	setStrength(((1 - ratio) * prevStrength));
}