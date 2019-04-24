#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

struct Animal {
	virtual ~Animal() {}
	virtual void sound() = 0;
};

struct Cat :Animal {
	string sound1;
	Cat(string a):sound1(a) {}
	void sound() {
		cout << "Кошечка делает '" << sound1 << "'" << endl;
	}
};

struct Dog :Animal {
	string sound1;
	Dog(string a) :sound1(a) {}
	void sound() {
		cout << "Собачка делает '" <<  sound1 << "'" << endl;
	}
};

struct Parrot :Animal {
	string sound1;
	Parrot(string a) :sound1(a) {}
	void sound() {
		cout << "Попугайчик делает '" << sound1 << "'" << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string sound_cat, sound_dog, sound_parrot;
	cout << "Как делает кошечка?" << endl;
	getline(cin, sound_cat);
	cout << "Как делает собачка?" << endl;
	getline(cin, sound_dog);
	cout << "Как делает попугайчик?" << endl;
	getline(cin, sound_parrot);
	cout << "\nВаши ответы:" << endl;
	Cat a(sound_cat);
	a.sound();
	Dog b(sound_dog);
	b.sound();
	Parrot c(sound_parrot);
	c.sound();
	cout << endl;
	system("pause");
	return 0;
}