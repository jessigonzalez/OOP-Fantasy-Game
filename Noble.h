#ifndef _NOBLE_H
#define _NOBLE_H
#include <string>

namespace WarriorCraft {
	class Noble {
	public:
		Noble(std::string input, int s = 0) : name(input), strength(s) {}
		std::string getName() const;
		bool nobleIsAlive() const;
		void setAliveStatus(bool change);
		float getStrength();
		void setStrength(float input);
		virtual void modifyStrength(float ratio) = 0;
		void battle(Noble& nobleName);
	private:
		std::string name;
		float strength;
		bool isAlive = true;
	};
}

#endif
