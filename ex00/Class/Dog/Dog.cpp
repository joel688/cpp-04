/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:08 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:17:09 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

// ----------Constructors----------

Dog::Dog()
{
  this->type = "Dog";
  std::cout << "Dog created" << std::endl;
  return;
}

Dog::Dog(const Dog& src) : Animal(src)
{
  *this = src;
  std::cout << "Dog copied" << std::endl;
  return;
}

// ----------Deconstructors----------

Dog::~Dog()
{
  std::cout << "Dog destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

std::string Dog::getType(void) const
{
  return(this->type);
}

// ----------Operators_Overloaders-----------

Dog& Dog::operator=(const Dog& src)
{
  this->type = src.type;
  std::cout << "Dog assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------

void  Dog::makeSound(void) const
{
  std::cout << "Wouaf" << std::endl;
  return;
}
