/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:34:29 by araveala          #+#    #+#             */
/*   Updated: 2024/12/10 16:11:53 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap steve = ClapTrap("steve");
    ScavTrap jay = ClapTrap("jay");
    steve.attack("bob");
    steve.takeDamage(10);
    steve.beRepaired(1);
    steve.attack("bob");
    return 0;
    
}