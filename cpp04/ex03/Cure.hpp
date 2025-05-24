
#ifndef CURE_HPP_
#define CURE_HPP_

#include "Materia.hpp"
// Class declaration
class Cure : AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &rhs);
		Cure *clone() const;
		~Cure();

	private:

};

#endif // CURE_HPP_

