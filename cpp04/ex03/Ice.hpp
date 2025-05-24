
#ifndef ICE_HPP_
#define ICE_HPP_

#include "Materia.hpp"
// Class declaration
class Ice : AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &rhs);
		Ice *clone() const;
		~Ice();

	private:

};

#endif // ICE_HPP_

