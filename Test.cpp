/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:38:09 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/17 12:19:54 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"


Test::Test(void) {
    std::cout << "Constructor called" << std::endl;
}

Test::~Test(void) {
    std::cout << "Destructor called" << std::endl;
}

void    Test::bar(void)
{
    std::cout << "the bar function is called" << std::endl;
}
