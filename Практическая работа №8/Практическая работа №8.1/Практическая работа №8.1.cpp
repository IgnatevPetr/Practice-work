#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	string word;
	ifstream fin("infile.txt");
	if (!fin.is_open()) {
		cerr << "Не удалось открыть файл." << endl << endl;
		system("pause");
		return 1;
	}
	while (!fin.eof()) {
		fin >> word;
		cout << word << endl;
	}
	fin.close();
	cout << endl;
	system("pause");
	return 0;
}