/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:43:45 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 16:47:58 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string& in_filename, const std::string& str1, const std::string& str2)
    : _in_filename(in_filename), _str1(str1), _str2(str2)
{
	this->_out_filename = str_join(in_filename, ".replace");
}

Sed::~Sed(void)
{
    
}

int Sed::replace(void)
{
	std::string in_file_content;
    
	if (fill_file_content(in_file_content, this->_in_filename) == 1)
		return (1);
	replace_str1_with_str2_in_content_str(in_file_content, this->_str1, this->_str2);
	std::ofstream outputFile(this->_out_filename.c_str());
	if (!outputFile)
		return (std::cerr << "Failed to create the file." << std::endl, 1);
	outputFile << in_file_content << std::endl;
	outputFile.close();
    return (0);
}

std::string str_join(const std::string& str1, const std::string& str2)
{
	std::string new_str;
	
	new_str.reserve(str1.length() + str2.length());
	new_str += str1;
	new_str += str2;
	return (new_str);
}

int	fill_file_content(std::string& file_content, const std::string& filename)
{
	std::string line;
	
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
		return (std::cout << "Failed to open file" << std::endl, 1);
	while (std::getline(inputFile, line))
		file_content += line + '\n';
	file_content.at(file_content.length() - 1) = '\0';
	inputFile.close();
	return (0);
}

int	check_matching_str(std::string& content_str, int start_pos, const std::string& search_str)
{
	std::string::size_type i = 0;

	while (i < search_str.length()) {
		if (content_str.at(i + start_pos) != search_str.at(i))
			return (0);
		i++;
	}
	return (1);
}

int	replace_str1_with_str2_in_content_str(std::string& content_str, const std::string& str1, const std::string& str2)
{
	std::string 			new_string;
	std::string::size_type	i;

	for (i = 0; i < content_str.length(); i++) {
		if (check_matching_str(content_str, i, str1) == 1) {
			new_string += str2;
			i += str1.length() - 1;
		} else {
			new_string += content_str.at(i);	
		}
	}
	content_str = new_string;
	return (0);
}
