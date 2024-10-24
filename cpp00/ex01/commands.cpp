/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:24:42 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/24 13:21:19 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::_add(PhoneBook &pb)
{
    std::string input[5];
    int         _oldest_contact;

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
    pb.set_oldest((get_oldest() + 1 ) % 8);
    _oldest_contact = pb.get_oldest();
    pb.contacts[_oldest_contact].set_firstname(input[0]);
    pb.contacts[_oldest_contact].set_lastname(input[1]);
    pb.contacts[_oldest_contact].set_nickname(input[2]);
    pb.contacts[_oldest_contact].set_phonenumber(input[3]);
    pb.contacts[_oldest_contact].set_darketsecret(input[4]);
}

void   PhoneBook::_search(PhoneBook &pb)
{
    std::string index;

    std::cout << "Index     " << "|"
              << "First Name" << "|"
              << "Last Name " << "|"
              << "Nickname  " << "|"
              << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::getline(std::cin, index);
    if (index < "0" || index > "7")
    {
        std::cout << "The index :" << index
                  << "is out of range [0 - 7]" << std::endl;
        return ;
    }
    pb.get_oldest();
}

void    PhoneBook::_exit(PhoneBook &pb)
{
    std::cout << "entered exit" << std::endl;
    (void)pb;
}
