#include <iostream>

using namespace std;

void put(int *a) {
	for (int i = 0; i < 12; i++) {
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}


void replace(int *a) {
	int t;
	for (int i = 1; i < 12; i=i+2) {
		t = a[i - 1];
		a[i - 1] = a[i];
		a[i] = t;
	}
}

void get(int *a) {
	for (int i = 0; i < 12; i++)
		cout << a[i] << " ";
}


int main() {
	setlocale(LC_ALL, "Russian");

	int *A;
	A = new int[12];
	cout << "Заполните массив целых чисел" << endl << endl;
	put(A);
	cout << "Ваш массив:" << endl;
	get(A);
	replace(A);
	cout << "\nИзменённый массив:" << endl;
	get(A);
	cout << endl << endl;
	delete[]A;
	system("pause");
	return 0;
}