/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:56:06 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/25 20:58:12 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
	
public:
	FragTrap(const std::string& _name);
	FragTrap(const FragTrap &origin);
	FragTrap& operator=(const FragTrap& origin);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys(void);
	
};

#endif