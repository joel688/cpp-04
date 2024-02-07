/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:15:35 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:15:35 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

// ----------Constructors----------

WrongCat::WrongCat()
{
  this->type = "WrongCat";
  std::cout << "WrongCat created" << std::endl;
  return;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
  *this = src;
  std::cout << "WrongCat copied" << std::endl;
  return ;
}

// ----------Destructors----------

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destroyed" << std::endl;
  return ;
}

// ----------Setters----------



// ----------Getters----------

const std::string& WrongCat::getType(void) const
{
  return(this->type);
}

// ----------Operators_overloaders----------

WrongCat& WrongCat::operator=(const WrongCat& src)
{
  this->type = src.type;
  std::cout << "WrongCat assigned" << std::endl;
  return(*this);
}

// ----------Members_Functions----------

void  WrongCat::makeSound(void) const
{
  std::cout << "WrongCat sound" << std::endl;
  return;
}
