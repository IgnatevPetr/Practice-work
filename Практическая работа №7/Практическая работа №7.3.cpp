#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

struct Vechile {
	virtual ~Vechile() {}
	virtual void info() = 0;
};

struct Car :Vechile {
	string color1, number1;
	Car(string a, string b) :color1(a), number1(b) {}
	void info() {
		cout << "Характеристики машины\nКол-во колёс: " << 4 << "\nЦвет: " << color1 << "\nНомер: " << number1 << endl << endl;
	}
};

struct Bus :Vechile {
	string color1, number1;
	Bus(string a, string b) :color1(a), number1(b) {}
	void info() {
		cout << "Характеристики автобуса\nКол-во колёс: " << 4 << "\nЦвет: " << color1 << "\nНомер: " << number1 << endl << endl;
	}
};

struct Bike :Vechile {
	string color1, number1;
	Bike(string a, string b) :color1(a), number1(b) {}
	void info() {
		cout << "Характеристики велосипеда\nКол-во колёс: " << 2 << "\nЦвет: " << color1 << "\nНомер: " << number1 << endl << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string car_col, car_num, bus_col, bus_num, bike_col, bike_num;
	cout << "Введите цвет машины: ";
	getline(cin, car_col);
	cout << "Введите номер машины: ";
	getline(cin, car_num);
	cout << "\nВведите цвет автобуса: ";
	getline(cin, bus_col);
	cout << "Введите номер автобуса: ";
	getline(cin, bus_num);
	cout << "\nВведите цвет велосипеда: ";
	getline(cin, bike_col);
	cout << "Введите номер велосипеда: ";
	getline(cin, bike_num);

	cout << "\n\nИнформация о траспортных средствах" << endl << endl;
	Car a(car_col, car_num);
	a.info();
	Bus b(bus_col, bus_num);
	b.info();
	Bike c(bike_col, bike_num);
	c.info();
	cout << endl;
	system("pause");
	return 0;
}