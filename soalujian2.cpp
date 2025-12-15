#include <iostream>


using namespace std;

int main()
{
	int n;
	

	cout << "Masukkan Jumlah baris:";
	cin >> n;
	
	

	for (int i = 0; i >= 1; i--) {

		for (int k = 0; k < n - i; k++) { 
			cout << " ";
		}

		
		for (int j = 1; j <= i; j++) {

			cout << "* ";
		}

		
		
		cout << endl;

	}
	return 0;
}