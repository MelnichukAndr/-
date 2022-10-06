﻿// №1B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"
int main()
{
	int a, b, c, k;
	do {
		system("cls");

		cout << "Calculate area: 1 - circle, 2 - triangle\n\n";
		cin >> k;

		if (cin.fail()) {
			eror();
			continue;
		}
		if (k == 1) {
			cout << "Enter a\n";
			cin >> a;
			if (cin.fail()) {
				eror();
				continue;
			}
			if (a > 0) {
				figure ob1(a);
				cout << "Area: " << ob1.CalculateArea() << "\n";
			}
			else {
				cout << "Circle with this parameter doesn`t exist";
				continue;
			}
		}
		if (k == 2) {
			cout << "Enter a, b, c\n";
			cin >> a >> b >> c;
			if (cin.fail()) {
				eror();
				continue;
			}
			if ((a + b) > c) {
				if ((a + c) > b) {
					if ((b + c) > a) {
						figure ob1(a, b, c);
						cout << "Area:" << ob1.CalculateArea() << "\n";
					}
				}
			}
			else {
				cout << "Triangle with these parameters doesn`t exist";
				continue;
			}
		}
		cout << "Press any key to continue . . .\n";
		puts("Press 'esc' to exit . . .");
	} while (_getch() != 27);
}