/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:08:34 by timo              #+#    #+#             */
/*   Updated: 2024/09/13 18:10:43 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class	HumanB
{
	public:
		Weapon *weapon;
		std::string	name;
		HumanB(std::string name);
		void		setWeapon(Weapon& w);
		void		attack();
		~HumanB();	
};

#endif