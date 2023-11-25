/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:43 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/25 21:10:47 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void attack_simul(ClapTrap& a, ClapTrap& b);

int main()
{
	FragTrap obj1("mob1");
	FragTrap obj2("mob2");

	attack_simul(obj1, obj2);

	for (int i = 0; i < 3; i++)
		attack_simul(obj1, obj2);

	obj1.setEp(10);

	obj1.setAtk(6);
	attack_simul(obj1, obj2);
	obj2.beRepaired(12);
	attack_simul(obj1, obj2);
	attack_simul(obj1, obj2);
	attack_simul(obj1, obj2);
	obj2.beRepaired(10);

	obj1.highFivesGuys();
	obj2.highFivesGuys();

	return 0;
}

void attack_simul(ClapTrap& a, ClapTrap& b)
{
	a.attack(b.getName());
	b.takeDamage(a.getAtk());
}
