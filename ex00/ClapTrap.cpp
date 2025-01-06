/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:20 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 11:42:01 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : m_Name("un_named") {std::cout<<"clap trap un_named created"<<std::endl;}

// Constructor with parameter
ClapTrap::ClapTrap(std::string Name) : m_Name(Name) {std::cout<<"clap trap "<<Name<<" created"<<std::endl;}

// copy constructor as per general rules
ClapTrap::ClapTrap(const ClapTrap& other) : m_Name(other.m_Name) {std::cout<<"copy of "<<m_Name<<" created"<<std::endl;}

// operator overload as per general rules
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		m_Name = other.m_Name;
		m_HitPoints = other.m_HitPoints;
		m_Energy = other.m_Energy;
		m_Attack = other.m_Attack;
	}
	std::cout << "ClapTrap " << m_Name << " assigned" << std::endl;
	return *this;
}

// Destrcutor
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

void	ClapTrap::attack(const std::string& target)
{
    if (m_Energy <= 0 || m_HitPoints <= 0)
    {
        std::cout<<m_Name<<" can not attack due to "       
            <<((m_HitPoints <= 0) ? "too dead" : "energy too low")<<std::endl;
        return ;
    }
    std::cout<<"clap trap "<<m_Name<<" attacks "
        <<"causing "<<m_Attack<<" damage to "<<target<<std::endl;
    m_Energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    m_HitPoints -= amount;
    std::cout<<"clap trap "<<m_Name<<" takes "<<amount<<" damage "
    <<" hit points are now "<<m_HitPoints<<std::endl;
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
    std::cout<<"clap trap repaired "<<amount<<"amount "<<"hit points now "<<m_HitPoints<<std::endl;
}