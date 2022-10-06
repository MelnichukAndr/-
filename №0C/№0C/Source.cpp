#include "Header.h"
SUM::SUM(const int& x, const int& y) {
	this->x = x;
	this->y = y;
	this->sum = 0;
};
void SUM::setX(const int& x) { this->x = x; };
void SUM::setY(const int& y) { this->y = y; }
void SUM::PrintAllValues() { cout << "x   = " << x << "\n" << "y   = " << y << "\n" << "sum = " << sum << "\n\n"; }
void SUM::CalculateSum() { sum = x + y; }
void eror()
{
    cout << "Eror, try one more time\n";
    cin.clear();
    cin.ignore(32767, '\n');
    system("pause");
    system("cls");

};