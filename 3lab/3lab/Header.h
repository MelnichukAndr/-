#pragma once
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class B1 {
protected: int b;
public:
	B1(int x) :b(x) {}
	virtual void show() { cout << "B1 = " << b << endl; }
	virtual ~B1() {}
};
class D1 : virtual public B1 {
protected: int d1;
public:
	D1(int x, int y) :B1(x), d1(y) {}
	virtual void show() { cout << "B1 = " << b << " D1 = " << d1 << endl; }
	virtual ~D1() {}
};
class D2 : virtual private D1 {
protected: int d2;
public:
	D2(int x, int y, int i) :B1(x), D1(x,y), d2(i) {}
	virtual void show() {
		cout << "B1 = " << b << " D1 = " << d1;
		cout << " D2 = " << d2 << endl;
	}
	virtual ~D2() {}
};
class D3 :virtual public D2 {
protected: int d3;
public:
	D3(int x, int y, int i, int j) :B1(x), D1(x, y), D2(x,y,i), d3(j) {}
	virtual void show()override {
		cout << " D2 = " << d2;
		cout << " D3 = " << d3 << endl;
	}
	virtual ~D3() {}
};
//class B2 :virtual private D3 {
//protected: int d4;
//public:
//	B2(int x, int y, int i, int j, int n) :  D3(x, y, i, j), d4(n) {}
//	virtual void show()override {
//		
//		cout << " D3 = " << d3 << " B2 = " << d4 << endl;
//		
//	}
//	virtual ~B2() {}
//};
