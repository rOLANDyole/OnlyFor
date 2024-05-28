#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::ifstream file;
	std::string path = "Documen.txt";
	file.open(path);

	if (!file.is_open())
	{
		std::cerr << "Error";
	}
	else
	{
		//char sym;
		std::string data;
		while (file.eof())
		{
			file >> data;
			std::cout << data;
		}
	}

	file.close();
	return 0;
}