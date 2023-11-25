/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:55:58 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/25 21:00:47 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "[FragTrap class's User defined constructor called]\n";
	hp = 100;
	ep = 100;
	atk = 30;
	maxHp = 100;
	maxEp = 100;
}

FragTrap::FragTrap(const FragTrap& origin) : ClapTrap(origin.name)
{
	std::cout << "[FragTrap class's Copy constructor called]\n";
	*this = origin;
}

FragTrap& FragTrap::operator=(const FragTrap& origin)
{
	std::cout << "[FragTrap class's Copy assignment operator called]\n";
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

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap class's Destructor called]\n";
}

void FragTrap::attack(const std::string& target)
{
	if (hp == 0)
	{
		std::cout << "FragTrap" << name << " can't attack because hp is 0!\n";
		return ;
	}
	else if (ep == 0)
	{
		std::cout << "FragTrap" << name << " have not enouth energy point\n";
		return ;
	}
	
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << atk << " points of damage!\n";
	ep--;
}

void FragTrap::highFivesGuys(void)
{
	if (hp == 0)
	{
		std::cout << "FragTrap can't highfive because hp is 0!\n";
		return ;
	}
	else if (ep == 0)
	{
		std::cout << "FragTrap" << name << " have not enouth energy point\n";
		return ;
	}

	std::cout << name << " request highfive!\n";
}
