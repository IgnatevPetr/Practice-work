#include <iostream>

using namespace std;

int operation(int operat, int a, int b) {
	int c;
	switch (operat) {
	case 1:
		c = a + b; break;
	case 2:
		c = a - b; break;
	case 3: 
		c = a * b; break;
	case 4:
		c = a / b; break;
	default:
		break;
	}
	return c;
}

double operation(int operat, double a, double b) {
	double c;
	switch (operat) {
	case 1:
		c = a + b; break;
	case 2:
		c = a - b; break;
	case 3:
		c = a * b; break;
	case 4:
		c = a / b; break;
	default:
		break;
	}
	return c;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	int type, operat;
	cout << "Выберите тип данных, с каким хотите работать:\n1 - Целый\n2 - Дробный" << endl;
	cin >> type;
	if ((type != 1) && (type != 2)) {
		cerr << "Ошибка: неверный ввод." << endl << endl;
		system("pause");
		return 1;
	}
	cout << "\nВыберите действие, которое хотите выполнить:\n1 - Сложение\n2 - Вычитание\n3 - Умножение\n4 - Деление" << endl;
	cin >> operat;
	if ((operat != 1) && (operat != 2) && (operat != 3) && (operat != 4)) {
		cerr << "Ошибка: неверный ввод." << endl << endl;
		system("pause");
		return 1;
	}
	switch (type) {
	case 1: {
		int a, b, c;
		cout << "\nВведите число a: ";
		cin >> a;
		cout << "Введите число b: ";
		cin >> b;
		c = operation(operat, a, b);
		cout << "\nРезультат: " << c;
		break; }
	case 2: {
		double a, b, c;
		cout << "\nВведите число a: ";
		cin >> a;
		cout << "Введите число b: ";
		cin >> b;
		c = operation(operat, a, b);
		cout << "\nРезультат: " << c; 
		break; }
	default:
		break;
	}
	cout << endl << endl;
	system("pause");
	return 0;
}