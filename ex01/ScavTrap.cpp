/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:41:27 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/25 20:52:40 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "[ScavTrap class's User defined constructor called]\n";
	hp = 100;
	ep = 50;
	atk = 20;
	maxHp = 100;
	maxEp = 50;
}

ScavTrap::ScavTrap(const ScavTrap& origin) : ClapTrap(origin.name)
{
	std::cout << "[ScavTrap class's Copy constructor called]\n";
	*this = origin;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
{
	std::cout << "[ScavTrap class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		name = origin.name;
		hp = origin.hp;
		ep = origin.ep;
		atk = origin.atk;
		maxHp = origin.maxHp;
		maxEp = origin.maxEp;
	}	
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap class's Destructor called]\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (hp == 0)
	{
		std::cout << "ScavTrap" << name << " can't attack because hp is 0!\n";
		return ;
	}
	else if (ep == 0)
	{
		std::cout << "ScavTrap" << name << " have not enouth energy point\n";
		return ;
	}
	
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << atk << " points of damage!\n";
	ep--;
}

void ScavTrap::guardGate()
{
	if (hp == 0)
	{
		std::cout << "ScavTrap can't guard gate because hp is 0!\n";
		return ;
	}
	else if (ep == 0)
	{
		std::cout << "ScavTrap" << name << " have not enouth energy point\n";
		return ;
	}

	std::cout << name << " is now in Gate keeper mode\n";
}
