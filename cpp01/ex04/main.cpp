#include "iostream"
#include "fstream"

bool findString(std::string *line, std::string s1, int *pos)
{
	int new_pos =  (*line).find(s1, *pos);
	*pos = new_pos;
	return new_pos == -1 ? false : true;
}

void replace_val(std::string *line, std::string s1, std::string s2)
{
	int index = 0;
	while(findString(line, s1, &index))
	{
		(*line).erase(index, s1.length());
		(*line).insert(index, s2);
	}
}

int main (int ac, char **av)
{
	if(ac != 4){
		std::cerr << "Number of parameter is different is more or less then 3"
		<< std::endl;
		return (0);
	}
	std::string fileName = av[1];
	std::string fileNameCpy = fileName + ".replace";
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream readFileName(fileName.c_str());
	std::ofstream writeFileNameCpy(fileNameCpy.c_str());
	if(!readFileName.is_open() || !writeFileNameCpy.is_open())
	{
		std::cerr << "Files is not open !" << std::endl;
		return (0);
	}
	std::string line;
	while(std::getline(readFileName, line))
	{
		replace_val(&line, s1, s2);
		writeFileNameCpy << line << std::endl;
	}
	readFileName.close();
	writeFileNameCpy.close();
}
