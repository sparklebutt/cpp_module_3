/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:20 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 12:19:59 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_Name("un_named") {std::cout<<"clap trap created"<<std::endl;}

ClapTrap::ClapTrap(std::string Name) : m_Name(Name) {std::cout<<"clap trap named "<<Name<<std::endl;}

// copy constructor as per general rules
ClapTrap::ClapTrap(const ClapTrap& other) : m_Name(other.m_Name) {std::cout<<"copy of "<<m_Name<<" created"<<std::endl;}

// operator overload as per general rules
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout<<"showing entry to overloader"<<std::endl;
	if (this != &other)
	{
		m_Name = other.m_Name;
		m_HitPoints = other.m_HitPoints;
		m_Energy = other.m_Energy;
		m_Attack = other.m_Attack;
	}
	std::cout << m_Name << " assigned with = " << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {std::cout<<"clap trap "<<m_Name<<" destroyed"<<std::endl;}

/**
 * @brief ShowValues is purley for showing values in main so that its easier for you
 * the evaluator.
 * 
 */
void	ClapTrap::ShowValues() const
{
	std::cout<<m_Name<<" hit points = "<<m_HitPoints
	<<" energy = "<<m_Energy<<" attack = "<<m_Attack
	<<std::endl;	
}

void ClapTrap::attackMessage(const std::string& victim)
{
	std::cout<<m_Name<<" attacks "
        <<"causing "<<m_Attack<<" damage to "<<victim<<std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (m_Energy <= 0 || m_HitPoints <= 0)
    {
        std::cout<<m_Name<<" can not attack due to "       
            <<((m_HitPoints <= 0) ? "too dead" : "energy too low")<<std::endl;
        return ;
    }
	attackMessage(target);
    m_Energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    m_HitPoints -= amount;
    std::cout<<"trap "<<m_Name<<" takes "<<amount<<" damage "
    <<"hit points are now "<<m_HitPoints<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (m_Energy <= 0 || m_HitPoints <= 0)
    {
        std::cout<<m_Name<<" can not repair due to "
            <<((m_HitPoints <= 0) ? "too dead" : "energy too low")<<std::endl;
        return ;
    }    
    m_HitPoints += amount;
    m_Energy -= 1;
    std::cout<<m_Name<<" repaired "<<amount<<" amount "<<"hit points now "<<m_HitPoints<<std::endl;
}

void ClapTrap::setHitPoints(int value)
{
	m_HitPoints = value;
}
void ClapTrap::setEnergy(int value)
{
	m_Energy = value;
}
void ClapTrap::setAttack(int value)
{
	m_Attack = value;
}
int ClapTrap::getAttack()
{
	return this->m_Attack;
}
std::string ClapTrap::getName()
{
	return m_Name;
}