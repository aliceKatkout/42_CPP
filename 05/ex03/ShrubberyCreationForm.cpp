/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avedrenn <avedrenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:59:20 by avedrenn          #+#    #+#             */
/*   Updated: 2023/10/25 11:40:51 by avedrenn         ###   ########.fr       */
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
	return (*this);
}

void	ShrubberyCreationForm::execConcrete() const {
	std::string const shrubName = (_target + "_shrubbery");
	std::ofstream outfile(shrubName.c_str());
	if (!outfile.is_open() || outfile.bad())
		return ;
	outfile <<
	"              * *\n"
	"           *    *  *\n"
	"      *  *    *     *  *\n"
	"     *     *    *  *    *\n"
	" * *   *    *    *    *   *\n"
	" *     *  *    * * .#  *   *\n"
	" *   *     * #.  .# *   *\n"
	"  *     \"#.  #: #\" * *    *\n"
	" *   * * \"#. ##\"       *\n"
	"   *       \"###\n"
	"             \"##\n"
	"              ##.\n"
	"              .##:\n"
	"              :###\n"
	"              ;###\n"
	"            ,####.\n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";


	if (outfile.bad())
	{
		outfile << std::endl;
		outfile.close();
	}
	outfile << std::endl;
	outfile.close();
}
