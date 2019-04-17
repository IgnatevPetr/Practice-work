#include <iostream>

using namespace std;

void bubble_sort(int *A, int A_size) {
	for (int i=0; i<A_size-1;i++)
		for(int j=A_size-2;j>=i;j--)
			if (A[j] > A[j + 1]) {
				int t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
}

void bubble_sort(double *A, int A_size) {
	for (int i = 0; i < A_size - 1; i++)
		for (int j = A_size - 2; j >= i; j--)
			if (A[j] > A[j + 1]) {
				double t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
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
		bubble_sort(A, n);
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
		bubble_sort(A, n);
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