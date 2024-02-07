/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:45 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:46 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class AMateria;

class ICharacter
{
  public:
	      virtual ~ICharacter() {}
	      virtual std::string const & getName() const = 0;
	      virtual void equip(AMateria* m) = 0;
	      virtual void unequip(int idx) = 0;
	      virtual void use(int idx, ICharacter& target) = 0;
};

#endif
