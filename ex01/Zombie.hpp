/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:44:45 by timo              #+#    #+#             */
/*   Updated: 2024/09/11 13:14:18 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <string>

class Zombie
{
	public:
		Zombie();
		void	announce(void);
		void	name_zombie(std::string name);
		~Zombie();
	private:
		std::string name;
};

#endif