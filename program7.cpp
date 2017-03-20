#include <iostream>

using namespace std;

int tambah (int a, int b);

int main(){
	int a,b;
	cout << "Program dengan menggunakan Parameter Input" << endl;
	cout << "==========================================" << endl;
	
	cout << "Masukkan nilai A : ";
	cin >> a;
	cout << "Masukkan Nilai B : ";
	cin >> b;
	
	cout << "Hasil : " << tambah(a,b) << endl;
	
	return 0;
}
	int tambah(int a, int b){
		return a + b;
	}