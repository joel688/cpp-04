/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:16:53 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:16:54 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

// ----------Constructors----------

Cat::Cat()
{
  this->type = "Cat";
  std::cout << "Cat created" << std::endl;
  return;
}

Cat::Cat(const Cat& src) : Animal(src)
{
  *this = src;
  std::cout << "Cat copied" << std::endl;
  return;
}

// ----------Deconstructors----------

Cat::~Cat()
{
  std::cout << "Cat destroyed" << std::endl;
  return;
}

// ----------Setters----------



// ----------Getters----------

std::string Cat::getType(void) const
{
  return(this->type);
}

// ----------Operators_Overloaders-----------

Cat& Cat::operator=(const Cat& src)
{
  this->type = src.type;
  std::cout << "Cat assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------

void  Cat::makeSound(void) const
{
  std::cout << "Miaou" << std::endl;
  return;
}
