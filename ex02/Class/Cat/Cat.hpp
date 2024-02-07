/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:12:35 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:12:35 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Cat : public Animal
{
  private:
    Brain *brain;
  public:
                Cat();
                Cat(const Cat& src);
    Cat&        operator=(const Cat& src);
    virtual     ~Cat();
    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif
