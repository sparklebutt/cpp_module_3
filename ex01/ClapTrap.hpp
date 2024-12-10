/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:26 by araveala          #+#    #+#             */
/*   Updated: 2024/12/10 15:54:33 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string m_Name;
        int m_HitPoints = 10;
        int m_Energy = 10;
        int m_Attack = 0;
    public:
        ClapTrap();
        ClapTrap(std::string Name);

        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};