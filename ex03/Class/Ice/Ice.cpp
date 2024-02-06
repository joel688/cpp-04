#include "../Character/Character.hpp"
#include "../AMateria/AMateria.hpp"
#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	*this = src;
}

Ice::~Ice()
{

}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}
