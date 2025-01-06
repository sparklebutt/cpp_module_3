/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:09:49 by shaboom           #+#    #+#             */
/*   Updated: 2025/01/06 17:44:43 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {std::cout<<"default diamond constructor"<<std::endl;}

DiamondTrap::DiamondTrap(const std::string Name) : ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name)
{
	std::cout<<"DiamondTrap "<<Name<<" created"<<std::endl;
	m_name = Name;
	setHitPoints(FragTrap::getHitPoints());
	setEnergy(ScavTrap::getEnergy());
	setAttack(getAttack());
};
DiamondTrap::~DiamondTrap() {std::cout<<"DiamonTrap "<<m_name<<" destroyed"<<std::endl;}

std::string DiamondTrap::getName()
{
	std::cout<<"calling this one mofo"<<std::endl;
	return m_name;
}

void DiamondTrap::whoAmI()
{
	std::cout<<"DiamonTrap name is "<<m_name<<
	" claptrap name is "<<ClapTrap::getName()<<std::endl;
}