/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:34:38 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/19 16:57:54 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IceMateria.hpp"
#include "CureMateria.hpp"

void test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new IceMateria());
	src->learnMateria(new CureMateria());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria *save = tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);


	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);

	delete bob;
	delete me;
	delete src;
	delete save;
}
int main()
{
	test();
	return 0;
}
