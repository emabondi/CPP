#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>

std::map<std::string, float>	getData();
void	check_exchange(char *file, std::map<std::string, float> map);

#endif