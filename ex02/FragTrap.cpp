/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:28:52 by shaboom           #+#    #+#             */
/*   Updated: 2025/01/06 12:39:30 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {std::cout<<"scav trap created"<<std::endl;}
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout<<"Frag trap named "<<Name<<std::endl;
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergy(100);
	ClapTrap::setAttack(30);
}
FragTrap::~FragTrap() {std::cout<<"Frag trap "<<getName()<<" destroyed"<<std::endl;}

void FragTrap::attackMessage(const std::string& victim)
{
	std::cout<<getName()<<" clink clonk , does that look like a grenade? "<<std::endl;
	ClapTrap::attackMessage(victim);
}

void FragTrap::highFivesGuys() {std::cout<<"FragTrap "<<getName()<<" requests a high five "<<std::endl;}