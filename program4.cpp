#include <iostream>
using namespace std;

//prototype

void baca();
void tukar();
void tampil();

//variabel
	int a, b, temp;
	
// program utama 
int main (){
	cout << "Program dengan Procedure" << endl;
	cout << "============================" << endl; 
	baca();
	tukar();
	tampil();
	
	return 0;
}

// proses membaca nilai
	void baca (){
		cout << "Masukkan Nilai A : ";
		cin >> a;
		
		cout << "Masukkan Nilai B : ";
		cin >> b;
	}
	
//proses tukar nilai	
	void tukar (){
		temp = b;
		b = a;
		a = temp;
	}
	
// proses menampilkan nilai
	void tampil(){
		cout << "==================================" << endl;
		cout << "Nilai A sekarang : " << a << endl;
		cout << "Nilai B sekarang : " << b << endl;
	}