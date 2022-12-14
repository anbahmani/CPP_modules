/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:47:54 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 20:50:44 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

	std::cout << "-----------------------Right tests------------------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

		std::cout << "-----------------------Wrong tests------------------------" << std::endl;

	
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	const WrongCat* wrong_cat2 = new WrongCat();
	
	std::cout << wrong_cat->getType() << " " << std::endl;
	std::cout << wrong_cat2->getType() << " " << std::endl;
	wrong_cat->makeSound();
	wrong_cat2->makeSound();
	wrong_animal->makeSound();

	delete wrong_animal;
	delete wrong_cat;
	delete wrong_cat2;

	return 0;
}