/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:32 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:33 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "../AMateria/AMateria.hpp"

class Ice : public AMateria
{
  public:
	      Ice();
	      Ice(const Ice &src);
	      ~Ice();
	      Ice &operator = (const Ice &rhs);
        Ice *clone() const;
};

#endif
