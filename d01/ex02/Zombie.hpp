/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkachano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:55:22 by mkachano          #+#    #+#             */
/*   Updated: 2019/06/25 19:55:24 by mkachano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
    Zombie(std::string name, std::string type);
//    Zombie();
    ~Zombie();
    std::string	name() const;
    std::string	type() const;
    void		setType(std::string type);
    void		setName(std::string name);
    void		announce();

private:
    std::string	_name;
    std::string	_type;
};

#endif

