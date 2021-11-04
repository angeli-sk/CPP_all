/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:15:43 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/17 18:11:34 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void        Phonebook::set_info( std::string input, int n )
{
    switch (n)
    {
        case 0 :
        {
            this->_firstname= input;
            break;
        }
        case 1 :
        {
            this->_lastname= input;
            break;
        }
        case 2 :
        {
            this->_nickname= input;
            break;
        }
        case 3 :
        {
            this->_login= input;
            break;
        }
        case 4 :
        {
            this->_postaladdress= input;
            break;
        }
        case 5 :
        {
            this->_emailaddress= input;
            break;
        }
        case 6 :
        {
            this->_phonenumber= input;
            break;
        }
        case 7 :
        {
            this->_birthdaydate= input;
            break;
        }
        case 8 :
        {
            this->_favoritemeal= input;
            break;
        }
        case 9:
        {
            this->_underwearcolor= input;
            break;
        }
        case 10:
        {
            this->_darkestsecret= input;
            break;
        }
    }
}
std::string Phonebook::get_info( int n ) const
{
    switch (n)
    {
        case 0 :
            return (this->_firstname);
        case 1 :
            return (this->_lastname);
        case 2 :
            return (this->_nickname);
        case 3 :
            return (this->_login);
        case 4 :
            return (this->_postaladdress);
        case 5 :
            return (this->_emailaddress);
        case 6 :
            return (this->_phonenumber);
        case 7 :
            return (this->_birthdaydate);
        case 8 :
            return (this->_favoritemeal);
        case 9:
            return (this->_underwearcolor);
        case 10 :
            return (this->_darkestsecret);
        }
        return ("Invalid\n");
}

std::string    Phonebook::case_switch( int n ) const
{
    switch (n)
    {
        case 0 :
            return ("\033[38;5;208mfirst name:\t\033[38;5;221m");
        case 1 :
            return ("\033[38;5;208mlast name:\t\033[38;5;221m");
        case 2 :
            return ("\033[38;5;208mnickname:\t\033[38;5;221m");
        case 3 :
            return ("\033[38;5;208mlogin:\t\033[38;5;221m\t");
        case 4 :
            return ("\033[38;5;208mpostal address:\t\033[38;5;221m");
        case 5 :
            return ("\033[38;5;208memail address:\t\033[38;5;221m");
        case 6 :
            return ("\033[38;5;208mphone number:\t\033[38;5;221m");
        case 7 :
            return ("\033[38;5;208mbirthday date:\t\033[38;5;221m");
        case 8 :
            return ("\033[38;5;208mfavorite meal:\t\033[38;5;221m");
        case 9:
            return ("\033[38;5;208munderwear color:\033[38;5;221m");
        case 10 :
            return ("\033[38;5;208mdarkest secret:\t\033[38;5;221m");
        }
        return ("Invalid\n");
}