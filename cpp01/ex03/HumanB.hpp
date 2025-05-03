#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "iostream"
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *WeaponB;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack() const;
};

#endif
