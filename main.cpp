#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include "main.h"

using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1;
	cout << "Guess The Number by NightFrost#0001\n\n";

	do
	{
		cout << "Choose a number between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "\nToo high !\n\n";
			

		else if (guess < num)
			cout << "\nToo low !\n\n";
			Sleep(2000);

		if (guess > num)
			system("cls");

		else if (guess < num)
			system("cls");

		else
			cout << "\nGG ! You found it in " << tries << " tries !\n";
		
	} while (guess != num);
	Sleep(3000);
	return 0;
}