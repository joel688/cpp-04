#include "./Cat.hpp"

// ----------Constructors----------

Cat::Cat()
{
  this->type = "Cat";
  this->brain = new Brain();
  std::cout << "Cat created" << std::endl;
  return;
}

Cat::Cat(const Cat& src) : Animal(src)
{
  *this = src;
  std::cout << "Cat copied" << std::endl;
  return;
}

// ----------Deconstructors----------

Cat::~Cat()
{
  delete this->brain;
  std::cout << "Cat destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

std::string Cat::getType(void) const
{
  return(this->type);
}

// ----------Operators_Overloaders-----------

Cat& Cat::operator=(const Cat& src)
{
  this->type = src.type;
  this->brain = new Brain(*src.brain);
  std::cout << "Cat assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------

void  Cat::makeSound(void) const
{
  std::cout << "Miaou" << std::endl;
  return;
}
