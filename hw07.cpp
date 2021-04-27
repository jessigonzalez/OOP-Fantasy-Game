/*
Jessica Gonzalez
hw07
*/
#include <string>
#include <vector>
#include <iostream>
#include "Noble.h"
#include "Protector.h"
#include "Archer.h"
#include "Lord.h"
#include "PersonWithStrengthToFight.h"
#include "Swordsman.h"
#include "Warrior.h"
#include "Wizard.h"
using namespace std;
using namespace WarriorCraft;

int main() {
	Lord sam("Sam");
	Archer samantha("Samantha", 200);
	sam.hires(samantha);
	Lord joe("Joe");
	PersonWithStrengthToFight randy("Randolf the Elder", 250);
	joe.battle(randy);
	joe.battle(sam);
	Lord janet("Janet");
	Swordsman hardy("TuckTuckTheHardy", 100);
	Swordsman stout("TuckTuckTheStout", 80);
	janet.hires(hardy);
	janet.hires(stout);
	PersonWithStrengthToFight barclay("Barclay the Bold", 300);
	janet.battle(barclay);
	janet.hires(samantha);
	Archer pethora("Pethora", 50);
	Archer thora("Thorapleth", 60);
	Wizard merlin("Merlin", 150);
	janet.hires(pethora);
	janet.hires(thora);
	sam.hires(merlin);
	janet.battle(barclay);
	sam.battle(barclay);
	joe.battle(barclay);
	cin.get();
}
/*
Joe battles Randolf the Elder
Randolf the Elder defeats Joe
Joe battles Sam
He's dead, Sam
Janet battles Barclay the Bold
CLANG!  TuckTuckTheHardy says: Take that in the name of my lord, Janet
CLANG!  TuckTuckTheStout says: Take that in the name of my lord, Janet
Barclay the Bold defeats Janet
Janet battles Barclay the Bold
He's dead, Barclay the Bold
Sam battles Barclay the Bold
TWANG!  Samantha says: Take that in the name of my lord, Sam
POOF!
Sam defeats Barclay the Bold
Joe battles Barclay the Bold
Oh, NO!  They're both dead!  Yuck!
*/