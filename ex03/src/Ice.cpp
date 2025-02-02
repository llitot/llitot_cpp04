#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << MAGENTA << "Ice constructor called" << RESET << std::endl;
}

Ice::~Ice() {
    std::cout << MAGENTA << "Ice destructor called" << RESET << std::endl;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
    std::cout << MAGENTA << "Ice copy constructor called" << RESET << std::endl;

	if (this != &other) {
        _type = other._type;
    }

    return (*this);
}