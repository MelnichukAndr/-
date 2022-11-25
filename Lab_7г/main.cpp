#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#define N 3
using namespace std;
class table {
	int year=0;
	string scieniser="";
	int diameter=0;
	int frequency=0;

public:
	void Set(int year, string scieniser, int diameter, int frequency) {
		this->year = year;
		this->scieniser = scieniser;
		this->diameter = diameter;
		this->frequency = frequency;
	}
	void Get(int& year, string& scieniser, int& diameter, int& frequency) {
		year = this->year;
		scieniser = this->scieniser;
		diameter = this->diameter;
		frequency = this->frequency;
	}
	void Show() {
		cout << "--------------------------------------------------------------\n";
		cout << "Year = " << year << "\tscieniser = " << scieniser << "\tDiameter = " << diameter << "\tFrequency = " << frequency << "\n";
		cout << "--------------------------------------------------------------\n";
	}
};
class Funcs {
private:
	table* Mass;
	int count;
public:
	Funcs() {
		Mass = new table[0];
		count = 0;
	}
	table Set_table(int n) {
		return Mass[n];
	}
	void Rand(int n) {
		Mass = new table[n];
		string temp[] = {"Robert", "Pol", "Franc","Ivan", "Hennadiy", "Lorenso", "Karl", "Mishel", "Artem", "Lion", "Dante"};
		for (int i = 0; i < n; i++) {
			Mass[i].Set(rand() % 2000, temp[rand() % 11], rand() % 100, rand() % 100);
		}
		count = n;
	}
	void Yavno() {
		Mass = new table[N];
		count = N;
		Mass[0].Set(1995, "Robert", 25, 156);
		Mass[1].Set(1935, "Franc", 55, 19);
		Mass[2].Set(1925, "Lorenso", 75, 34);
	}
	void Show_Mass() {
		for (int i = 0; i < count; i++) {
			cout << endl << "[" << i + 1 << "]" << endl;
			Mass[i].Show();
		}
	}
	void writeToFile(string filename, table data) {
		string FName = filename + ".txt";
		ofstream out(FName);
		int a, b, c;
		string d;
		data.Get(a, d, b, c);
		out << a << " " << d << " " << b << " " << c << endl;
		out.close();
		cout << "������ ������� � ���� - " << FName << endl;
	}
	table readFromFile(string filename) {
		string FName = filename+".txt";
		ifstream in(FName);
		table temp;
		int a, b, c;
		string d;
		in >> a >> d >> b >> c;
		temp.Set(a, d, b, c);
		in.close();
		cout << "������ ������������ �� ����� - " << FName << endl;
		return temp;
	}
	void Add(table temp) {
		table* T = new table[count + 1];
		for (int i = 0; i < count; i++) {
			T[i] = Mass[i];
		}
		T[count] = temp;
		Mass = T;
		count++;
	}
	void writeToFileMass(string filename) {
		string FName = filename + ".txt";
		ofstream out(FName);
		int a, b, c;
		string d;
		for (int i = 0; i < count; i++) {
			Mass[i].Get(a, d, b, c);
			if (i != count - 1) {
				out << a << " " << d << " " << b << " " << c << endl;
			}
			else {
				out << a << " " << d << " " << b << " " << c ;
			}
		}
		out.close();
		cout << "������ ������� � ���� - " << FName << endl;
	}
	void readFromFileMass(string filename) {
		string FName = filename + ".txt";
		ifstream in(FName);
		table temp;
		int a, b, c;
		string dddd;
		count = 0;
		while (!in.eof()) {
			in >> a;
			in >> dddd;
			in >> b;
			in>> c;
			temp.Set(a, dddd, b, c);
			Add(temp);
		}
		in.close();
		cout << "������ ������ �� ����� - " << FName << endl;
	}
};
int main() {

	setlocale(LC_ALL, "RUSSIAN");
	Funcs Mass1;
	Funcs Mass2;
	cout << "�������� ������." << endl;
	cout << "1. ��������." << endl;
	cout << "2. ����." << endl;
	int M = 0;
	int n = 0;
M1:
	cin >> M;
	switch (M)
	{
	case 1:
		cout << "������� ���������� ��������� - ";
		cin >> n;
		Mass1.Rand(n);
		Mass1.Show_Mass();
		system("pause");
		break;
	case 2:
		Mass1.Yavno();
		Mass1.Show_Mass();
		system("pause");
		break;
	default:
		cout << "�������� ����.." << endl;
		system("pause");
		goto M1;
		break;
	}
	string name;
	int num;
	table temp;
M2:
	system("cls");
	cout << "1. ���������� ������ ������� � ����."<<endl;
	cout << "2. ���������� ������� � �����."<<endl;
	cout << "3. ������ ������� �������� � ����."<<endl;
	cout << "4. ���������� ������� � �����." << endl;
	cin >> M;
	switch (M){
	case 1:
		cout << "1. ���������� ������ ������� � ����." << endl;
		cout << "������� �������� ����� - ";
		cin >> name;
		cout << endl << "������� ����� �������� - ";
		cin >> num;
		temp = Mass1.Set_table(num);
		Mass1.writeToFile(name, temp);
		system("pause");
		goto M2;
		break;
	case 2:

		cout << "2. ���������� ������� � �����." << endl;
		cout << "������� �������� ����� - ";
		cin >> name;
		temp = Mass1.readFromFile(name);
		cout << "��������� ������:" << endl;
		temp.Show();
		system("pause");
		goto M2;
		break;
	case 3:
		cout << "3. ������ ������� �������� � ����." << endl;
		cout << "������� �������� ����� - ";
		cin >> name;
		Mass1.writeToFileMass(name);
		system("pause");
		goto M2;
		break;
	case 4:
		cout << "4. ���������� ������� � �����." << endl;
		cout << "������� �������� ����� - ";
		cin >> name;
		Mass2.readFromFileMass(name);
		cout << "��������� ������:"<<endl;
		Mass2.Show_Mass();
		system("pause");
		goto M2;
		break;
	default:
		cout << "�������� ��������.." << endl;
		system("pause");
		goto M2;
		break;
	}
}