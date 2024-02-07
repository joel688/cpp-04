/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:01 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:17 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"
#include "../Character/Character.hpp"

// ----------Constructors----------

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria &src)
{
  *this = src;
}

AMateria::AMateria(std::string const &type) : _type(type)
{

}

// ----------Destructors----------

AMateria::~AMateria()
{

}

// ----------Operators_overloaders----------

AMateria &AMateria::operator = (const AMateria &rhs)
{
  if(this != &rhs)
    this->_type = rhs._type;
  return (*this);
}

// ----------Getters----------

std::string const &AMateria::getType() const
{
  return (this->_type);
}

// ----------Setters----------



// ----------Members_Functions----------

void  AMateria::use(ICharacter& target)
{
  if(this->getType() == "ice")
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
  else if (this->getType() == "cure")
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
