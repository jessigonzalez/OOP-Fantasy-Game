#ifndef _ARCHER_H
#define _ARCHER_H
#include "Warrior.h"
#include <string>
#include <iostream>

namespace WarriorCraft {
	class Warrior;
	class Archer : public Warrior {
	public:
		Archer(std::string name, int stren) : Warrior(name, stren) {}
		void defend() const;
	};
}
#endif