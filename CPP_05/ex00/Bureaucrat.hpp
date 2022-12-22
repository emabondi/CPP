#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>



class Bureaucrat{
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat();
		Bureaucrat(const Bureaucrat &Bureaucrat);
		Bureaucrat& operator = (const Bureaucrat& f);
		virtual ~Bureaucrat();
		const std::string getName() const;
		int getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

	private:
		const std::string _name;
		int	_grade;

};

std::ostream& operator<<(std::ostream& os, Bureaucrat const & an);

#endif