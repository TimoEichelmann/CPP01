/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:52:49 by timo              #+#    #+#             */
/*   Updated: 2024/10/02 18:46:48 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>

class Replace {
		
	public:
		Replace();
		int 	replace(std::string file, std::string s1, std::string s2);
		int		openfile(const char *file);
		~Replace();
	private:
		std::string 	s1;
		std::string 	s2;
		std::string 	read;
		std::string		in;
};