/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:43 by hyungdki          #+#    #+#             */
/*   Updated: 2023/12/04 16:21:01 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

void attack_simul(ScavTrap& a, ScavTrap& b);

int main()
{
	ScavTrap obj1("mob1");
	ScavTrap obj2("mob2");

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

	obj2.setAtk(200);
	attack_simul(obj2, obj1);

	obj1.guardGate();
	obj2.guardGate();

	return 0;
}

void attack_simul(ScavTrap& a, ScavTrap& b)
{
	a.attack(b.getName());
	b.takeDamage(a.getAtk());
}
