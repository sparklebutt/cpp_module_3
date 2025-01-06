/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:35 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 12:19:14 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

/**
 * @brief scav trap does not in theory need a copy constructor or operator overload
 * as they are inherited automatically from ClapTrap, should i want there to be different
 * behviours for those functions, i should then implement them here . 
 */
class ScavTrap : public ClapTrap
{
	protected:
		virtual void attackMessage(const std::string& victim) override;
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ~ScavTrap();
		void guardGate();
};