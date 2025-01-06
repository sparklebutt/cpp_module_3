/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:09:53 by shaboom           #+#    #+#             */
/*   Updated: 2025/01/06 17:40:25 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string m_name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string Name);
		~DiamondTrap();
		std::string getName();
		void whoAmI();
		using ScavTrap::attack;//(const std::string &target);
};