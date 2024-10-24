/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:24:42 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 22:57:49 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::_add(PhoneBook pb)
{
    std::string input[5];

    std::cout << "First name: ";
    std::getline(std::cin, input[0]);
    std::cout << "Last name: ";
    std::getline(std::cin, input[1]);
    std::cout << "Nickname: ";
    std::getline(std::cin, input[2]);
    std::cout << "Phone number: ";
    std::getline(std::cin, input[3]);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, input[4]);

    if (input[0].empty() || input[1].empty() || input[2].empty()
        || input[3].empty() ||input[4].empty())
        exit(1);
    pb.contacts[pb.get_oldest()].set_firstname(input[0]);
    pb.contacts[pb.get_oldest()].set_lastname(input[1]);
    pb.contacts[pb.get_oldest()].set_nickname(input[2]);
    pb.contacts[pb.get_oldest()].set_phonenumber(input[3]);
    pb.contacts[pb.get_oldest()].set_darketsecret(input[4]);
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
