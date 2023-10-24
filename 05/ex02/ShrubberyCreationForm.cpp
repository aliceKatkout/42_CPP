/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:20 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/24 18:34:17 by avedrenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("SCx", 145, 137), _target("nowhere") {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("SCx", 145, 137), _target(target) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	AForm(other), _target(other._target) {};

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	_target = other._target;
}

/* void	ShrubberyCreationForm::execConcrete() const {
	std::string const shrubName = (_target + "_shrubbery");
	std::ofstream outfile(shrubName, std::ios::out | std::ios::app);

	if (!outfile.is_open() || outfile.bad())
		throw TargetFileOpenException();
	int treeCount = (rand() % 6) + 1;
	for (int i = 0; i < treeCount; i++)
	{
		outfile << "               ,@@@@@@@,
       ,,,.   ,@@@@@@/@@,  .oo8888o.
    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o
   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'
   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'
   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'
   `&%\ ` /%&'    |.|        \ '|8'
       |o|        | |         | |
       |.|        | |         | |
	 \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_" << std:endl;


		if (outfile.bad())
		{
			outfile << std::endl;
			outfile.close();
			throw WriteException();
		}
	}
	outfile << std::endl;
	outfile.close();
}
 */