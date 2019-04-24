#include <iostream>

using namespace std;

struct Property {
	double worth;
	Property(double worth) {
		(*this).worth = worth;
	}
	virtual ~Property() {}
	virtual double tax() = 0;

};

struct Apartment:Property {
	Apartment(double worth) :Property(worth) {};
	double tax() {
		return worth / 1000;
	}
};

struct Car:Property {
	Car(double worth) :Property(worth) {};
	double tax() {
		return worth / 200;
	}
};

struct CountryHouse:Property {
	CountryHouse(double worth) :Property(worth) {};
	double tax() {
		return worth / 500;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	double price;
	Property *A[7];
	cout << "Введите стоимость первой квартиры: ";
	cin >> price;
	A[0] = new Apartment(price);
	cout << "Введите стоимость второй квартиры: ";
	cin >> price;
	A[1] = new Apartment(price);
	cout << "Введите стоимость третей квартиры: ";
	cin >> price;
	A[2] = new Apartment(price);
	cout << "Введите стоимость первой машины: ";
	cin >> price;
	A[3] = new Car(price);
	cout << "Введите стоимость второй машины: ";
	cin >> price;
	A[4] = new Car(price);
	cout << "Введите стоимость первой дачи: ";
	cin >> price;
	A[5] = new CountryHouse(price);
	cout << "Введите стоимость второй дачи: ";
	cin >> price;
	A[6] = new CountryHouse(price);
	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << "Налог за объект №" << i+1 << " составляет: " << A[i]->tax() << " руб." << endl;
		delete A[i];
	}
	cout << endl;
	system("pause");
	return 0;
}