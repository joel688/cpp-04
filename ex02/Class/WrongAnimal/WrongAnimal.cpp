#include "./WrongAnimal.hpp"


// ----------Constructors----------

WrongAnimal::WrongAnimal()
{
  this->type = "WrongAnimal";
  std::cout << "WrongAninal created" << std::endl;
  return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
  *this = src;
  std::cout << "WrongAnimal copied" << std::endl;
  return;
}

// ----------Deconstrutors----------

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

const std::string& WrongAnimal::getType(void) const
{
  return(this->type);
}

// ----------Operators_overloaders----------

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
  this->type = src.type;
  std::cout << "WrongAnimal assigned" << std::endl;
  return(*this);
}

void  WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal sound" << std::endl;
  return;
}
