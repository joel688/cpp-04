#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "../AMateria/AMateria.hpp"

class Cure : public AMateria 
{
  public:
	        Cure();
	        Cure(const Cure &src);
	        ~Cure();
	        Cure &operator = (const Cure &rhs);

	        Cure *clone() const;
};

#endif
