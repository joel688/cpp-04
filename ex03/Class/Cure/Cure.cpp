/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:02 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:03 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character/Character.hpp"
#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	*this = src;
}

Cure::~Cure()
{

}

Cure &Cure::operator = (const Cure &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}
