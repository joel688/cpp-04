/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:13:03 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:13:04 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
  protected:
    std::string type;
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& src);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& src);
    const std::string& getType(void) const;
    void makeSound(void) const;
};

#endif
