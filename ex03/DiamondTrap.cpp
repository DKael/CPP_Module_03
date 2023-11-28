/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:09:46 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 12:16:21 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& _name) 
: ClapTrap(_name), ScavTrap(_name), FragTrap(_name), name(_name)
{
	std::cout << "[DiamondTrap class's User defined constructor called]\n";

	FragTrap tmp1(_name);
	ScavTrap tmp2(_name);

	ClapTrap::name += "_clap_name";
	hp = tmp1.getHp();
	maxHp = tmp1.getMaxHp();
	ep = tmp2.getEp();
	maxEp = tmp2.getMaxEp();
	atk = tmp1.getAtk();
}

DiamondTrap::DiamondTrap(const DiamondTrap& origin)
: ClapTrap(origin.name), ScavTrap(origin.name), FragTrap(origin.name), name(origin.name)
{
	std::cout << "[DiamondTrap class's Copy constructor called]\n";
	*this = origin;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origin)
{
	std::cout << "[DiamondTrap class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		ClapTrap::name = origin.ClapTrap::name;
		name = origin.name;
		hp = origin.hp;
		ep = origin.ep;
		atk = origin.atk;
		maxHp = origin.maxHp;
		maxEp = origin.maxEp;
	}	
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap class's Destructor called]\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name : " << name << "\nClapTrap's name : " << ClapTrap::name << '\n';
}
