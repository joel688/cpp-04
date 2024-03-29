/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:49 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:52 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Character/Character.hpp"
#include "./Class/MateriaSource/MateriaSource.hpp"

int main() {
	// Create a MateriaSource and learn Ice and Cure Materias
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// Create a Character named "me"
	ICharacter* me = new Character("me");

	// Equip "me" with Ice and Cure Materias
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// Create a Character named "bob"
	ICharacter* bob = new Character("bob");

	// "me" uses Ice and Cure Materias on "bob"
	me->use(0, *bob);
	me->use(1, *bob);

	// Clean up
	delete bob;
	delete me;
	delete src;

	return 0;
}





// int main() {
// 	// Create a MateriaSource and learn Ice and Cure Materias
// 	MateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	// Create a Character named "me"
// 	Character* me = new Character("me");

// 	// Equip "me" with Ice and Cure Materias
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	// Create a Character named "bob"
// 	Character* bob = new Character("bob");

// 	// "me" uses Ice and Cure Materias on "bob"
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	// Test copy constructor
// 	Character* copyMe = new Character(*me);
// 	copyMe->use(0, *bob); // Should use Ice on bob
// 	copyMe->use(1, *bob); // Should use Cure on bob

// 	// Test assignment operator
// 	Character assignBob = *bob;
// 	assignBob = *me;
// 	assignBob.use(0, *bob); // Should use Ice on bob
// 	assignBob.use(1, *bob); // Should use Cure on bob

// 	// Clean up
// 	delete bob;
// 	delete me;
// 	delete copyMe;
// 	delete src;


// 	// Create a MateriaSource and learn Ice and Cure Materias
// 	MateriaSource* src2 = new MateriaSource();
// 	src2->learnMateria(new Ice());
// 	src2->learnMateria(new Cure());

// 	// Test createMateria with valid and invalid types
// 	AMateria* tmp2;
// 	tmp2 = src2->createMateria("ice");
// 	if (tmp2 == 0 || tmp2->getType() != "ice")
// 		std::cout << "createMateria failed for type 'ice'" << std::endl;
// 	delete tmp2;
// 	tmp2 = src2->createMateria("fire");
// 	if (tmp2 != 0)
// 		std::cout << "createMateria did not return null for invalid type 'fire'" << std::endl;
// 	delete tmp2;

// 	// Test learnMateria with null
// 	src2->learnMateria(0); // Should not do anything

// 	// Test copy constructor
// 	MateriaSource* copySrc2 = new MateriaSource(*src2);
// 	tmp2 = copySrc2->createMateria("ice");
// 	if (tmp2 == 0 || tmp2->getType() != "ice")
// 		std::cout << "copy constructor failed for type 'ice'" << std::endl;
// 	delete tmp2;

// 	// Test assignment operator
// 	MateriaSource assignSrc2;
// 	assignSrc2 = *src2;
// 	tmp2 = assignSrc2.createMateria("ice");
// 	if (tmp2 == 0 || tmp2->getType() != "ice")
// 		std::cout << "assignment operator failed for type 'ice'" << std::endl;

// 	// Clean up
// 	delete src2;
// 	delete copySrc2;
// 	delete tmp2;

// 	return 0;
// }
