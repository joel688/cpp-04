#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "../AMateria/AMateria.hpp"

class Ice : public AMateria
{
  public:
	      Ice();
	      Ice(const Ice &src);
	      ~Ice();
	      Ice &operator = (const Ice &rhs);
        Ice *clone() const;
};

#endif
