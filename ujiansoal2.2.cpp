#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Masukkan Jumlah baris:";//jumlah baris
	cin >> n;
	for (int i = n - 1; i >= 0; --i) {//untuk segitiga terbalik

		for (int k = 0; k < n - 1 - i; k++) { //untuk menata segitiga
			cout << " ";
		}

		int val = 1;   //nilai pertama
		for (int j = 0; j <= i; j++) {

			
			val = val * (i - j) / (j + 1);  //rumus segitiga
			cout << "* ";	
		}
		cout << endl;

	}
	return 0;
}
