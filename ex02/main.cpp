#include "./Class/Animal/Animal.hpp"
#include "./Class/Cat/Cat.hpp"
#include "./Class/Dog/Dog.hpp"
#include "./Class/WrongAnimal/WrongAnimal.hpp"
#include "./Class/WrongCat/WrongCat.hpp"

int	main(void)
{
	int n = 10;

	Animal *animals[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Animal " << i << " : " << std::endl;
		if (!(i % 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << "Animal " << i << " : " << std::endl;
		delete animals[i];
	}

	return (0);
}
