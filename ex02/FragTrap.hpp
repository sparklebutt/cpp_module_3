/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:28:48 by shaboom           #+#    #+#             */
/*   Updated: 2025/01/06 12:34:21 by shaboom          ###   ########.fr       */
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
class FragTrap : public ClapTrap
{
	protected:
		virtual void attackMessage(const std::string& victim) override;
    public:
        FragTrap();
        FragTrap(std::string Name);
        ~FragTrap();
		void highFivesGuys(void);
};