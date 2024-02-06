#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "../IMateriaSource/IMateriaSource.hpp"
# include "../AMateria/AMateria.hpp"
# include "../Ice/Ice.hpp"
# include "../Cure/Cure.hpp"

class MateriaSource : public IMateriaSource
{
  public:
	      MateriaSource();
        MateriaSource(const MateriaSource &src);
        ~MateriaSource();
        MateriaSource &operator = (const MateriaSource &rhs);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);

private:
        AMateria *_memory[4];
};

#endif
