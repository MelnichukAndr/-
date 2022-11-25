#include "Header.h"

void Person::fill() {
	std::ifstream f;
	f.open("Names.txt", std::ios::in | std::ios::out);
	std::vector<std::string> v;
	while (!f.eof()) { std::string s; std::getline(f, s); v.push_back(s); }

	name = v[rand() % 10];
	age = 18 + rand() % 30 ;
}
Person::Person() {

	fill();
}

void Worker::fill() {
	exp = rand() % 10;
	std::string arr_n[3] = { "Официант","Старший официант","Администратор"};
	post = arr_n[rand() % 3];
	if(post == arr_n[0])
		salary = 1000*exp;
	else if(post == arr_n[1])
		salary =  3000*exp;
	else
		salary = 8000*exp;
	
	

}
Worker::Worker() : Person() {

	fill();
}


void Waiter::fill(std::vector<Table>& arr1) {
	arr = arr1;
	
}
Waiter::Waiter(std::vector<Table>& arr1) :Person(), Worker() {

	fill(arr1);
}
Waiter::Waiter() :Person(), Worker() {
	std::vector<Table> arr;
}

Waiter Waiter::operator ()(Table& ob) {
	if (!ob.is_waiter()) {
		ob.set_waiter(1);
		arr.push_back(ob);
	}
	return *this;
}
Waiter Waiter::operator -(int idx) {
	for (int i = 0; i < arr.size();i++) {
		if (arr[i].get_idx() == idx) {
			arr.erase(arr.begin() + i);
		}
	}
	/*arr.erase(arr.begin() + (idx - 1));*/
	return *this;
}
void Waiter::print_arr(System::Windows::Forms::TextBox^ textBox) {
	print(textBox);
	for (int i = 0; i < arr.size(); i++) {
		textBox->Text += "\r\n\r\n";
		arr[i].print(textBox);
	}
}
bool Waiter::is_idx(int& idx) {
	for (auto i : arr) {
		if (i.get_idx() == idx)
			return true;

	}
	return false;
}
void Table::fill() {
	count = 1 + rand() % 3;
	f = 0;
	vip = rand() % 2;
}
Table::Table(int& i) {
	fill();
	idx = i;
}


void Person::print(System::Windows::Forms::TextBox^ textBox)
{
	textBox->Text += "Имя: " + gcnew System::String(name.c_str()) + "\r\n" + "Возраст: " + age + "\r\n";
};
void Worker::print(System::Windows::Forms::TextBox^ textBox)
{

	Person::print(textBox); textBox->Text += "Зарплата: " + salary + "\r\n" + "Должность: " + gcnew System::String(post.c_str()) + "\r\n" + "Опыт работы : " + exp;
}
void Waiter::print(System::Windows::Forms::TextBox^ textBox)
{
	Worker::print(textBox);
	textBox->Text += "\r\nСтоликов: " + arr.size() + "\r\n\r\n";

}

void Table::print(System::Windows::Forms::TextBox^ textBox) {
	std::string s,v;
	if (vip)
		s = "Да";
	else
		s = "Нет";
	if (f)
		v = "Есть";
	else
		v = "Нету";
	textBox->Text += idx + " Столик\r\n" + "Людей за ним : " + count + "\r\n" + "VIP: "+ gcnew System::String(s.c_str()) +"\r\n"+"Официант: "+ gcnew System::String(v.c_str()) +"\r\n\r\n";
}
