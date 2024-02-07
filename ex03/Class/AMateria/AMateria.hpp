/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:22 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:23 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
  public:
              AMateria();
              AMateria(const AMateria &src);
              AMateria(std::string const &type);
              virtual ~AMateria();
              AMateria &operator = (const AMateria &rhs);
              std::string const &getType() const;
              virtual AMateria* clone() const = 0;
              virtual void use(ICharacter& target);

  protected:
              std::string _type;
};

#endif
