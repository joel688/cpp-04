#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
    WrongCat();
    WrongCat(const WrongCat& src);
    WrongCat &operator=(const WrongCat& src);
    ~WrongCat();
    const std::string& getType() const;
    void  makeSound() const;
};

#endif
