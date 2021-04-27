#ifndef _LORD_H
#define _LORD_H
#include "Noble.h"
#include "Protector.h"
#include <vector>

namespace WarriorCraft {
	class Lord : public Noble {
	public:
		Lord(std::string name, int strength = 0) : Noble(name, strength) {}
		bool hires(Protector& hired);
		void modifyStrength(float ratio);
		bool fire(Protector& hired);
		bool remove(Protector& hired);
	private:
		std::vector <Protector*> army;
	};
}

#endif

