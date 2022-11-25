#include "iostream"
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;


int main() {
	setlocale(LC_ALL, "RUSSIAN");
	const char* FName = "Bin.txt";       
	ofstream out(FName, ios::binary);
	int x = 0;
	int n = 10;
	int* mass = new int[10];
	cout << "Введите 10 чисел в бинарный файл." << endl;
	for (int i = 0; i < 10; i++) {
		cin >> x;
		out.write((char*)&x, sizeof(x));
	}
	out.close();
	system("cls");
	cout << "Данный из файла: " << endl;
	ifstream in(FName, ios::binary);
	for (int i = 0; i < 10; i++) {
		in.read((char*)&x, sizeof(x));
		mass[i] = x;
		cout << "[" << mass[i] << "] ";
	}
	in.close();
	out.open(FName, ios::binary);
	if (mass[4] % 2 == 0) {
		for (int i = 0; i < 4; i++)
			mass[i] = 77;
	}
	else {
		for (int i = 5; i < 10; i++)
			mass[i] = 88;
	}
	for (int i = 0; i < 10; i++)
		out.write((char*)&mass[i], sizeof(x));
	cout << endl << "Данные после изменения: " << endl;
	out.close();
	in.open(FName, ios::binary);
	for (int i = 0; i < 10; i++) {
		in.read((char*)&x, sizeof(x));
		mass[i] = x;
		cout << "[" << mass[i] << "] ";
	}
	in.close();
	_getch();
	return 0;
}