#ifndef _PROTECTOR_H
#define _PROTECTOR_H
#include "Noble.h"
#include <string>

namespace WarriorCraft {

	class Noble;
	class Protector {
	public:
		Protector(std::string input, int s) : name(input), strength(s) {}
		virtual void defend() const = 0;
		float getStrength() const;
		void setStrength(float input);
		std::string nameOfprotector() const;
		bool hireStatus() const;
		void changeNoble(Noble& masterName);
		void changeNobleNull();
	protected:
		Noble* getMyNoble() const;

	private:
		std::string name;
		float strength;
		Noble* nobleImEmployedTo = nullptr;
	};
}

#endif
