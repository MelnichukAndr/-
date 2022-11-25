#include "Name.h"
#include "Number.h"

#include <iostream>
#include <map>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Тестирование конструкторов и создание ассоциативного массива" << endl;
	map<Name, Number> book = map<Name, Number>{
		{Name("Alex"), Number(8800)},
		{Name("Zorro"), Number(7224)},
		{Name("Huawei"), Number(3880)},
		{Name("Xiaomi"), Number(4333)},
		{Name("Bruno"), Number(1447)},
	};

	cout << "Вывод всех элементов массива" << endl;
	for (std::map<Name, Number>::iterator it = book.begin(); it != book.end(); it++)
		cout << "  " << ((Name)(it->first)).get() << ": " << ((Number)(it->second)).get() << endl;
	cout << endl;


	cout << "Поиск записей по имени (Xiaomi)" << endl;
	Number n = book.at(Name("Xiaomi"));
	cout << "  " << "Xiaomi number: " << n.get() << endl;
	cout << endl;

	char ch = 'H';
	cout << "Вывод всех элементов массива, начинающихся на букву \"" << ch << "\"" << endl;
	for (std::map<Name, Number>::iterator it = book.begin(); it != book.end(); it++)
		if (((Name)it->first).get().c_str()[0] == ch)
			cout << "  " << ((Name)(it->first)).get() << ": " << ((Number)(it->second)).get() << endl;
	cout << endl;


	ch = 'Z';
	cout << "Удаление всех элементов массива, начинающихся на букву \"" << ch << "\"" << endl;
	for (std::map<Name, Number>::iterator it = book.begin(); it != book.end(); )
		if (((Name)it->first).get().c_str()[0] == ch)
			it = book.erase(it);
		else
			it++;
	for (std::map<Name, Number>::iterator it = book.begin(); it != book.end(); it++)
		cout << "  " << ((Name)(it->first)).get() << ": " << ((Number)(it->second)).get() << endl;
	cout << endl;


	system("pause");
	return 0;
}
