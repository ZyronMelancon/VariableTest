#include<iostream>
using namespace std;

char letterOne;
char letterTwo;
int letterNumBetween;
char letterBetween;

int calcLoop();

int main()
{
	char decide = 0;
	std::cout << "Welcome! This program will find the letter in between the two letters you input." << std::endl;
	system("pause");
	system("cls");
	while (true)
	{
		calcLoop();
		system("cls");
		std::cout << "Would you like to try another pair? Y/N" << std::endl;
		std::cin >> decide;
		if (decide == 89 || decide == 121)
			continue;
		else
			break;
	}

	return 0;
}

int calcLoop()
{
	system("cls");
	std::cout << "Input your first letter here: ";
	std::cin >> letterOne;
	std::cout << "Now, enter your second letter: ";
	std::cin >> letterTwo;
	if (letterOne <= 90 && letterOne >= 65 && letterTwo <= 90 && letterTwo >= 65)
	{
		letterNumBetween = (letterOne + letterTwo) / 2;
		letterBetween = letterNumBetween;
		std::cout << "The letter in between these two is: " << letterBetween << std::endl;
	}
	else if (letterOne <= 122 && letterOne >= 97 && letterTwo <= 122 && letterTwo >= 97)
	{
		letterNumBetween = (letterOne + letterTwo) / 2;
		letterBetween = letterNumBetween;
		std::cout << "The letter in between these two is: " << letterBetween << std::endl;
	}
	else
	{
		std::cout << "Please don't mix capital and lowercase letters!" << std::endl;
	}
	system("pause");
	return 0;
}