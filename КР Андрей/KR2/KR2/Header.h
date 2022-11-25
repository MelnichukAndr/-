#pragma once


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>
#include <cmath>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>

class Person {
	std::string name;
	int age;
public:

	virtual void fill();
	Person();
	virtual void print(System::Windows::Forms::TextBox^ textBox);
	virtual std::string get_name() { return name; }
	
};

class Worker : virtual public Person {
	int salary;
	std::string post;
	int exp;

public:
	std::string get_post() { return post; }
	virtual void print(System::Windows::Forms::TextBox^ textBox);
	virtual void fill();
	Worker();
};
class Table  {
	int count;
	bool f;
	bool vip;
	int idx;
public:
	virtual void print(System::Windows::Forms::TextBox^ textBox);
	virtual void fill();
	void set_waiter(bool f) { this->f = f; }
	void set_count(){this->count = 1 + rand() % 3;}
	bool is_waiter() { return f; }
	bool is_vip(){ return vip; }
	int get_count() { return count; }
	int get_idx() { return idx; }
	Table(int& i);
};
class Waiter : public Worker {
	std::vector<Table> arr;
	
public:
	virtual void print(System::Windows::Forms::TextBox^ textBox);
	virtual void fill(std::vector<Table>& arr1);
	void print_arr(System::Windows::Forms::TextBox^ textBox);
	bool is_idx(int& idx);
	Waiter(std::vector<Table>& arr1);
	Waiter operator ()(Table&);
	Waiter operator -(int idx);
	int get_size() { return arr.size(); }
	Waiter();
};

