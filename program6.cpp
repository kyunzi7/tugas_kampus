#include <iostream>

using namespace std;

int tambah (int a, int b);

int main(){
	cout << "Program dengan menggunakan Parameter" << endl;
	cout << "==========================================" << endl;
	cout << "Hasil : " << tambah(5,6) << endl;
	return 0;
}
	int tambah(int a, int b){
		return a + b;
	}