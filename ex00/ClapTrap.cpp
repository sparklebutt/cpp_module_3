/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:20 by araveala          #+#    #+#             */
/*   Updated: 2024/12/10 15:54:06 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_Name("un_named") {std::cout<<"clap trap created"<<std::endl;}

ClapTrap::ClapTrap(std::string Name) : m_Name(Name) {std::cout<<"clap trap named "<<Name<<std::endl;}

ClapTrap::~ClapTrap() {std::cout<<"clap trap destroyed"<<std::endl;}

void ClapTrap::attack(const std::string& target)
{
    if (m_Energy <= 0 || m_HitPoints <= 0)
    {
        std::cout<<m_Name<<"can not attack due to "       
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
    <<"hit points are now "<<m_HitPoints<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (m_Energy <= 0 || m_HitPoints <= 0)
    {
        std::cout<<m_Name<<"can not repair due to "
            <<((m_HitPoints <= 0) ? "too dead" : "energy too low")<<std::endl;
        return ;
    }    
    m_HitPoints += 1;
    m_Energy -= 1;
    std::cout<<"clap trap repaired "<<amount<<"amount "<<"hit points now "<<m_HitPoints<<std::endl;
}