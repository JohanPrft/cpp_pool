/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:16:09 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/25 10:16:09 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "../includes/File.hpp"

bool	checkFiles(std::ifstream& ifs, std::ofstream& ofs);
std::string	replace(std::string str, const std::string& toFind, const std::string& toReplace);

int	main(int ac, char** av){
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		infile, outfile, wholeFile , line;

	if (ac != 4)
		return (std::cerr << "Error, usage : ./sed <filename> <s1> <s2>" << std::endl, 1);
	infile = av[1];
	outfile = infile;
	outfile += ".outfile";
	ifs.open(infile.c_str());
	ofs.open(outfile.c_str());
	if (!checkFiles(ifs, ofs))
		return (1);
	while (getline(ifs, line))
		wholeFile += line += '\n';
	wholeFile = replace(wholeFile, av[2], av[3]);
	ofs << wholeFile;
	ifs.close();
	ofs.close();
	return (0);
}

std::string	replace(std::string str, const std::string& toFind, const std::string& toReplace)
{
	size_t pos = 0;
	size_t findLength = toFind.length();
	size_t replaceLength = toReplace.length();

	if(findLength == 0)
		return (str);
	while((pos = str.find(toFind, pos)) != std::string::npos) {
		str.erase(pos, findLength);
		str.insert(pos, toReplace);
		pos += replaceLength;
	}
	return (str);
}

bool	checkFiles(std::ifstream& ifs, std::ofstream& ofs)
{
	if (!ifs.is_open() || ifs.bad())
		return (std::cerr << "Error: " << strerror(errno) << std::endl, false);
	if (!ofs.is_open() || ofs.bad())
		return (std::cerr << "Error: " << strerror(errno) << std::endl, false);
	return (true);
}