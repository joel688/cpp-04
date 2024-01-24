#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
  protected:
    std::string type;
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& src);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& src);
    const std::string& getType(void) const;
    void makeSound(void) const;
};

#endif