#ifndef _WIZARD_H
#define _WIZARD_H
#include "Protector.h"


namespace WarriorCraft {
	class Wizard : public Protector {
	public:
		Wizard(std::string name, int stren) : Protector(name, stren) {}
		void defend() const;
	};
}

#endif
