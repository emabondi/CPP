#include <string>
#include <iostream>
#include <fstream>
int main(int argc, char *argv[])
{

	if (argc != 4){
		std::cout<< "Invalid number of arguments" << std::endl ;
		return (0);
	}
	else{
		std::fstream File;
		std::string buff = argv[1];
		File.open(buff, std::fstream::in);

		std::string	toFind = argv[2];
		std::string toReplace = argv[3];
		std::ofstream  newFile(buff.append(".replace"));
		std::size_t found;
		while (getline(File, buff))
		{
			while (true){
				found = buff.find(toFind);
				if (found != std::string::npos){
					buff.erase(found, toFind.length());
					buff.insert(found, toReplace);
				}
				else
					break ;
			}
			newFile << buff << std::endl;
		}
		File.close();
		newFile.close();
	}
}