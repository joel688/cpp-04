/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:10:04 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:10:05 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>

class AMateria;

class IMateriaSource 
{
  public:
	    virtual ~IMateriaSource() {}
	    virtual void learnMateria(AMateria*) = 0;
	    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
