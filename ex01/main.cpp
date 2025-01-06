/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:29 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 12:14:33 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap steve = ClapTrap("steve");
	steve.ShowValues();
    ScavTrap bob = ScavTrap("bob");
	bob.ShowValues();

    steve.attack("bob");
	bob.takeDamage(steve.getAttack());
	steve.beRepaired(10);
	steve.attack("bob");
	bob.takeDamage(steve.getAttack());
	
	bob.attack("steve");
	steve.takeDamage(bob.getAttack());
	steve.attack("bob");
	
	std::cout<<"setting bobs energy to 0, that fish was heavy"<<std::endl;
	bob.setEnergy(0);
	bob.beRepaired(1);

	bob.guardGate();
	ScavTrap test("test");
	test = bob;
	test.ShowValues();
    return 0;
    
}