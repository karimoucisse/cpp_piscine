
#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include "iostream"
// Class declaration
class WrongAnimal {
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &rhs);
    ~WrongAnimal();
    virtual void makeSound() const;
    std::string getType(void) const;

    protected:
        std::string type;
};

#endif // WRONGANIMAL_HPP_

