/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 12:21:24 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/28 12:21:26 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap {

public:
    FragTrap(std::string name = "ANONYMOUS");

    ~FragTrap();

	FragTrap& operator = (const FragTrap& inst);

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

	void 			vaulthunter_dot_exe(const std::string& target);

private:
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
