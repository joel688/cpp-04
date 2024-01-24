#include "./Animal.hpp"

// ----------Constructors----------

Animal::Animal()
{
  std::cout << "Animal created" << std::endl;
  return;
}

Animal::Animal(const Animal& src)
{
  *this = src;
  std::cout << "Animal copied" << std::endl;
  return;
}

// ----------Deconstructors----------

Animal::~Animal()
{
  std::cout << "Animal destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

const std::string& Animal::getType(void) const
{
  return(this->type);
}

// ----------Operators_Overloaders-----------

Animal& Animal::operator=(const Animal& src)
{
  this->type = src.type;
  std::cout << "Animal assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------
