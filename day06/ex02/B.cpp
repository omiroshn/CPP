/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 23:28:38 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/11 23:28:41 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() {

}

B::B(const B &cpy) {
	(void)cpy;
}

B& B::operator=(const B &cpy) {
	(void)cpy;
	return (*this);
}

B::~B() {

}
