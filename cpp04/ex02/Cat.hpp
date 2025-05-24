
#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

// Class declaration
class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &rhs);
		void makeSound() const;
		virtual ~Cat();
	private:
		Brain *_brain;
};

#endif // CAT_HPP_

