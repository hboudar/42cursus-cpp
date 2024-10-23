/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:16:46 by hboudar           #+#    #+#             */
/*   Updated: 2024/10/23 18:57:52 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Contact {
    
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:

        // Setters :
        void    set_firstname(std::string str) { first_name = str; }
        void    set_lastname(std::string str) { last_name = str; }
        void    set_nickname(std::string str) { nickname = str; }
        void    set_phonenumber(std::string str) { phone_number = str; }
        void    set_darketsecret(std::string str) { darkest_secret = str; }

        // Getters :
        std::string get_firstname() { return (first_name); }
        std::string get_lastname() { return (last_name); }
        std::string get_nickname() { return (nickname); }
        std::string get_phonenumber() { return (phone_number); }
        std::string get_darkestsecret() { return (darkest_secret); }
};
