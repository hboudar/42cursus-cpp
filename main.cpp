/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:53:32 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/17 16:32:19 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

namespace first {

    int a = 1;
}

int main() {
    Test v;

    std::cout << first::a << std::endl;
    v.bar();
    v.foo = 42;
    std::cout << "foo :" << v.foo << std::endl;
    return (0);
}
 