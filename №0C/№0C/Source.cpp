#include "Header.h"
SUM::SUM(const int& x, const int& y) {  
	this->x = x;
	this->y = y;
	this->sum = 0;
}; /* конструктори з параметром і за умовчання*/
void SUM::setX(const int& x) { this->x = x; };/* функція ініціалізації x,у*/
void SUM::setY(const int& y) { this->y = y; }/*функція ініціалізації x, y*/
void SUM::PrintAllValues() { cout << "x   = " << x << "\n" << "y   = " << y << "\n" << "sum = " << sum << "\n\n"; }/*функція виведення всіх змінних клас*/
void SUM::CalculateSum() { sum = x + y; } /*функція підрахунку суми*/
void eror()
{
    cout << "Eror, try one more time\n";
    cin.clear();
    cin.ignore(32767, '\n');
    system("pause");
    system("cls");

};