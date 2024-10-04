/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:35:48 by timo              #+#    #+#             */
/*   Updated: 2024/10/04 12:23:10 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

class	Harl {
	public:
		Harl();
		void complain( std::string level );
		~Harl();
	private:
		void debug( void );	
		void info( void );
		void warning( void );
		void error( void );
};