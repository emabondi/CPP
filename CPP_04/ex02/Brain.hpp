#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain &Brain);
		Brain& operator = (const Brain& f);
		std::string	getIdea(int i) const;
		void setIdea(std::string idea, int i);
		virtual ~Brain();

	private:
		std::string _ideas[100];
};

#endif