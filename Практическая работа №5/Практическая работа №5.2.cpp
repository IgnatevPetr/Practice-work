#include <iostream>

using namespace std;

void Selection_Sort(int *A, int A_size) {
	int t, k;
	for (int i = 0; i < A_size - 1; i++) {
		t = A[i];
		k = i;
		for (int j = i + 1; j < A_size; j++)
			if (A[j] < A[k]) k = j;
		if (k != i) {
			A[i] = A[k];
			A[k] = t;
		}
	}
}

void Selection_Sort(double *A, int A_size) {
	double t;
	int k;
	for (int i = 0; i < A_size - 1; i++) {
		t = A[i];
		k = i;
		for (int j = i + 1; j < A_size; j++)
			if (A[j] < A[k]) 
				k = j;
		if (k != i) {
			A[i] = A[k];
			A[k] = t;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n, type;
	cout << "������� ���-�� ���������: ";
	cin >> n;
	cout << "\n�������� ��� �������\n1 - �����\n2 - �������" << endl;
	cin >> type;
	switch (type) {
	case 1: {
		int *A;
		A = new int[n];
		cout << "\n��������� ������" << endl;
		for (int i = 0; i < n; i++) {
			cout << "A[" << i << "] = ";
			cin >> A[i];
		}
		cout << "\n�������� ������:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		Selection_Sort(A, n);
		cout << "\n��������������� ������:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		delete[]A;
		break; }
	case 2: {
		double *A;
		A = new double[n];
		cout << "\n��������� ������" << endl;
		for (int i = 0; i < n; i++) {
			cout << "A[" << i << "] = ";
			cin >> A[i];
		}
		cout << "\n�������� ������:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		Selection_Sort(A, n);
		cout << "\n��������������� ������:" << endl;
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
		delete[]A;
		break; }
	default: {
		cerr << "������: �������� ����." << endl << endl;
		system("pause");
		return 1; }
	}
	cout << endl << endl;
	system("pause");
	return 0;
}