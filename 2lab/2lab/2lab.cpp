#include "Header.h"

int main() {
	int year;
	string scieniser;
	int diameter;
	int frequency;
	int a, n = 0, i, j, f = 0;
	Table* tables = new Table;
	do {
		cout << "Enter new elements - 1\nOutput all elements - 2\nPlus elements by id - 3\nAssign by id - 4\nCompare by id -5\n";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			cout << "How many add >";
			cin >> n;
			tables = new Table[n];
			for (int i = 0; i < n; i++)
			{
				cin >> tables[i];
			}
			f = 1;
			break;
		case 2:
			if (f == 1) {
				for (int i = 0; i < n; i++)
				{
					cout << tables[i];
				}
			}
			else {
				cout << "Array is empty\n\n";
			}
			break;
		case 3:
			for (int i = 0; i < n; i++)
				cout << tables[i];
			cout << "Which elements to add +(enter 2 id) > ";
			cin >> i >> j;
			if (i > (n - 1) && j > (n - 1)) {
				cout << "Eror invalid nums\n\n";
				break;
			}
			if (i > 0 && j > 0 && f == 1)
			{
				Table* tables2 = new Table[n + 1];
				for (int i = 0; i < n; i++)
					tables2[i] = tables[i];

				n += 1;
				tables2[n - 1] = tables[i - 1] + tables[j - 1];

				tables = new Table[n];
				for (int i = 0; i < n; i++)
					tables[i] = tables2[i];

				for (int i = 0; i < n; i++)
					cout << tables[i];
			}
			else {
				cout << "Array is empty\n\n";
			}
			break;
		case 4:
			for (int i = 0; i < n; i++)
				cout << tables[i];
			cout << "Which elements to assign =(enter 2 id) > ";
			cin >> i >> j;
			if (i > (n - 1) && j > (n - 1)) {
				cout << "Eror invalid nums\n\n";
				break;
			}
			if (i > 0 && j > 0 && f == 1)
			{
				tables[i - 1] = tables[j - 1];
				for (int i = 0; i < n; i++)
					cout << tables[i];
			}
			else {
				cout << "Array is empty\n\n";
			}
			break;
		case 5:
			for (int i = 0; i < n; i++)
				cout << tables[i];
			cout << "Which elements to compare ==(enter 2 id) > ";
			cin >> i >> j;
			if (i > (n - 1) && j > (n - 1)) {
				cout << "Eror invalid nums\n\n";
				break;
			}
			if (i > 0 && j > 0 && f == 1) {
				if (tables[i - 1] == tables[j - 1])
					cout << tables[i - 1] << "\n\t\t\t=\n\n" << tables[j - 1] << "\n";
				else
					cout << tables[i - 1] << "\n\t\t\t!=\n\n" << tables[j - 1] << "\n";
			}
			else {
				cout << "Array is empty\n\n";
			}
			break;
		}
	} while (_getch() != 27);

}