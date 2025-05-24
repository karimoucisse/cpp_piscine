
#include "Materia.hpp"

// Default constructor
AMateria::AMateria() {
  std::cout << "Materia Class Default constructor called" << std::endl;
  return;
}

AMateria::AMateria(std::string const &type): _type(type)
{
  std::cout << "Materia Class Assignement constructor called" << std::endl;
  return;
}
void AMateria::use(ICharacter& target)
{
  std::cout << "Ice: " << """* shoots an ice bolt at " << target.getName() << " *" << std::endl;
  std::cout << "Cure: " << """* heals " << target.getName() << "'s wounds *" << std::endl;
  return ;
}
// Copy constructor
AMateria::AMateria(const AMateria &other) {
  std::cout << "Materia Class Copy constructor called" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
AMateria &AMateria::operator=(const AMateria &rhs) {
  this->_type = rhs.getType();
  return *this;
}

// Default destructor
AMateria::~AMateria() {
  std::cout << "Materia Class Destructor called" << std::endl;
  return;
}

