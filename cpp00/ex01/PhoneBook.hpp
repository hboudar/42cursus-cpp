/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:13:03 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/24 12:54:07 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"
#include <iomanip>

class PhoneBook {

    private:
        Contact contacts[8];
        int     oldest_contact;
    public:
        void    _add(PhoneBook &phonebook);
        void    _exit(PhoneBook &phonebook);
        void    _search(PhoneBook &phonebook);
        void    set_oldest(int  next_oldest) {oldest_contact = next_oldest; }
        int     get_oldest() {return (oldest_contact); }
    private:
};
