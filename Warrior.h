#ifndef _WARRIOR_H
#define _WARRIOR_H
#include "Protector.h"

namespace WarriorCraft {
	class Warrior : public Protector {
	public:
		Warrior(std::string name, int stren) : Protector(name, stren) {}
		void defend() const = 0;
	};
}

#endif