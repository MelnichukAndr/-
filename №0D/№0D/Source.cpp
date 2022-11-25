#include "Header.h"
Timer::Timer(const int& sec) /*ініціалізація змінної за допомогою цілого числа(кількості секунд*/
{
	this->sec = sec;

	cout << "constructor " << this << endl;

}
Timer::Timer(const int& sec, const int& min)  /*за допомогою двох цілих змінних(кількість хвилин і секунд*/
{
	this->sec = sec + min * 60;
	cout << "constructor " << this << endl;
}

Timer::Timer(const Timer& other)  /*конструктор копіювання*/
{
	this->sec = other.sec;
	cout << "constructor " << this << endl;
}
void Timer::print() {
	cout << "sec = " << sec << endl;
}
void eror()
{
	cout << "Eror, try one more time\n";
	cin.clear();
	cin.ignore(32767, '\n');
	system("pause");
	system("cls");

};