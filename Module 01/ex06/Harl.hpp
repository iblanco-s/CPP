/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:39:18 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:39:19 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
# define HARL_HPP

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	public:
		void complain(std::string level);
};


#endif