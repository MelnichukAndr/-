#include <iostream>
#include <map>
using namespace std;

class Person {
public:
	string name;
	int age;

	Person() {
		name = "";
		age = 0;
	}
	Person(string name) {
		this->name = name;
		this->age = 0;
	}
	Person(int age) {
		this->name = "";
		this->age = age;
	}

	string get_name() {
		return name;
	}
	int get_age() {
		return age;
	}

	bool operator<(Person right) {
		return strcmp(name.c_str(), right.name.c_str()) < 0;
	}
	bool operator()(Person right) {
		return age < right.age;
	}
};

class Staff {
public:
	map<string, Person> m1;
	map<int, Person>m2;

	void insert(Person person) {
		m1.insert(make_pair(person.get_name(), person));
		m2.insert(make_pair(person.get_age(), person));
	}

	void printM1() {
		int i = 1;
		for (auto v : m1)
			cout << "Person " << i++ << "{ " << v.second.get_name() << ", " << v.second.get_age() << " }" << endl;
	}
	void printM2() {
		int i = 1;
		for (auto v : m2)
			cout << "Person " << i++ << "{ " << v.second.get_name() << ", " << v.second.get_age() << " }" << endl;
	}

	void printName() {
		for (auto v : m1)
			cout << v.first << endl;
	}
	void printAge() {
		for (auto v : m2)
			cout << v.first << endl;
	}

	void remove(string name) {
		Person p = m1[name];
		m1.erase(m1.find(p.get_name()));
		m2.erase(m2.find(p.get_age()));
	}

	void find(string name) {
		if (m1.find(name) == m1.end())
			cout << "Not found" << endl;
		else
			cout << "Person { " << m1[name].get_name() << ", " << m1[name].get_age() << " }" << endl;
	}
	void find(int age) {
		if (m2.find(age) == m2.end())
			cout << "Not found" << endl;
		else
			cout << "Person { " << m2[age].get_name() << ", " << m2[age].get_age() << " }" << endl;

	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	Staff staff;
reMenu:
	cout << "Меню" << endl;
	cout << "  1 - Вывести все значения с ключем по фамилии" << endl;
	cout << "  2 - Вывести все значения с ключем по возрасту" << endl;
	cout << "  3 - Вывести все фамилии" << endl;
	cout << "  4 - Вывести все возраста" << endl;
	cout << "  5 - Поиск по фамилии" << endl;
	cout << "  6 - Поиск по возрасту" << endl;
	cout << "  7 - Вставить значение" << endl;
	cout << "  8 - Удалить по фамилии" << endl;
	cout << "  0 - Выход" << endl;
	int menu;
	cin >> menu;
	switch (menu) {
	default:
		cout << "Ошибка: неправильное значение" << endl;
		goto reMenu;
	case 0:
		return 0;
	case 1:
		staff.printM1();
		break;
	case 2:
		staff.printM2();
		break;
	case 3:
		staff.printName();
		break;
	case 4:
		staff.printAge();
		break;
	case 5:
		cout << "Введите фамилию: ";
		cin >> s;
		staff.find(s);
		break;
	case 6:
		cout << "Введите возраст: ";
		cin >> menu;
		staff.find(menu);
		break;
	case 7: {
		Person p;
		cout << "Введите фамилию: ";
		cin >> p.name;
		cout << "Введите возраст: ";
		cin >> p.age;
		staff.insert(p);
		break;
	}
	case 8:
		cout << "Введите фамилию: ";
		cin >> s;
		staff.remove(s);
		break;
	}
	goto reMenu;
}
