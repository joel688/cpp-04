/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:14:14 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:14:15 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
  protected:
    std::string type;
  public:
    Animal();
    Animal(const Animal& src);
    Animal& operator=(const Animal& src);
    virtual ~Animal();
    const std::string& getType(void) const;
    virtual void makeSound(void) const;

};

#endif
