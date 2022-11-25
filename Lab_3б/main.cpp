#include "iostream"
#include <stdlib.h>
#include <conio.h>
using namespace std;

/*Створити клас BOOK (назва книги, автор, кількість сторінок),
	 ПК – LIBRARY (номер каталога, мітка про наявність (є чи ні), кількість екземплярів).
	У кожному класі:
					   – К и функція друку змінних.
	Здійснити передачу параметрів в конструктор для ініціалізації змінних БК через ПК.
	Створити масив з 3-х книг і перевірити:
	– чи є книга взагалі (по назві);
	– чи є книга в бібліотеці або "на руках" (по мітці про наявність);
	– змоделювати ситуацію, коли спочатку книга була, а потім її взяли почитати (тобто змінилася мітка про наявність та кількість екземплярів);
	– змоделювати ситуацію, коли читач хоче взяти книгу, яка є в бібліотеці, але всі екземпляри "на руках";
	– змоделювати ситуацію, коли читач намагається повернути книгу, яка є в бібліотеці, але  цей екземпляр з іншої бібліотеки (по кількості екземплярів).
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
		cout << "Название книги - " << book_title << endl;
		cout << "Автор - " << Aythor << endl;
		cout << "Количество страниц - " << page_count << endl;
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
		cout << "Номер каталога - " << Num << endl;
		cout << "Наявность книги - " << (label ? "есть" : "нет") << endl;
		cout << "Количество эксемпляров - " << count << endl;
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
	cout << endl<<"Введите название книги для поиска - ";
	cin >>temp;
	if (Search_Book(n, Mass, temp) == -1) {
		cout << "Такой книги нет.." << endl;
	}
	else {
		cout << "Данная книга есть!" << endl << "Количество экземпляров - " << Mass[Search_Book(n, Mass, temp)].set_count() << endl<<endl;
	}

	cout << "---------------------------------------------------------------" << endl;
	cout << "Ситуация 1." << endl;
	cout << " [1] " << endl;
	Mass[0].show_LIBRARY();
	Mass[0].set_count(0);
	Mass[0].set_label(false);
	cout << "\nПосле того как взяли почитать:" << endl;
	cout << " [1] " << endl;
	Mass[0].show_LIBRARY();
	cout << "---------------------------------------------------------------" << endl;
	cout << "\nСитуация 2." << endl;
	cout << "Читатель хочет взять книгу Badilo." << endl<<"Поиск книги по названию.."<<endl;
	if (Search_Book(n, Mass, "Badilo") == -1) {
		cout << "Такой книги нет.." << endl;
	}
	else {
		cout << "Данная книга есть!" << endl << "Количество экземпляров - " << Mass[2].set_count() << endl << endl;
	}
	cout << "---------------------------------------------------------------" << endl;
	cout << "\nСитуация 3." << endl;
	cout << "Читатель пытается вернуть книгу Polina." << endl;
	cout << "Количество эксемпляров в библиотеке - " << Mass[1].set_count() << ". Все эксемпляры на месте, данная книга из другой библиотеки..." << endl;
	_getch();
	return 0;
}