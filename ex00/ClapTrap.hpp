/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:26 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 10:38:28 by shaboom          ###   ########.fr       */
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
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
		void ShowValues() const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};