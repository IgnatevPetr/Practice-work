#include <iostream>
#include <ctime>

using namespace std;

int** put(int n, int m) {
	int **A;
	A = new int *[n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];
	return A;
}

void random(int** A, int n, int m) {
	srand(time(0));
	for (int i =0; i<n; i++)
		for (int j = 0; j < m; j++)
			A[i][j] = 10 + rand() % 41;
		
}

void get(int** A, int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << endl;
		for (int j = 0; j < m; j++)
			cout << A[i][j] << "  ";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n, m, **A;
	cout << "¬ведите кол-во строк: ";
	cin >> n;
	cout << "¬ведите кол-во столбцов: ";
	cin >> m;
	A = put(n, m);
	random(A, n, m);
	get(A, n, m);
	cout << endl << endl;
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
	system("pause");
	return 0;
}