/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:13:20 by timo              #+#    #+#             */
/*   Updated: 2024/09/13 18:08:42 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class	HumanA
{
	public:
		std::string	name;
		HumanA(std::string name, Weapon& w);
		void		attack();
		~HumanA(void);
	private:
		Weapon &weapon;
};

#endif