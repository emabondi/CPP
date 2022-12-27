#ifndef PPF_HPP
#define PPF_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class PPF : public Form{
	public:
		PPF(std::string target);
		void execute(Bureaucrat const & executor) const;
		~PPF();

	private:
		//PPF() {};
		//PPF(const PPF &PPF) {};
		//PPF& operator = (const PPF& f) {};

};

#endif