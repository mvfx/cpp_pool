/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:49:07 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 19:49:08 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap {

public:
	ClapTrap(std::string name = "ANONYMOUS");

	~ClapTrap();

	ClapTrap& operator = (const ClapTrap& inst);

	std::string		getName() const;
	void			setName(std::string name);

	unsigned int	getDamageArmorReduction() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getHitPoints() const;
	unsigned int	getLevel() const;
	unsigned int	getMaxEnergyPoints() const;
	unsigned int	getMaxHitPoints() const;
	unsigned int	getAttackDamageMelee() const;
	unsigned int	getAttackDamageRange() const;

	void 			rangedAttack(std::string const &target);
	void 			meleeAttack(std::string const &target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);

protected:
	std::string 			_name;
	unsigned int			_hitPoints;
	unsigned int			_maxHitPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	unsigned int			_attackDamageMelee;
	unsigned int			_attackDamageRange;
	unsigned int			_damageArmorReduction;
};

#endif