#include <iostream>

using namespace std;

void Insert_Sort(int *A, int A_size) {
	int t, k;
	for (int i = 0; i < A_size - 1; i++) {
		k = i + 1;
		t = A[k];
		for (int j = i + 1; j > 0; j--) {
			if (t < A[j - 1]) {
				A[j] = A[j - 1];
				k = j - 1;
			}
		}
		A[k] = t;
	}
}

void Insert_Sort(double *A, int A_size) {
	double t;
	int k;
	for (int i = 0; i < A_size - 1; i++) {
		k = i + 1;
		t = A[k];
		for (int j = i + 1; j > 0; j--) {
			if (t < A[j - 1]) {
				A[j] = A[j - 1];
				k = j - 1;
			}
		}
		A[k] = t;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n, type;
	cout << "Введите кол-во элементов: ";
	cin >> n;
	cout << "\nВыберите тип массива\n1 - Целый\n2 - Дробный" << endl;
	cin >> type;
	switch (type) {
	case 1: {
		int *A;
		A = new int[n];
		cout << "\nЗаполните массив" << endl;
		for (int i = 0; i < n; i++) {
			cout << "A[" << i << "] = ";
			cin >> A[i];
		}
		cout << "\nВведённый массив:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		Insert_Sort(A, n);
		cout << "\nОтсортированный массив:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		delete[]A;
		break; }
	case 2: {
		double *A;
		A = new double[n];
		cout << "\nЗаполните массив" << endl;
		for (int i = 0; i < n; i++) {
			cout << "A[" << i << "] = ";
			cin >> A[i];
		}
		cout << "\nВведённый массив:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		Insert_Sort(A, n);
		cout << "\nОтсортированный массив:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		delete[]A;
		break; }
	default: {
		cerr << "Ошибка: Неверный ввод." << endl << endl;
		system("pause");
		return 1; }
	}
	cout << endl << endl;
	system("pause");
	return 0;
}