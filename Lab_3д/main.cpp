#include <iostream>
using namespace std;

class Persona {
public:
	string pib;
	int vik;

	Persona(string pib, int vik) {
		this->pib = pib;
		this->vik = vik;
	}

	virtual void print() {
		cout << "Presona:" << endl;
		cout << "  Pib: " << pib << endl;
		cout << "  Vik: " << vik << endl;
	}
	virtual int who() {
		return 0;
	}
	virtual int ask() {
		return 0;
	}
};

class Prepod :public Persona {
public:
	string disciplina;
	int stupin;

	Prepod(string disciplina, int stupin, string pib, int vik) : Persona(pib, vik) {
		this->disciplina = disciplina;
		this->stupin = stupin;
	}

	virtual void print() override {
		cout << "Prepod:" << endl;
		cout << "  Pib: " << pib << endl;
		cout << "  Vik: " << vik << endl;
		cout << "  Disciplina: " << disciplina << endl;
		cout << "  Stupin: " << stupin << endl;
	}
	virtual int who() override {
		return 1;
	}
	virtual int ask() override {
		return stupin;
	}
};

class Student :public Persona {
public:
	int* marks;

	Student(int marks[5], string pib, int vik) : Persona(pib, vik) {
		this->marks = marks;
	}

	virtual void print() override {
		cout << "Student:" << endl;
		cout << "  Pib: " << pib << endl;
		cout << "  Vik: " << vik << endl;
		cout << "  Marks:" << endl;
		for (int i = 0; i < 5; i++)
			cout << "    #" << i + 1 << ": " << marks[i] << endl;
	}
	virtual int who() override {
		return 3;
	}
	virtual int ask() override {
		int c = 0;
		for (int i = 0; i < 5; i++)
			if (marks[i] == 2)
				c++;
		return c;
	}
};

class Zav_kaf :public Prepod {
public:
	string posada;

	Zav_kaf(string posada, string disciplina, int stupin, string pib, int vik) : Prepod(disciplina, stupin, pib, vik) {
		this->posada = posada;
	}

	virtual void print() override {
		cout << "Zav_kaf:" << endl;
		cout << "  Pib: " << pib << endl;
		cout << "  Vik: " << vik << endl;
		cout << "  Disciplina: " << disciplina << endl;
		cout << "  Stupin: " << stupin << endl;
		cout << "  Posada: " << posada << endl;
	}
	virtual int who() override {
		return 2;
	}
	virtual int ask() override {
		return vik;
	}
};

class VUZ {
public:
	Persona** Shtat;

	VUZ() {
		Shtat = new Persona * [2 + 3 + 1];
		Shtat[0] = new Prepod("KM", 2, "I. O. Stream", 46);
		Shtat[1] = new Prepod("OOP", 1, "A. V. Evgenev", 93);

		Shtat[2] = new Student(new int[] { 5, 5, 4, 4, 3 }, "A. B. Cerov", 18);
		Shtat[3] = new Student(new int[] { 2, 4, 5, 1, 3 }, "D. E. Fedorov", 21);
		Shtat[4] = new Student(new int[] { 5, 2, 3, 2, 2 }, "G. H. Ivanov", 19);

		Shtat[5] = new Zav_kaf("Dekan", "ABC", 0, "J. K. Lermontov", 49);
	}

	void Print() {
		for (int i = 0; i < 2 + 3 + 1; i++)
			Shtat[i]->print();
	}

	void PrintPrepodLess50() {
		for (int i = 0; i < 2 + 3 + 1; i++)
			if (Shtat[i]->who() == 2 || Shtat[i]->who() == 1 && Shtat[i]->vik < 50)
				Shtat[i]->print();
	}
	void PrintStudentsWith2() {
		for (int i = 0; i < 2 + 3 + 1; i++)
			if (Shtat[i]->who() == 3 && Shtat[i]->ask() > 0)
				Shtat[i]->print();
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	VUZ v;
	cout << "Весь штат вуза" << endl;
	v.Print();
	cout << endl;
	cout << "Преподаватели моложе 50 лет" << endl;
	v.PrintPrepodLess50();
	cout << endl;
	cout << "Студенты с минимум одним долгом" << endl;
	v.PrintStudentsWith2();
	system("pause");
	return 0;
}
