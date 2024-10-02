/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:56:34 by timo              #+#    #+#             */
/*   Updated: 2024/10/02 18:44:03 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{}

int	Replace::openfile(const char *file)
{
	std::ifstream temp(file);
	if (!temp || temp.bad())
	{
		std::cout << "bad file input" << std::endl;
		if (temp.bad())
			temp.close();
		return (1);
	}
	std::stringstream buffer;
	buffer << temp.rdbuf();
	temp.close();
	this->in = buffer.str();
	if (this->in == "\0")
	{
		std::cout << "empty file" << std::endl;
		return (1);
	}
	return (0);
}

int	Replace::replace(std::string file, std::string s1, std::string s2)
{
	if (this->openfile(file.c_str()) == 1)
		return (1);
	size_t pos = this->in.find(s1);
	while (pos != std::string::npos)
	{
		this->in.erase(pos, std::strlen(s1.c_str()));
		this->in.insert(pos, s2);
		pos = this->in.find(s1);
	}
	pos = file.find('.');
	if (pos != std::string::npos)
		file.erase(pos);
	file.append(".replace");
	std::ofstream out(file.c_str());
	out << this->in;
	out.close();
	return (0);
}

Replace::~Replace()
{}