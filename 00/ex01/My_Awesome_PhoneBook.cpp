/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   My_Awesome_PhoneBook.cpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 11:01:40 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/12 15:52:28 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

std::string        ft_to_upper(std::string command)
{
    for (int x = 0; command[x] != '\0'; x++)
    {
        if (command[x] >= 'a' && command[x] <= 'z')
            command[x] = command[x] - 32;
    }
    return (command);
}

int      add(int i, Phonebook *PB)
{
    std::string input;
	int x = 0;

    if (i > 7)
    {
        std::cout << "\033[38;5;75mThe limit is 8 contacts, lemao sorry not sorry. Try something else.\033[38;5;230m" << std::endl;
        return (i);
    }
    for (int n = 0; n < 11; n++)
    {
		x = 0;
        std::cout << "\033[38;5;75mPlease Enter your \033[38;5;208m" << PB[i].case_switch(n) << std::endl;
        std::getline(std::cin, input);
		for(int i = 0; i < (int)input.size(); i++)
		{
			if (!isprint(input[i]))
			{
				std::cout << "\033[38;5;75mWrong input, please try again" << std::endl;
				n--;
				x = 1;
				break;
			}
		}
		if (x == 1)
			continue;
        PB[i].set_info(input, n);
        std::cout << "\033[38;5;230m";
    }
    i++;
    return (i);
}

int        search(int i, Phonebook *PB)
{
    std::string str;
    int         num = 0;
    if (i == 0)
            std::cout << "\033[38;5;221mThere are no entries yet!" << std::endl;
    if (i > 0)
    {
        std::cout << "\033[38;5;230m☆.。.:*・°☆.。.:*・°☆.。.:*・°☆.。.:*・°☆。.☆" << std::endl;
        std::cout << std::setfill ('-') << std::setw (45) << "" << std::endl;
        std::cout << "|" << std::setfill (' ') << std::setw (10) << "index" << "|" << std::setfill (' ') << std::setw (10) << "frist name" << "|" << std::setfill (' ') << std::setw (10) << "last name" << "|" << std::setfill (' ') << std::setw (10) << "nickname" << "|" << std::endl;
        std::cout << std::setfill ('-') << std::setw (45) << "" << std::endl;
        for (int ii = 0; ii < i; ii++)
        {
            std::cout << "|" << std::setfill (' ') << std::setw (10) << (ii + 1);
            for (int n = 0; n < 3; n++)
            {
                str = PB[ii].get_info(n);
                if (std::char_traits<char>::length(str.c_str()) > 10)
                {
                    str = str.substr(0, 10);
                    str[9] = '.';
                }
                std::cout << "|" << std::setfill (' ') << std::setw (10) << str;
            }
            std::cout << "|" << std::endl;
        }
        std::cout << std::setfill ('-') << std::setw (45) << "" << std::endl;
        std::cout << "\033[38;5;230m☆.。.:*・°☆.。.:*・°☆.。.:*・°☆.。.:*・°☆。.☆" << std::endl;
        std::cout << "ꜱʜᴏᴡ ɪɴᴅᴇx >\t ";
        std::getline(std::cin, str);
        if (str.length() != 1)
        {
            std::cout << "Invalid number yo :00" << std::endl;
            return (i);
        }
        num = std::atoi(str.c_str());
        if (num > i || num < 1 || std::isdigit(num) != 0)
        {
            std::cout << "Invalid number yo :00" << std::endl;
            return (i);
        }
        for (int x = 0; x < 11; x++)
            std::cout << PB->case_switch (x) << "\t" << PB[num - 1].get_info(x) << std::endl;
    }
    return (i);
}

void	ft_exit()
{
		std::cout << "\033[38;5;230m☆.。.:*・°☆.。.:*・°☆.。.:*・°☆.。.:*・°☆\033[38;5;75m" << std::endl;
        std::cout << "\033[38;5;75mThank you for using \033[38;5;221mᴀɴɢɪ'ꜱ ᴘʜᴏɴᴇʙᴏᴏᴋ\033[38;5;75m ;P !" << std::endl;
        std::exit(0);
}

int       command_switch(std::string command, Phonebook *PB, int i)
{
    command = ft_to_upper(command);
    if (command == "ADD")
        i = add(i, PB);
    else if (command == "SEARCH")
        i = search(i, PB);
    else if (command == "EXIT")
        ft_exit();
    else
    {
        std::cout << "\033[38;5;221mᴛʜɪꜱ ᴘʀᴏɢʀᴀᴍ ɪꜱ ᴠᴇʀʏ ʟɪᴍɪᴛᴇᴅ!!" << std::endl;
        std::cout << "\033[38;5;75m(☞°ヮ°)☞\t\033[38;5;221mAdd\033[38;5;75m\t: To Enter new contact" << std::endl;
        std::cout << "ᕕ( ᐛ )ᕗ\t\t\033[38;5;221mSearch\033[38;5;75m\t: To find contents of the phonebook" << std::endl;
        std::cout << "((°ロ°) !\t\033[38;5;221mExit\033[38;5;75m\t: To exit lemao\033[38;5;230m" << std::endl;
	}
    return (i);
}

int main ()
{
    Phonebook PB[8];
    int i = 0;
    std::string command;

    std::cout << "\033[38;5;75mHeyoo welcome to \033[38;5;221mᴀɴɢɪ'ꜱ ᴘʜᴏɴᴇʙᴏᴏᴋ\033[38;5;75m :DD !!!" << std::endl;
    std::cout << "\033[38;5;230m☆.。.:*・°☆.。.:*・°☆.。.:*・°☆.。.:*・°☆\033[38;5;75m" << std::endl;
    std::cout << "\033[38;5;221mWhat would you like to do today?\033[38;5;75m" << std::endl; //𝒯𝓎𝓅𝑒 \033[38;5;208mʜᴇʟᴘ\033[38;5;75m 𝒻𝑜𝓇 𝓈𝓊𝑔𝑔𝑒𝓈𝓉𝒾𝑜𝓃𝓈\033[38;5;230m" << std::endl;
    std::cout << "\033[38;5;75m(☞°ヮ°)☞\t\033[38;5;221mAdd\033[38;5;75m\t: To Enter new contact" << std::endl;
    std::cout << "ᕕ( ᐛ )ᕗ\t\t\033[38;5;221mSearch\033[38;5;75m\t: To find contents of the phonebook" << std::endl;
    std::cout << "((°ロ°) !\t\033[38;5;221mExit\033[38;5;75m\t: To exit lemao\033[38;5;230m" << std::endl;
    while (1)
    {
		if (!(std::cin.good()))
			ft_exit();
        std::cout << "\033[38;5;230mᴛʏᴘᴇ ʜᴇʀᴇ >\t";
        std::getline(std::cin, command);
        i = command_switch(command, PB, i);
    }
    return 0;
}