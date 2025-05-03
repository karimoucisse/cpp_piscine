#ifndef WEAPON_H
#define WEAPON_H

#include "iostream"

class Weapon{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string str);
		~Weapon(void);
		std::string const &getType(void) const;
		void setType(std::string);
};

#endif
