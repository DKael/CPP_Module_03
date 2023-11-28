/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:27:41 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 12:03:29 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	ClapTrap(); // Not use
	
protected:
	std::string name;
	int hp;
	int	ep;
	int atk;
	int maxHp;
	int	maxEp;

public:
	ClapTrap(const std::string& _name);
	ClapTrap(const ClapTrap &origin);
	ClapTrap& operator=(const ClapTrap& origin);
	~ClapTrap();
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
	int	getHp();
	int	getMaxHp();
	int getEp();
	int getMaxEp();
	int getAtk();
	void setName(const std::string& _name);
	void setHp(int _hp);
	void setEp(int _ep);
	void setAtk(int _atk);
};

#endif