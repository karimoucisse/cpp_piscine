#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "iostream"

class Zombie {
	private:
		std::string name;
	public:
		void setName(std::string);
		Zombie();
		~Zombie(void);
		void announce( void );
};

#endif
