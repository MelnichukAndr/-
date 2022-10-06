// №1A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"
#include <conio.h>
int main()
{
	int sum, product, a, b;
	point FirstValue;
	FirstValue.print();
	FirstValue.foo(sum, product);
	cout << "sum = " << sum << "\nproduct = " << product << endl;
	cout << "\n";
	system("pause");
	do {
		system("cls");
		cout << "Enter x,y: ";
		cin >> a >> b;
		if (cin.fail()) {
			eror();
			continue;
		}
		FirstValue.setX(a);
		FirstValue.setY(b);
		FirstValue.print();
		FirstValue.foo(sum, product);
		cout << "sum = " << sum << "\nproduct = " << product << endl;
		cout << "\n";
		cout << "Enter x,y: ";
		cin >> a >> b;
		if (cin.fail()) {
			eror();
			continue;
		}
		point SecondValue(a, b);
		SecondValue.print();
		SecondValue.foo(sum, product);
		cout << "sum = " << sum << "\nproduct = " << product << endl;
		cout << "\n";
		point ThirdValue(FirstValue);
		ThirdValue.print();
		ThirdValue.foo(sum, product);
		cout << "sum = " << sum << "\nproduct = " << product << endl;
		cout << "Press any key to continue . . .\n";
		puts("Press 'esc' to exit . . .");

	} while (_getch() != 27);
}