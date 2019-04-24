#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream fout("outfile.txt");
	string a;
	cout << "Введите текст, который желаете записать в файл" << endl;
	getline(cin, a);
	fout << a;
	fout.close();
	system("pause");
	return 0;
}