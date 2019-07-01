/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 18:49:02 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 18:49:06 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_init("ANONYMOUS SCAV");
}

ScavTrap::ScavTrap(std::string name)
{
	_init(name);
}

void ScavTrap::_init(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_attackDamageMelee = 20;
	_attackDamageRange = 15;
	_damageArmorReduction = 3;
	std::cout <<  "CREATED SC4V-TP ["<< _name << "]" << std::endl;
};

ScavTrap::~ScavTrap()
{
	std::cout << "DESTROYED SC4V-TP ["<< _name << "]" << std::endl;
};

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP [" << _name << "] attacks [" << target << "] "
			  << "at range, causing [" << _attackDamageRange
			  << "] points of damage !" << std::endl;
};

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP [" << _name << "] attacks [" << target << "] "
			  << "at melee, causing [" << _attackDamageMelee
			  << "] points of damage !" << std::endl;
};

void	ScavTrap::challengeNewcomer(const std::string& target)
{
	std::string act;
	std::string attacks[3] = {
			"RDN CHALLENGE 1",
			"RDN CHALLENGE 2",
			"RDN CHALLENGE 3"
	};
	if (_energyPoints >= 25) {
		_energyPoints -= 25;
		act = attacks[rand() % 3];

		std::cout << "SC4V-TP [" << _name << "] does "
				  << act << "to " << target << std::endl;
	} else {
		std::cout << "SC4V-TP [" << _name << "] HAS NO ENERGY"  << std::endl;
	}
}