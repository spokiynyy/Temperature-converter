// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include <vector>


int main()
{
	double celsius, fahrenheit;
	int choise;

	std::cout << "Select a conversion method:\n";
	std::cout << "1.From Celsius to Fahrenheit\n";
	std::cout << "2. From Fahrenheit to Celsius:\n";
	std::cin >> choise;

	if (choise == 1)
	{
		std::cout << "Enter the temperature in degrees Celsius:";
		std::cin >> celsius;
		fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
		std::cout << "Temperature in degrees Fahrenheit:" << fahrenheit << std::endl;
	}
	else if (choise == 2)
	{
		std::cout << "Enter the temperature in degrees Fahrenheit:";
		std::cin >> fahrenheit;
		celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
		std::cout << "Temperature in degrees Celsius: " << celsius << std::endl;
	}
	else
	{
		std::cout << "error" << std::endl;
	}
	return 0;
}
