#ifndef _SWORDSMAN_H
#define _SWORDSMAN_H
#include "Warrior.h"
#include <string>

namespace WarriorCraft {
	class Swordsman : public Warrior {
	public:
		Swordsman(std::string name, int stren) : Warrior(name, stren) {}
		void defend() const;
	};
}
#endif