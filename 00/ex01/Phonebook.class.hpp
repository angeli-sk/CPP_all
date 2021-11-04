/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:23:56 by akramp        #+#    #+#                 */
/*   Updated: 2020/07/28 14:06:56 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string> 
# include <iomanip> 

class Phonebook 
{
    public:
        Phonebook ( void );
        ~Phonebook ( void );

        std::string case_switch( int n ) const;
        std::string get_info( int n ) const; 
        void        set_info( std::string input, int n );
        
    
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _login;
        std::string _postaladdress;
        std::string _emailaddress;
        std::string _phonenumber;
        std::string _birthdaydate;
        std::string _favoritemeal;
        std::string _underwearcolor;
        std::string _darkestsecret;
};

#endif