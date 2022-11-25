#include <iostream>
using namespace std;

template<typename T>
class Array {
private:
	T* array;
	int size;
	int ind;

public:
	Array() {
		array = new T[100];
		size = 100;
		ind = 0;
	}
	~Array() {
		delete array;
	}
	bool SetInd(int v) {
		if (v < 0 || v >= size)
			return false;
		ind = v;
		return true;
	}
	bool Set(int index, T data) {
		if (index <= ind && index >= 0) {
			array[index] = data;
			return true;
		}
		return false;
	}
	T Sum() {
		T a;
		for (int i = 0; i <= ind; i++)
			if (i == 0)
				a = array[i];
			else
				a += array[i];
		return a;
	}
	void Print() {
		for (int i = 0; i <= ind; i++)
			cout << array[i] << endl;
	}
	T operator[](int index) {
		if (index < 0 || index > ind)
			return 0;
		return array[index];
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Array<int> arr;
	while (true) {
		int a;
		int b;
		cout << "Меню" << endl;
		cout << "  1 - Задать индекс" << endl;
		cout << "  2 - Задать значение" << endl;
		cout << "  3 - Вывести сумму" << endl;
		cout << "  4 - Вывести значения" << endl;
		cout << "  5 - Получить по индексу" << endl;
		cout << "  0 - Выход" << endl;
		int menu;
		cin >> menu;
		switch (menu) {
		default:
			cout << "Ошибка: неверное значение" << endl;
			break;
		case 0:
			return 0;
		case 1:
			cout << "Введите индекс: ";
			cin >> a;
			if (arr.SetInd(a))
				cout << "Успешно" << endl;
			else
				cout << "Неудача" << endl;
			break;
		case 2:
			cout << "Введите индекс: ";
			cin >> a;
			cout << "Введите значение: ";
			cin >> b;
			if (arr.Set(a, b))
				cout << "Успешно" << endl;
			else
				cout << "Неудача" << endl;
			break;
		case 3:
			cout << "Сумма: " << arr.Sum() << endl;
			break;
		case 4:
			arr.Print();
			break;
		case 5:
			cout << "Введите индекс: ";
			cin >> a;
			cout << "Значение: " << arr[a] << endl;
			break;
		}
	}
	return 0;
}