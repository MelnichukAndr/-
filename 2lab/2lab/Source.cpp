#include "Header.h"
Table::Table(const int& year, const string& scieniser, const int& diameter, const int& frequency)
{
	this->year = year;
	this->scieniser = scieniser;
	this->diameter = diameter;
	this->frequency = frequency;
}
void Table::Set(const int& year, const string& scieniser, const int& diameter, const int& frequency) {
	this->year = year;
	this->scieniser = scieniser;
	this->diameter = diameter;
	this->frequency = frequency;
}
void Table::Get(int& year, string& scieniser, int& diameter, int& frequency) {
	year = this->year;
	scieniser = this->scieniser;
	diameter = this->diameter;
	frequency = this->frequency;
}

ostream& operator<<(ostream& stream, Table& o1) {
	//o1.Show();
	cout << setw(10) << "Name " << setw(2) << "\tType " << setw(2) << "\tHumidity " << setw(10) << "Count " << "\n";
	stream << "|" << setw(10) << o1.year << "  |  ";
	stream << setw(5) << o1.scieniser << "|";
	stream << setw(11) << o1.diameter << "  |";
	stream << setw(4) << o1.frequency << "  |" << endl;
	cout << "-------------------------------------------\n";
	return stream;
}

istream& operator>>(istream& stream, Table& o1) {
	cout << "Name = " << "\tType = " << "\tHumidity = " << "\tCount = " << "\n";
	stream >> o1.year;
	stream >> o1.scieniser;
	stream >> o1.diameter;
	stream >> o1.frequency;
	return stream;
}

Table Table::operator = (const Table& ob) {
	year = ob.year;
	scieniser = ob.scieniser;
	diameter = ob.diameter;
	frequency = ob.frequency;
	return *this;
}

bool operator == (const Table& ob1, const Table& ob2) {
	return(ob1.year == ob2.year && ob1.scieniser == ob2.scieniser && ob1.diameter == ob2.diameter && ob1.frequency == ob2.frequency);
}
Table operator + (const Table& ob1, const Table& ob2) {
	Table temp;
	temp.year = ob1.year + '+' + ob2.year;
	temp.scieniser = ob1.scieniser + '+' + ob2.scieniser;
	temp.diameter = ob1.diameter + '+' + ob2.diameter;
	temp.frequency = ob1.frequency + ob2.frequency;
	return temp;
}
int* Table::operator[](const Table& ob) {
	int* mas = new int;

		mas = new int[2];
		mas[0] = ob.year;
		mas[1] = ob.diameter;
		return mas;


}
Table Table::operator () (const int& year, const string& scieniser, const int& diameter, const int& frequency) {
	this->year = year;
	this->scieniser = scieniser;
	this->diameter = diameter;
	this->frequency = frequency;
	return *this;
}