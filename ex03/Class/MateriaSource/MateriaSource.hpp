/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:10:31 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:10:32 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
