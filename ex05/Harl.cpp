/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:02:44 by timo              #+#    #+#             */
/*   Updated: 2024/10/04 12:34:35 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

void Harl::complain( std::string level )
{
	void	(Harl::*complain_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
			return((this->*complain_ptr[i])());
	}
}

void	Harl::debug( void )
{
	std::cout << "Harl complains on: \e[32mdebug level\e[0m" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "Harl complains on: \e[33minfo level\e[0m" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "Harl complains on: \e[35mwarning level\e[0m" << std::endl;
}	

void	Harl::error( void )
{
	std::cout << "Harl complains on: \e[31merror level\e[0m" << std::endl;
}	

Harl::~Harl()
{}