/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:53:00 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/26 16:53:00 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

const int	G_ANIMAL_ARRAY_SIZE = 20;

int main()
{
	Animal* array[G_ANIMAL_ARRAY_SIZE];
	for (int i = 0; i < G_ANIMAL_ARRAY_SIZE; i++){
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (int i = 0; i < G_ANIMAL_ARRAY_SIZE; i++) {
		array[i]->makeSound();
	}

	for (int i = 0; i < G_ANIMAL_ARRAY_SIZE; i++){
		delete array[i];
	}
	return (0);
}