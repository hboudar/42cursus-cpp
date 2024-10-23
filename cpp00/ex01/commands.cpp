/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:24:42 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 18:57:20 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::_add(PhoneBook phonebook)
{
    std::cout << "entered add" << std::endl;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::getline(std::cin, first_name);
    std::getline(std::cin, last_name);
    std::getline(std::cin, nickname);
    std::getline(std::cin, phone_number);
    std::getline(std::cin, darkest_secret);

    (void)phonebook;
}

void   PhoneBook::_search(PhoneBook phonebook)
{
    std::cout << "entered search" << std::endl;
    (void)phonebook;
}

void    PhoneBook::_exit(PhoneBook phonebook)
{
    std::cout << "entered exit" << std::endl;
    (void)phonebook;
}
