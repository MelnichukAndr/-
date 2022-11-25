#pragma once
#include <string>
using namespace std;

class Name {
private:
	string name;

public:
	Name(string name) {
		this->name = name;
	}

	friend bool operator<(Name a, Name b);

	string get() {
		return this->name;
	}
};

bool operator<(Name a, Name b) {
	return strcmp(a.name.c_str(), b.name.c_str()) == -1;
}
