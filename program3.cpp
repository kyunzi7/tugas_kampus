#include <iostream>

using namespace std;

int main(){
	//variabel
	int a, b, temp;
	
	//proses membaca
	
	cout << "Masukan nilai A : ";
	cin >> a;
	
	cout << "Masukan nilai B : ";
	cin >> b;
	
	//proses tukar
	
	temp = b;
	b = a;
	a = temp;
	
	// proses tampil
	
	cout << "=====================================" << endl;
	cout << "Nilai A Sekarang : " << a << endl;
	cout << "Nilai B Sekarang : " << b << endl;
	
	return 0;
}