#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

struct Screen {
	virtual ~Screen() {}
	virtual void s_info() = 0;
};

struct Keyboard {
	virtual ~Keyboard() {}
	virtual void k_info() = 0;
};

struct Laptop :Screen, Keyboard {
	string a, b;
	string c;
	Laptop() {
		cout << "Введите название ноутбука: ";
		getline(cin, a);
		cout << "Введите разрешение экрана: ";
		getline(cin, b);
		cout << "Введите количесто клавиш: ";
		getline(cin, c);
		cout << "\nХарактеристики ноутбука " << a << endl;
		s_info();
		k_info();
		cout << endl;
		cout << "----------------------------------" << endl << endl;
	}
	void s_info() {
		cout << "Разрешение экрана: " << b << endl;
	}
	void k_info() {
		cout << "Количество клавиш: " << c << endl;
	}
};

struct Phone :Screen, Keyboard {
	string a, b;
	string c;
	Phone() {
		cout << "Введите название телефона: ";
		getline(cin, a);
		cout << "Введите разрешение экрана: ";
		getline(cin, b);
		cout << "Введите количесто клавиш: ";
		getline(cin, c);
		cout << "\nХарактеристики телефона " << a << endl;
		s_info();
		k_info();
		cout << endl;
		cout << "----------------------------------" << endl << endl;
	}
	void s_info() {
		cout << "Разрешение экрана: " << b << endl;
	}
	void k_info() {
		cout << "Количество клавиш: Клавиатура отсутствует" << endl;
	}
};

struct PC :Screen, Keyboard {
	string d, e;
	string c;
	PC() {
		cout << "Введите название ПК: ";
		getline(cin, d);
		cout << "Введите разрешение экрана: ";
		getline(cin, e);
		cout << "Введите количесто клавиш: ";
		getline(cin, c);
		cout << "\nХарактеристики ПК " << d << endl;
		s_info();
		k_info();
		cout << endl;
		cout << "----------------------------------" << endl << endl;
	}
	void s_info() {
		cout << "Разрешение экрана: " << e << endl;
	}
	void k_info() {
		cout << "Количество клавиш: " << c << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Laptop l1;
	Phone p1;
	PC pc1;

	system("pause");
	return 0;
}