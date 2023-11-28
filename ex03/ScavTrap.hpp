/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:41:32 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/28 11:56:51 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	ScavTrap();
	
public:
	ScavTrap(const std::string& _name);
	ScavTrap(const ScavTrap &origin);
	ScavTrap& operator=(const ScavTrap& origin);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
	
};

#endif