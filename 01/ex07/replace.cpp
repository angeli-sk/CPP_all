/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 17:35:55 by akramp        #+#    #+#                 */
/*   Updated: 2020/09/13 16:05:13 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string	set_filename(std::string filename)
{
	std::string filetype = ".replace";
	std::string newfilename = filename + filetype;
	return (newfilename);
}

void read_contents(std::string fname, std::string s1, std::string s2, std::string newfilename)
{
	int i = 0;
	std::string line;
	std::string newline;
	std::ifstream file (fname);
	std::ofstream outfile (newfilename);
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			while (line[i] != '\0' || i != (int)std::string::npos)
			{
				i = line.find(s1, i);
				if (i != (int)std::string::npos)
				{
					line.replace(i, s1.length(), s2);
					i = i + s2.length();
				}
				else
					break;
			}
			i = 0;
			outfile << line << std::endl;
		}
		outfile.close();
		file.close();
	}


}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Lemao not the right amount of arguments loser ;P" << std::endl;
		return (0);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (filename.empty() || s1.empty())
	{
		std::cout << "There's no input !! >;0" << std::endl;
		return (0);
	}
	std::string newfilename = set_filename(filename);
	read_contents(filename, s1, s2, newfilename);
	return (0);
}
