/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:23 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 18:14:47 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {std::cout<<"scav trap created"<<std::endl;}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout<<"scav trap named "<<Name<<std::endl;
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergy(50);
	ClapTrap::setAttack(20);
}
ScavTrap::~ScavTrap() {std::cout<<"scav trap "<<getName()<<" destroyed"<<std::endl;}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergy() <= 0 || getHitPoints() <= 0)
    {
        std::cout<<getName()<<" can not attack due to "       
            <<((getHitPoints() <= 0) ? "too dead" : "energy too low")<<std::endl;
        return ;
    }
	std::cout<<getName()<<" waves a big fish around at"<<target<<std::endl;
	setEnergy(getEnergy() - 1);
	std::cout<<getName()<<" attacks "
        <<"causing "<<getAttack()<<" damage to "<<target<<std::endl;
}

void ScavTrap::guardGate() {std::cout<<"scav trap "<<getName()<<" is in gate keeper mode"<<std::endl;}