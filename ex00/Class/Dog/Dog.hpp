/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:15 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:17:16 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal/Animal.hpp"

class Dog : public Animal
{
  public:
                Dog();
                Dog(const Dog& src);
    Dog&        operator=(const Dog& src);
    virtual     ~Dog();
    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif
