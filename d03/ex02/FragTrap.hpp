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

#include "ClapTrap.hpp"

#include <iostream>

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap& src);
	FragTrap(std::string name);

    ~FragTrap();

    void 			rangedAttack(std::string const &target);
    void 			meleeAttack(std::string const &target);

	void 			vaulthunter_dot_exe(const std::string& target);

private:
	void	_init(std::string name);

};


#endif
