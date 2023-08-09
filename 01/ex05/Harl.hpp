/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:52:25 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/09 17:08:20 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class   Harl 
{
    private:
        void    debug(void); 
        void    info(void); 
        void    warning(void); 
        void    error(void); 
    
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif