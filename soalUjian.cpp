#include <iostream>

using namespace std;

int main() {

	int i;
	while (true) {
		cout << "Masukkan bilangan: ";
		cin >> i;

		if (i < 10) {
			cout << "Bilangan dibawah 10" << endl;
		}
		else if (i > 10) {
			cout << "Bilangan diatas 10" << endl;
		}
		if (i % 2 != 0) {
			cout << "Bilangan ganjil" << endl;
		}
		else {
			cout << "Bilangan genap" << endl;

		}

	}
	return 0;
}