#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form(std::string const &name, const int grade_toSign, const int grade_toExec);
		Form();
		Form(const Form &Form);
		Form& operator = (const Form& f);
		virtual ~Form();
		virtual void execute(Bureaucrat const & executor) const = 0;
		const std::string getName() const;
		std::string getifSigned()const;
		int get_gradeToSign() const;
		int get_gradeToExec() const;
		void	beSigned(const Bureaucrat &f);

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

	private:
		const std::string 	_name;
		bool				_signed;
		const int			_grade_toSign;
		const int			_grade_toExec;

};

std::ostream& operator<<(std::ostream& os, Form const & an);

#endif