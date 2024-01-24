#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Dog : public Animal
{
  private:
    Brain *brain;
  public:
                Dog();
                Dog(const Dog& src);
    Dog&        operator=(const Dog& src);
    virtual     ~Dog();
    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif
