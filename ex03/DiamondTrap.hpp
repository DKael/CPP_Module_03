/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:09:42 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 12:07:58 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	DiamondTrap();
	std::string name;
	
public:
	DiamondTrap(const std::string& _name);
	DiamondTrap(const DiamondTrap &origin);
	DiamondTrap& operator=(const DiamondTrap& origin);
	~DiamondTrap();
	void attack(const std::string& target);
	void whoAmI();
	
};

#endif