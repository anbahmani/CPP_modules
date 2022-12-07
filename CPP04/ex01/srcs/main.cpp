/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:47:54 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 21:13:09 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int main(int ac, char **av) {

	// Check args

	if (ac != 2) {
		std::cout << "The program needs 1 argument only." << std::endl;
		return 0;
	}

	std::string arg = std::string(av[1]);
	for (unsigned int i = 0; i < arg.length(); i++) {
        if (std::isdigit(arg.at(i)) == 0){
			std::cout << "The arg has to be an integer." << std::endl;
			return 0;
		}
    }

	int n = atoi(av[1]);
	if (n < 1){
		std::cout << "The arg has to be greater than 0." << std::endl;
		return 0;
	}
	
	//Test from ex00

	std::cout << "----------------Test from ex00----------------" << std::endl;
	
	std::cout << "-----------------------Right tests------------------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << "-----------------------Wrong tests------------------------" << std::endl;

	
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	delete wrong_animal;
	delete wrong_cat;	

	return 0;

	//Specific test for ex01
	
	std::cout << "----------------Specific test for ex01----------------" << std::endl;
	
	if (n % 2 == 1)
		n == 2147483647 ? n-- : n++;
	std::cout << n << " Animal will be created." << std::endl;
	Animal *animals[n];
	for (int i = 0; i < (n / 2); i++){
		Dog *dog_tmp = new Dog();
		animals[i] = dog_tmp;
		dog_tmp->add_idea(dog_tmp->getType().append(std::to_string(i)));
	}
	
	
	animals[0] = animals[1];
	
	for (int i = n / 2; i < n; i++){
		Cat *cat_tmp = new Cat();
		animals[i] = cat_tmp;
		cat_tmp->add_idea(cat_tmp->getType().append(std::to_string(i)));
	}
	
	for (int i = 0; i < n; i++){
		delete animals[i];
	}


	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat(*cat1);
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);
	
	cat2->setType("test");
	
	std::cout << "cat1 has type " << cat1->getType() << std::endl;
	std::cout << "cat2 has type " << cat2->getType() << std::endl;

	delete cat1;
	delete cat2;

	dog2->setType("test");
	
	std::cout << "dog1 has type " << dog1->getType() << std::endl;
	std::cout << "dog2 has type " << dog2->getType() << std::endl;

	delete dog1;
	delete dog2;
	
	return 0;
}