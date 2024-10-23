/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:19:31 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 12:30:22 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    Phonebook phonebook;

    int i;
    
    i = 0;
    while (i < 8)
    {
        phonebook.user[i].name = "yamal";
        phonebook.user[i].age = 17;
        phonebook.user[i].number = 456424546;
        i++;
    }
     
    return 0;
}