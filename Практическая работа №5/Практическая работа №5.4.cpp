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
	cout << "�������� ��� ������, � ����� ������ ��������:\n1 - �����\n2 - �������" << endl;
	cin >> type;
	if ((type != 1) && (type != 2)) {
		cerr << "������: �������� ����." << endl << endl;
		system("pause");
		return 1;
	}
	cout << "\n�������� ��������, ������� ������ ���������:\n1 - ��������\n2 - ���������\n3 - ���������\n4 - �������" << endl;
	cin >> operat;
	if ((operat != 1) && (operat != 2) && (operat != 3) && (operat != 4)) {
		cerr << "������: �������� ����." << endl << endl;
		system("pause");
		return 1;
	}
	switch (type) {
	case 1: {
		int a, b, c;
		cout << "\n������� ����� a: ";
		cin >> a;
		cout << "������� ����� b: ";
		cin >> b;
		c = operation(operat, a, b);
		cout << "\n���������: " << c;
		break; }
	case 2: {
		double a, b, c;
		cout << "\n������� ����� a: ";
		cin >> a;
		cout << "������� ����� b: ";
		cin >> b;
		c = operation(operat, a, b);
		cout << "\n���������: " << c; 
		break; }
	default:
		break;
	}
	cout << endl << endl;
	system("pause");
	return 0;
}