/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:44:31 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/04 20:44:34 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int		rawBits;
	static const int fractinalBits;
public:
	Fixed();
	Fixed(const int &num);
	Fixed(const float &num);
	Fixed(const Fixed& fixedCopy);
	~Fixed();

	Fixed& operator=(const Fixed& f);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream& os, const Fixed& f);

#endif
