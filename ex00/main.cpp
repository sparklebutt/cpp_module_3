/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:29 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 10:29:07 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief we call default constructor to show that it is implemented
 *  and parametered constructor to create our object we intend to use "steve".
 *  
 * 	We call copy constructor to show it is implemented although there is no use 
 * 	for our copy of steve yet.
 * 
 * @return int 
 */


int main()
{
	ClapTrap un_named = ClapTrap();
    ClapTrap steve = ClapTrap("steve");
	steve.ShowValues();
	ClapTrap bob = steve;
	std::cout<<"values for copy of steve "<<std::endl;
	bob.ShowValues();
    steve.attack("bob");
    steve.takeDamage(10);
    steve.beRepaired(1);
    steve.attack("bob");
    return 0;
    
}