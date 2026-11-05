#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

int main(int argc, char** argv)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::string str1{};
	std::string str2{};
	int count{ 0 }, coun_prev{0};

	std::ifstream fin("in_utf8.txt");

	if (fin.is_open() == false)
	{
		return(1);
	}
	
	while (fin >> str1)
	{
		if (count == 0) 
		{
			count = atoi(str1.c_str());
			if (count == 0) 
			{
				return(1);
			}
			continue;
		}
		str2 += str1;
	}

	for (int i = (count-1); i>=0; i--)
	{
		std::cout << str2[i] << " " << std::flush;
	}




	return(0);
}

