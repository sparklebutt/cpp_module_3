/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaboom <shaboom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:29 by araveala          #+#    #+#             */
/*   Updated: 2025/01/06 17:22:52 by shaboom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/**
 * @brief running multiple tests to show work. Diamond trap creates a scavtrap and fragtrap sharing 1 claptrap
 * this leads to constructor carrying the parameter given to diamondtraps name as names for scav and frag trap,
 * however as neither have their own variable for name , as usually they have their own subobject of claptrap,
 * the destructor will show that scav/fragtrap "*"+"_clap_name" is being destroyed. 
 * 
 * @return int 
 */
int main()
{
	DiamondTrap wow = DiamondTrap("wow");
    wow.ShowValues();
	wow.whoAmI();
	wow.attack("ranodm stranger ");
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
	
	FragTrap grenade("grenade");
	grenade.ShowValues();
	grenade.attack("steve");
	steve.takeDamage(grenade.getAttack());
	grenade.highFivesGuys();	
	return 0;
}