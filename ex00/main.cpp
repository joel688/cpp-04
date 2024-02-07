/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:03 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:18:04 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Animal/Animal.hpp"
#include "./Class/Cat/Cat.hpp"
#include "./Class/Dog/Dog.hpp"
#include "./Class/WrongAnimal/WrongAnimal.hpp"
#include "./Class/WrongCat/WrongCat.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal *cat = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	delete cat;

	return (0);
}
