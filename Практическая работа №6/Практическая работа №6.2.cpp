#include <iostream>
#include <string>
#include <cmath>
#define PI 3.14159265

using namespace std;

struct Operations {
	virtual ~Operations() {}
	virtual void out() = 0;
	virtual double res() = 0;
	virtual void der() = 0;
};

struct Const:Operations {
	double x;
	Const(double x) :x(x) {
		cout << endl;
		out();
		cout << "Константа " << x << " = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: Константа x = ?" << endl;
	}
	double res() {
		return x;
	}
	void der() {
		cout << "Производная = 0" << endl;
	}
};

struct Var:Operations {
	char x;
	Var(char x) :x(x) {
		cout << endl;
		out();
		cout << "Переменная " << x << " = " << x << endl;
		der();
	}
	void out() {
		cout << "Выражение: Переменная x = ?" << endl;
	}
	double res() {
		return x;
	}
	void der() {
		cout << "Производная = 1" << endl;
	}
};

struct Sum:Operations {
	double x, b;
	Sum(double x, double b) :x(x), b(b) {
		cout << endl;
		out();
		cout << x << " + " << b << " = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: x + b" << endl;
	}
	double res() {
		return x+b;
	}
	void der() {
		cout << "Производная = 1" << endl;
	}
};

struct Sub:Operations {
	double x, b;
	Sub(double x, double b) :x(x), b(b) {
		cout << endl;
		out();
		cout << x << " - " << b << " = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: x - b" << endl;
	}
	double res() {
		return x - b;
	}
	void der() {
		cout << "Производная = 1" << endl;
	}
};

struct Mult:Operations {
	double x, b;
	Mult(double x, double b) :x(x), b(b) {
		cout << endl;
		out();
		cout << x << " x " << b << " = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: x x b" << endl;
	}
	double res() {
		return x * b;
	}
	void der() {
		cout << "Производная = " << b << endl;
	}
};

struct Div:Operations {
	double x, b;
	Div(double x, double b) :x(x), b(b) {
		cout << endl;
		out();
		cout << x << " / " << b << " = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: x / b" << endl;
	}
	double res() {
		return x / b;
	}
	void der() {
		cout << "Производная = 1/" << b << endl;
	}
};

struct Sin:Operations {
	double x;
	Sin(double x) :x(x) {
		cout << endl;
		out();
		cout << "sin(" << x << ") = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: sin(x) = ?" << endl;
	}
	double res() {
		return sin(x*PI/180);
	}
	void der() {
		cout << "Производная = cos(x)" << endl;
	}
};

struct Cos:Operations {
	double x;
	Cos(double x) :x(x) {
		cout << endl;
		out();
		cout << "cos(" << x << ") = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: cos(x) = ?" << endl;
	}
	double res() {
		return cos(x*PI / 180);
	}
	void der() {
		cout << "Производная = -sin(x)" << endl;
	}
};

struct Exp:Operations {
	double x;
	Exp(double x) :x(x) {
		cout << endl;
		out();
		cout << "e^x = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: e^x = ?" << endl;
	}
	double res() {
		return exp(x);
	}
	void der() {
		cout << "Производная = e^x" << endl;
	}
};

struct Ln:Operations {
	double x;
	Ln(double x) :x(x) {
		cout << endl;
		out();
		cout << "ln(x) = " << res() << endl;
		der();
	}
	void out() {
		cout << "Выражение: ln(x) = ?" << endl;
	}
	double res() {
		return log(x);
	}
	void der() {
		cout << "Производная = 1/" << x << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	double t, l;
	char k;

	cout << "Выберите действие над x: " << endl;
	cout << "1 - Константа" << endl;
	cout << "2 - Переменная" << endl;
	cout << "3 - Сложить" << endl;
	cout << "4 - Вычесть" << endl;
	cout << "5 - Умножить" << endl;
	cout << "6 - Делить" << endl;
	cout << "7 - Найти синус" << endl;
	cout << "8 - Найти косинус" << endl;
	cout << "9 - Найти степень экспоненты" << endl;
	cout << "10 - Найти натуральный логорифм\n" << endl;
	cin >> n;
	switch (n) {
	case 1: {
		cout << "Вы выбрали Константу" << endl << endl;
		cout << "Введите константу: ";
		cin >> t;
		Const con(t);
		break;
	}
	case 2: {
		cout << "Вы выбрали Переменную" << endl << endl;
		cout << "Введите переменную: ";
		cin >> k;
		Var va(k);
		break;
	}
	case 3: {
		cout << "Вы выбрали Сложить" << endl << endl;
		cout << "Введите первое и второе слагаемое: ";
		cin >> t >> l;
		Sum(t, l);
		break;
	}
	case 4: {
		cout << "Вы выбрали Вычесть" << endl << endl;
		cout << "Введите уменьшаемое и вычитемое: ";
		cin >> t >> l;
		Sub(t, l);
		break;
	}
	case 5: {
		cout << "Вы выбрали Умножить" << endl << endl;
		cout << "Введите первый и второй множитель: ";
		cin >> t >> l;
		Mult(t, l);
		break;
	}
	case 6: {
		cout << "Вы выбрали Делить" << endl << endl;
		cout << "Введите делимое и делитель: ";
		cin >> t >> l;
		Div(t, l);
		break;
	}
	case 7: {
		cout << "Вы выбрали Найти синус" << endl << endl;
		cout << "Введите градус, синус которого найти: ";
		cin >> t;
		Sin si(t);
		break;
	}
	case 8: {
		cout << "Вы выбрали Найти косинус" << endl << endl;
		cout << "Введите градус, косинус которого найти: ";
		cin >> t;
		Cos co(t);
		break;
	}
	case 9: {
		cout << "Вы выбрали Найти степень экспоненты" << endl << endl;
		cout << "Введите степень экспоненты: ";
		cin >> t;
		Exp ex(t);
		break;
	}
	case 10: {
		cout << "Вы выбрали Найти натуральный логарифм" << endl << endl;
		cout << "Введите число, от которого найти натуральный логарифм: ";
		cin >> t;
		Ln lo(t);
		break;
	}
	default: {
		cerr << "Такого варианта нет" << endl;
		system("pause");
		return 1;
		break;
	}
	}

	cout << endl;
	system("pause");
	return 0;
}