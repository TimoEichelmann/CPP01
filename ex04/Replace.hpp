/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:52:49 by timo              #+#    #+#             */
/*   Updated: 2024/10/01 16:56:19 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Replace {
		
	public:
		Replace(char *file[]);
		find_occurence();
		substitution();
		~Replace();
	private:
		std::string 	s1;
		std::string 	s2;
		std::string 	read;
		std::ifstream	in;
}