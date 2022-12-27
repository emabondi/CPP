#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
	public:
		Form* makeForm(std::string name_form, std::string target);
		Intern();
		Intern(const Intern &Intern);
		Intern& operator = (const Intern& f);
		virtual ~Intern();
		class InvalidNameException : public std::exception {
			const char *what() const throw();
		};

};

#endif