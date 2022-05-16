// MidtermPracticalCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{

	std::string number;
	//QUESTION 1
	std::cout << "How much is 2 + 2 ?\na-3\nb-5\nc-4\nchoice: ";
	std::cin >> number;
	if (number == "c" || number == "4")
	{
		std::cout << "Correct!\n";
	}
	else
	{
		std::cout << "Wrong! at least you have 3 more.\n";
	}

	//QUESTION 2
	std::cout << "How much is 3 x 3?\na-6\nb-9\nc-3\nchoice: ";
	std::cin >> number;
	

	if (number == "b" || number == "9")
	{
		std::cout << "Correct!\n";
	}
	else
	{
		std::cout << "Wrong! at least you have 2 more.\n";
	}

	//QUESTION 3
	std::cout << "How much is 6 / 2?\na-3\nb-2\nc-6\nchoice: ";
	std::cin >> number;
	if (number == "a" || number == "3")
	{
		std::cout << "Correct!\n";
	}
	else
	{
		std::cout << "Wrong! bruh I hope you can get the last one.\n";
	}

	//QUESTION 4
	std::cout << "How much is 4 x 4 / 4?\na-16\nb-4\nc-1\nchoice:  ";
	std::cin >> number;
	
	if (number == "b" || number == "4")
	{
		std::cout << "Correct!";
	}
	else
	{
		std::cout << "Good luck nect time!";
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
