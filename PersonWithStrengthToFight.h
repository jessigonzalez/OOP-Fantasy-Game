#ifndef _PWSTF_H
#define _PWSTF_H
#include "Noble.h"
#include <string>

namespace WarriorCraft {
	class PersonWithStrengthToFight : public Noble {
	public:
		PersonWithStrengthToFight(std::string name, int strength) : Noble(name, strength) {}
		void modifyStrength(float ratio);
	};
}

#endif 
