#pragma once

class Number {
private:
	int number;

public:
	Number(int number) {
		this->number = number;
	}

	int get() {
		return this->number;
	}
};
