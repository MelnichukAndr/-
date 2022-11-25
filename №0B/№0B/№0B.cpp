// №0B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
class replaceValues
{
public:
	void link(int& x, int& y, int& z) /*Ссылки С++*/
	{
		float min, max, a, b, c;

		min = x;

		if (min > y)
			min = y;

		if (min > z)
			min = z;


		max = x;

		if (max < y)
			max = y;

		if (max < z)
			max = z;


		a = x;
		b = y;
		c = z;

		if (min == x)
			x = max;
		else  if (min == y)
			y = max;
		else  if (min == z)
			z = max;

		if (max == a)
			x = min;
		else  if (max == b)
			y = min;
		else  if (max == c)
			z = min;

	}

	void pointers(int* x, int* y, int* z)
	{
		float min, max, a, b, c;

		min = *x;

		if (min > *y)
			min = *y;

		if (min > *z)
			min = *z;


		max = *x;

		if (max < *y)
			max = *y;

		if (max < *z)
			max = *z;


		a = *x;
		b = *y;
		c = *z;

		if (min == *x)
			*x = max;
		else  if (min == *y)
			*y = max;
		else  if (min == *z)
			*z = max;

		if (max == a)
			*x = min;
		else  if (max == b)
			*y = min;
		else  if (max == c)
			*z = min;

	}
};
int main()
{
	replaceValues value;
	int x, y, z;
	do
	{
		system("cls");
		cout << "Enter x, y, z\n";
		cin >> x >> y >> z;
		if (cin.fail()) {
			cout << "Eror, try one more time\n";
			cin.clear();
			cin.ignore(32767, '\n');
			system("pause");
			system("cls");
			continue;
		}
		system("cls");
		cout << "Before swap:\nx = " << x << " y = " << y << " z = " << z << endl;
		value.pointers(&x, &y, &z);
		cout << "After swap by link:\nx = " << x << " y = " << y << " z = " << z << endl;
		cout << "Before swap:\nx = " << x << " y = " << y << " z = " << z << endl;
		value.link(x, y, z);
		cout << "After swap by pointers:\nx = " << x << " y = " << y << " z = " << z << endl;
		cout << "\n";
		cout << "Press any key to continue . . .\n";
		puts("Press 'esc' to exit . . .");
	} while (_getch() != 27);
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
