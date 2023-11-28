/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:43 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 12:13:18 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void attack_simul(ClapTrap& a, ClapTrap& b);

int main()
{
	DiamondTrap obj1("mob1");
	DiamondTrap obj2("mob2");

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

	obj1.guardGate();
	obj2.guardGate();

	obj1.highFivesGuys();
	obj2.highFivesGuys();

	obj1.whoAmI();
	obj2.whoAmI();

	return 0;
}

void attack_simul(ClapTrap& a, ClapTrap& b)
{
	a.attack(b.getName());
	b.takeDamage(a.getAtk());
}
