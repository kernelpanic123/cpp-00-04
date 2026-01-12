#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error argument, valid expresion: <filename> <s1> <s2> !" << std::endl;
		return 1;
	}

	std::string file_name = argv[1];
	std::string outputfile = file_name + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(file_name.c_str());

	if (!infile.is_open())
	{
		std::cout << "Error: cant open file" << std::endl;
		return (1);
	}
	std::ofstream outfile(outputfile.c_str());
	std::string line;
	int pos;
	int length = s1.length();

	while (std::getline(infile, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.replace(pos, length, s2);
			pos = line.find(s1, pos + s2.length());
		}
		outfile << line << std::endl;
	}
	return 0;
}