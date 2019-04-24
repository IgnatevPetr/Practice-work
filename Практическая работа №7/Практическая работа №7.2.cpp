#include <iostream>

using namespace std;

struct Figure{
	int a, b, c;
	virtual ~Figure() {}
	virtual double area() = 0;
};

struct Quadrangle:Figure {
	virtual ~Quadrangle() {}
	virtual double second_angle() = 0;
};

struct Rhombus:Quadrangle {
	int a, b, c;
	Rhombus(int f_diagonal, int s_diagonal, int angle) :a(f_diagonal), b(s_diagonal), c(angle) {}
	double area() {
		return a * b / 2;
	}
	double second_angle() {
		return (360 - c * 2) / 2;
	}
};

struct Rectangle:Quadrangle {
	int a, b, c;
	Rectangle(int f_diagonal, int s_diagonal, int angle) :a(f_diagonal), b(s_diagonal), c(angle) {}
	double area() {
		return a * b / 2;
	}
	double second_angle() {
		return (360 - c * 2) / 2;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Quadrangle *A[2];
	int a1, b1, c1;
	cout << "Введите длины диагоналей ромба и один угол: ";
	cin >> a1 >> b1 >> c1;
	A[0] = new Rhombus(a1, b1, c1);
	cout << "Введите длины диагоналей прямоугольника и один угол: ";
	cin >> a1 >> b1 >> c1;
	A[1] = new Rectangle(a1, b1, c1);
	cout << endl;
	for (int i = 0; i < 2; i++) {
		cout << "Площадь фигуры " << i + 1 << ": " << A[i]->area() << endl;
		cout << "Второй угол фигуры " << i + 1 << ": " << A[i]->second_angle() << endl << endl;
		delete A[i];
	}
	cout << endl;
	system("pause");
	return 0;
}