/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:27 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:28 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character/Character.hpp"
#include "../AMateria/AMateria.hpp"
#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	*this = src;
}

Ice::~Ice()
{

}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}
