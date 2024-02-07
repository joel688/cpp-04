/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:14:09 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:14:11 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

// ----------Constructors----------

Animal::Animal()
{
  std::cout << "Animal created" << std::endl;
  return;
}

Animal::Animal(const Animal& src)
{
  *this = src;
  std::cout << "Animal copied" << std::endl;
  return;
}

// ----------Deconstructors----------

Animal::~Animal()
{
  std::cout << "Animal destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

const std::string& Animal::getType(void) const
{
  return(this->type);
}

// ----------Operators_Overloaders-----------

Animal& Animal::operator=(const Animal& src)
{
  this->type = src.type;
  std::cout << "Animal assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------

void  Animal::makeSound(void) const
{
  std::cout << "Animal sound" << std::endl;
  return;
}
