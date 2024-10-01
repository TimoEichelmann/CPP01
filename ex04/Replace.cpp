/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:56:34 by timo              #+#    #+#             */
/*   Updated: 2024/10/01 16:59:20 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Replace::Replace(char *file[])
{
	this->in = std::ifstream temp(file);
}

Replace::find_occurence()
{
	
}

Replace::substitution()
{
	
}

Replace::~Replace()
{
	if (this->in)
		this->in.close();
}