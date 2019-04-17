#include <iostream>

using namespace std;

double* create(int a) {
	double *m;
	m = new double[a];
	return m;
}

void put(int a, double *b) {
	for (int i = 0; i < a; i++) {
		cout << "m[" << i << "] = ";
		cin >> b[i];
	}
}

void get(int a, double *b) {
	for (int i = 0; i < a; i++)
		cout << "m[" << i << "] = " << b[i] << endl;
}

void del(double *b) {
	delete [] b;
}

int main(){
	setlocale(LC_ALL, "Russian");

	int s, c;
	double *m;
	do {
		cout << "Введите размер массива: ";
		cin >> s;
		m = create(s);
		put(s, m);
		cout << endl;
		get(s, m);
		del(m);
		cout << "\nХотите продолжить работу программы?\n1 - Да\n2 - Нет" << endl;
		cin >> c;
	} while (c == 1);
	system("pause");
	return 0;
}