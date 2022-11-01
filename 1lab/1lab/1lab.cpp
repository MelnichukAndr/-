#include <iostream>
#include <conio.h>
#define N 3
using namespace std;
class table {
	int year;
	string scieniser;
	int diameter;
	int frequency;
public:
	void Set(int year, string scieniser, int diameter, int frequency);
	void Get(int& year, string& scieniser, int& diameter, int& frequency);
	void Show();
};
void table::Set(int year, string scieniser, int diameter, int frequency) {
	this->year = year;
	this->scieniser = scieniser;
	this->diameter = diameter;
	this->frequency = frequency;
}
void table::Get(int& year, string& scieniser, int& diameter, int& frequency) {
	year = this->year ;
	scieniser = this->scieniser;
	diameter = this->diameter;
	frequency = this->frequency;
}
void table::Show() {
	cout << "--------------------------------------------------------------\n";
	cout << "Year = " << year << "\tscieniser = " << scieniser << "\tDiameter = " << diameter << "\tFrequency = " << frequency << "\n";
	cout << "--------------------------------------------------------------\n";
}
int main() {
	int year;
	string scieniser;
	int diameter;
	int frequency;

	table FirstObject[N];
	for (int i = 0; i < N; i++) {
		system("cls");
		cout << "Enter Thermal conductivity coefficients of materials\n";
		cin >> year;
		cin >> scieniser;
		cin >> diameter;
		cin >> frequency;
		FirstObject[i].Set(year, scieniser, diameter, frequency);
	}
	cout << "Set\n";
	for (int i = 0; i < N; i++)
		FirstObject[i].Show();

	cout << "\n\n\nGet\n";
	for (int i = 0; i < N; i++) {
		FirstObject[i].Get(year, scieniser, diameter, frequency);
		FirstObject[i].Show();
	}
}