/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:42:48 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 16:40:44 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
private:
	const std::string&	_in_filename;
	const std::string&	_str1;
	const std::string&	_str2;
    std::string         _out_filename;
    
public:
	Sed(const std::string& in_filename, const std::string& str1, const std::string& str2);
	virtual ~Sed();
    int replace(void);
};

std::string str_join(const std::string& str1, const std::string& str2);
int	fill_file_content(std::string& file_content, const std::string& filename);
int	check_matching_str(std::string& content_str, int start_pos, const std::string& search_str);
int	replace_str1_with_str2_in_content_str(std::string& content_str, const std::string& str1, const std::string& str2);

#endif