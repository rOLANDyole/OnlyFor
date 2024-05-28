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
	#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::ifstream file;
	std::ifstream fill;
	std::string data;
	//int size;
	fill.open("Fie.txt");
	file.open("Documen.txt");

	if (fill.is_open() || file.is_open())
	{

	}



	
	file.close();
	fill.close();
	return 0;	/*std::string name = "";
	std::string age = "";
	std::string profession = "";
	std::string dumplings = "";
	std::string YAn = "";
	std::cout << "Как тебя зовут?";
	std::getline(std::cin, name);
	std::cout << "Сколько вам лет?";

	std::getline(std::cin, age);
	std::cout << "Кем хотите стать?";

	std::getline(std::cin, profession);
	std::cout << "Почему пельмени вкусные?";

	std::getline(std::cin, dumplings);
	std::cout << "Сколько стоит юань?";

	std::getline(std::cin, YAn);
	if (!file.is_open())
	{
		std::cerr << "\nError\n";
	}
	else
	{
		file << "Имя и Фамилия: " << name << "\n" << "Сколько лет: " << age << "\n" << "Кем хотите стать: " << profession << "\n" << "Почему пельмени вкусные" << dumplings << "\n" << " Сколько стоит юань: " << YAn;
	}*/
	std::string path = "Documen.txt";
	file.open(path);

	if (!file.is_open())
	{
		std::cerr << "Error";
	}
	else
	{
		//std::cout << "Helo";
		std::string data;
		while (!file.eof())
		{
			data = "";
			file >> data;
			std::getline(file, data);
			std::cout << data << "\n";
		}
	}
}
}
