/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:08 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:09 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "../AMateria/AMateria.hpp"

class Cure : public AMateria 
{
  public:
	        Cure();
	        Cure(const Cure &src);
	        ~Cure();
	        Cure &operator = (const Cure &rhs);

	        Cure *clone() const;
};

#endif
