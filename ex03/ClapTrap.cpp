/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:42 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/25 20:53:51 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& _name) : name(_name), hp(10), ep(10), atk(0), maxHp(10), maxEp(10)
{
	std::cout << "[ClapTrap class's User defined constructor called]\n";
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	std::cout << "[ClapTrap class's Copy constructor called]\n";
	*this = origin;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& origin)
{
	std::cout << "[ClapTrap class's Copy assignment operator called]\n";
	if (this != &origin)
	{
		name = origin.name;
		hp = origin.hp;
		ep = origin.ep;
		atk = origin.atk;;
		maxHp = origin.maxHp;
		maxEp = origin.maxEp;
	}	
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap class's Destructor called]\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (hp == 0)
	{
		std::cout << "ClapTrap " << name << " can't attack because hp is 0!\n";
		return ;
	}
	else if (ep == 0)
	{
		std::cout << "ClapTrap " << name << " have not enouth energy point\n";
		return ;
	}
	
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << atk << " points of damage!\n";
	ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp == 0)
	{
		std::cout << name << " already destroyed!\n";
		return ;
	}

	int over_amount = 0;

	hp -= amount;
	if (hp < 0)
	{
		over_amount = 0 - hp;
		hp = 0;
	}
	std::cout << name << " take damage and lost " << amount - over_amount << " hp\n";
	if (hp == 0)
		std::cout << name << " destroyed!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp == 0)
	{
		std::cout << name << " can't be repaired because hp is 0!\n";
		return ;
	}
	else if (ep == 0)
	{
		std::cout << name << " have not enouth energy point\n";
		return ;
	}

	int over_amount = 0;

	hp += amount;
	if (hp > maxHp)
	{
		over_amount = hp - maxHp;
		hp = maxHp;
	}
	std::cout << name << " is repaired and get " << amount - over_amount << " hp\n";
	ep--;
}

std::string ClapTrap::getName()
{
	return name;
}

int	ClapTrap::getHp()
{
	return hp;
}

int ClapTrap::getEp()
{
	return ep;
}

int ClapTrap::getAtk()
{
	return atk;
}

void ClapTrap::setName(const std::string& _name)
{
	name = _name;
}

void ClapTrap::setHp(int _hp)
{
	hp = _hp;
}

void ClapTrap::setEp(int _ep)
{
	ep = _ep;
}

void ClapTrap::setAtk(int _atk)
{
	atk = _atk;
}
