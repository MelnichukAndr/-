#include "iostream"
#include <stdlib.h>
#include <conio.h>
using namespace std;

/*�������� ���� BOOK (����� �����, �����, ������� �������),
	 �� � LIBRARY (����� ��������, ���� ��� �������� (� �� �), ������� ����������).
	� ������� ����:
					   � � � ������� ����� ������.
	�������� �������� ��������� � ����������� ��� ����������� ������ �� ����� ��.
	�������� ����� � 3-� ���� � ���������:
	� �� � ����� ������ (�� ����);
	� �� � ����� � �������� ��� "�� �����" (�� ���� ��� ��������);
	� ����������� ��������, ���� �������� ����� ����, � ���� �� ����� �������� (����� �������� ���� ��� �������� �� ������� ����������);
	� ����������� ��������, ���� ����� ���� ����� �����, ��� � � ��������, ��� �� ���������� "�� �����";
	� ����������� ��������, ���� ����� ���������� ��������� �����, ��� � � ��������, ���  ��� ��������� � ���� �������� (�� ������� ����������).
*/
class BOOK {
private:
	string book_title;
	string Aythor;
	int page_count;
public:
	BOOK() {
		book_title = "";
		Aythor = "";
		page_count = 0;
	}
	BOOK(string b, string a, int p) {
		book_title = b;
		Aythor = a;
		page_count = p;
	}
	void set_book_title(string b) {
		book_title = b;
	}
	void set_Aythor(string a) {
		Aythor = a;
	}
	void set_page_count(int p) {
		page_count = p;
	}
	string get_book_title() {
		return book_title;
	}
	string get_Aythor() {
		return Aythor;
	}
	int get_page_count() {
		return page_count;
	}
	void show_BOOK() {
		cout << "�������� ����� - " << book_title << endl;
		cout << "����� - " << Aythor << endl;
		cout << "���������� ������� - " << page_count << endl;
	}
};
class LIBRARY : public BOOK {
private:
	int Num;
	bool label;
	int count;
public:
	LIBRARY() : BOOK() {
		Num = 0;
		label = false;
		count = 0;
	}
	LIBRARY(int Num ,bool label ,int count, string b, string a, int p) : BOOK(b,a,p) {
		this->Num = Num;
		this->label = label;
		this->count = count;
	}
	void set_Num(int n) {
		Num = n;
	}
	void set_label(int l) {
		label = l;
	}
	void set_count(int c) {
		count = c;
	}
	int get_Num() {
		return Num ;
	}
	bool set_label() {
		return label;
	}
	int set_count() {
		return count;
	}
	void show_LIBRARY() {
		show_BOOK();
		cout << "����� �������� - " << Num << endl;
		cout << "��������� ����� - " << (label ? "����" : "���") << endl;
		cout << "���������� ����������� - " << count << endl;
	}

};
int Search_Book(int n, LIBRARY* Mass, string name) {
	int num = -1;
	for (int i = 0; i < n; i++) {
		if (Mass[i].get_book_title() == name) {
			num = i;
			break;
		}
	}
	return num;
}
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n = 3;
	LIBRARY* Mass = new LIBRARY[n];
	Mass[0] = LIBRARY(235, true, 4, "Rut", "Roberto", 564);
	Mass[1] = LIBRARY(534, true, 10, "Polina", "Amelia", 654);
	Mass[2] = LIBRARY(235, false, 0, "Badilo", "Ivan", 1234);
	for (int i = 0; i < n; i++) {
		cout << " [" << i+1<< "] " << endl;
		Mass[i].show_LIBRARY();
	}
	string temp;
	cout << endl<<"������� �������� ����� ��� ������ - ";
	cin >>temp;
	if (Search_Book(n, Mass, temp) == -1) {
		cout << "����� ����� ���.." << endl;
	}
	else {
		cout << "������ ����� ����!" << endl << "���������� ����������� - " << Mass[Search_Book(n, Mass, temp)].set_count() << endl<<endl;
	}

	cout << "---------------------------------------------------------------" << endl;
	cout << "�������� 1." << endl;
	cout << " [1] " << endl;
	Mass[0].show_LIBRARY();
	Mass[0].set_count(0);
	Mass[0].set_label(false);
	cout << "\n����� ���� ��� ����� ��������:" << endl;
	cout << " [1] " << endl;
	Mass[0].show_LIBRARY();
	cout << "---------------------------------------------------------------" << endl;
	cout << "\n�������� 2." << endl;
	cout << "�������� ����� ����� ����� Badilo." << endl<<"����� ����� �� ��������.."<<endl;
	if (Search_Book(n, Mass, "Badilo") == -1) {
		cout << "����� ����� ���.." << endl;
	}
	else {
		cout << "������ ����� ����!" << endl << "���������� ����������� - " << Mass[2].set_count() << endl << endl;
	}
	cout << "---------------------------------------------------------------" << endl;
	cout << "\n�������� 3." << endl;
	cout << "�������� �������� ������� ����� Polina." << endl;
	cout << "���������� ����������� � ���������� - " << Mass[1].set_count() << ". ��� ���������� �� �����, ������ ����� �� ������ ����������..." << endl;
	_getch();
	return 0;
}