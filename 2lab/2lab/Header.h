#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>          
using namespace std;

class Table {
	int year;
	string scieniser;
	int diameter;
	int frequency;
	friend ostream& operator<<(ostream& stream, Table& o1);
	friend istream& operator>>(istream& stream, Table& o1);
	friend Table operator + (const Table& ob1, const Table& ob2);
	friend bool operator == (const Table& ob1, const Table& ob2);
public:
	Table(const int& year = 0, const string& scieniser = "None", const int& diameter = 0, const int& frequency = 0);
	void Set(const int& year, const string& scieniser, const int& diameter, const int& frequency);
	void Get(int& year, string& scieniser, int& diameter, int& frequency);
	
	Table operator = (const Table& ob);
	
	int* operator[](const Table& ob);
	Table operator () (const int& year, const string& scieniser, const int& diameter, const int& frequency);
};