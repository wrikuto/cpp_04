#include "sed.hpp"

Sed::Sed(std::string filename)
:inFile_(filename)
{
	this->outFile_ = this->inFile_ + ".replace";
}


void	Sed::replace(std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	rdF;
	std::ofstream	outF;
	size_t			offset;

	rdF.open(this->inFile_);
	if (rdF.fail())
	{
		std::cerr << "ERR: Can\'t open file." << std::endl;
		exit(1);
	}
	if ( !(std::getline(rdF, line, '\0')) )
		std::cerr << "Empty file." << std::endl;
	else
	{
		outF.open(this->outFile_);
		if (outF.fail())
		{
			std::cerr << "out file fail!" << std::endl;
			exit(1);
		}
		offset = line.find(s1);
		while (offset != std::string::npos)
		{
			line.erase(offset, s1.length());
			line.insert(offset, s2);
			offset = line.find(s1, offset + s2.length());
		}
		outF << line;
		outF.close();
	}
	rdF.close();

}