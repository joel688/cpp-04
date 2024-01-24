#include "./Brain.hpp"

// ----------Constructors----------

Brain::Brain()
{
  std::cout << "Brain constructed" << std::endl;
  return;
}

Brain::Brain(const Brain& src)
{
  *this = src;
  std::cout << "Brain copied" << std::endl;
  return;
}

// ----------Destructor----------

Brain::~Brain()
{
  std::cout << "Brain destroyed" << std::endl;
  return;
}

// ----------Operators_Overloaders----------

Brain& Brain::operator=(const Brain& src)
{
  for(int i = 0; i < 100; i++)
    this->ideas[i] = src.ideas[i];
  std::cout << "Brain assigned" << std::endl;
  return(*this);
}
