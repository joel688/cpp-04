/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:33 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:34 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "../AMateria/AMateria.hpp"


// ----------Constructors----------

Character::Character(std::string name) : _name(name)
{
	for (int idx = 0; idx < 4; idx++)
		this->_inventorySlot[idx] = 0;
}

Character::Character(const Character &src)
{
	for (int idx = 0; idx < 4; idx++)
		this->_inventorySlot[idx] = 0;
	*this = src;
}

// ----------Destructors----------

Character::~Character()
{
	for (int idx = 0; idx < 4; idx++)
  {
		if (this->_inventorySlot[idx] != 0)
			delete this->_inventorySlot[idx];
	}
}

// ----------Operators_Overloaders----------

Character &Character::operator = (const Character &rhs)
{
	if (this != &rhs)
  {
		this->_name = rhs._name;
		for (int idx = 0; idx < 4; idx++)
    {
			if (this->_inventorySlot[idx] != 0)
				delete this->_inventorySlot[idx];
			if (rhs._inventorySlot[idx] != 0)
				this->_inventorySlot[idx] = rhs._inventorySlot[idx]->clone();
		}
	}
	return (*this);
}

// -----------Getters----------

std::string const &Character::getName() const 
{
	return (this->_name);
}

// ----------Members_Functions----------

void Character::equip(AMateria *m)
{
	int idx;
	for (idx = 0; idx < 4; idx++)
  {
		if (!this->_inventorySlot[idx])
    {
      this->_inventorySlot[idx] = m;
			// std::cout << "Materia " << this->_inventorySlot[idx]->getType() << " slot " << idx << " equiped" << std::endl;
			return ;
    }
	}
	// std::cout << "Can't equip more than 4 materia" << std::endl;
}

void Character::unequip(int idx) 
{
	if (this->_inventorySlot[idx])
  {
		// std::cout << "Materia " << this->_inventorySlot[idx]->getType() << " slot " << idx << " unequiped" << std::endl;
		_inventorySlot[idx] = 0;
	}
	else 
  {
		// std::cout << "This inventory slot is empty" << std::endl;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && this->_inventorySlot[idx])
  {
		this->_inventorySlot[idx]->use(target);
		delete this->_inventorySlot[idx];
		this->_inventorySlot[idx] = 0;
	}
}
