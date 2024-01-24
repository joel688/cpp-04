#include "./Dog.hpp"

// ----------Constructors----------

Dog::Dog()
{
  this->type = "Dog";
  this->brain = new Brain();
  std::cout << "Dog created" << std::endl;
  return;
}

Dog::Dog(const Dog& src) : Animal(src)
{
  *this = src;
  std::cout << "Dog copied" << std::endl;
  return;
}

// ----------Deconstructors----------

Dog::~Dog()
{
  delete this->brain;
  std::cout << "Dog destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

std::string Dog::getType(void) const
{
  return(this->type);
}

// ----------Operators_Overloaders-----------

Dog& Dog::operator=(const Dog& src)
{
  this->type = src.type;
  this->brain = new Brain(*src.brain);
  std::cout << "Dog assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------

void  Dog::makeSound(void) const
{
  std::cout << "Wouaf" << std::endl;
  return;
}
