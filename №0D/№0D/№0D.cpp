// №0D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"
#include <conio.h>

int main()
{
	int a, b;
	do {
		cout << "\nEnter sec:";
		cin >> a;
		if (cin.fail()) {

			eror();
			continue;
		}
		Timer FirstValue(a);
		cout << "Enter sec and min:";
		cin >> a >> b;
		if (cin.fail()) {

			eror();
			continue;
		}
		Timer SecondValue(a, b);
		Timer ThirdValue(FirstValue);
		FirstValue.print();
		SecondValue.print();
		ThirdValue.print();

		cout << "Press any key to continue . . .\n";
		puts("Press 'esc' to exit . . .");

	} while (_getch() != 27);
}
