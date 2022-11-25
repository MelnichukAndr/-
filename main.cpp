#include "iostream"
#include <stdlib.h>
#include <conio.h>
using namespace std;


class B1 {
	int a;
public:
	B1() { };
	B1(int x) { a = x; }
	void show_B1() { 
		cout << "B1=  " << a << "\n"; }
};

class D1 : public B1 {
	int b;
public:
	D1(int x, int y) : B1(y) { b = x; };
	void show_D1() { 
		cout << "D1=  " << b << "\n"; 
		show_B1(); }
};

class D2 : private D1 {
	int c;
public:
	D2(int a, int x, int y) : D1(x,y) { c = a; };
	void show_D2() { cout << "D2=  " << c << "\n"; show_D1(); }
};

class B2 {
	int e;
public:
	B2() { };
	B2(int y) { e = y; }
	void show_B2() { cout << "B2=  " << e << "\n"; }
};

class D3 : private B2, public D2 {
	int d;
public:
	D3(int x, int y, int z, int i, int j) : B2(y), D2(z,i, j) { d = x; }
	void show_D3() { cout << "D3=  " << d << "\n"; show_B2(); show_D2(); }
};


int main() {
	setlocale(LC_ALL, "RUSSIAN");
	D3 temp(100, 200, 300, 400, 500);
	cout << "D3 temp(100,200,300,400,500);\n";
	cout << "\n—леду€ иерархии класса D3: \n";
	temp.show_D3();
	_getch();
	return 0;
}