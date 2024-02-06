#include "../Character/Character.hpp"
#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	*this = src;
}

Cure::~Cure()
{

}

Cure &Cure::operator = (const Cure &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}
