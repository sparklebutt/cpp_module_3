/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:26 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 11:32:08 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

/**
 * @brief putting attackMessage into protected ensures that only claptrap or derived
 * classes may use this function
 *  decleration of attack message as virtual allows for function override
 *  
 * 
 */
class ClapTrap
{
    private:
        std::string m_Name;
        int m_HitPoints = 10;
        int m_Energy = 10;
        int m_Attack = 0;
	protected:
		virtual void attackMessage(const std::string& victim);
    public:
        ClapTrap();
        ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);

        ~ClapTrap();
       void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

		void setHitPoints(int value);
		void setEnergy(int value);
		void setAttack(int value);

		int getHitPoints(int value);
		int getEnergy(int value);
		int getAttack();
		void ShowValues() const;
		std::string getName();

};