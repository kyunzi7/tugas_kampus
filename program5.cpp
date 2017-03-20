#include <iostream>
using namespace std;

//prototype

void baca();
int tambah();
int kurang();
void tampil();

// variabel global

int a, b;

//program utama 
int main(){
	cout << "Program dengan Function " << endl;
	cout << "=========================== " << endl;
	baca();
	tampil();
	return 0;
}

// proses baca 

	void baca(){
		cout << "Masukkan nilai A : ";
		cin >> a;
		
		cout << "Masukkan nilai B : ";
		cin >> b;
	}
// proses tambah	
	int tambah(){
		return a + b;
	}
	
	
// proses kurang
	int kurang(){
		int hasil;
		hasil = a - b;
		return hasil;
	}
	
	void tampil(){
		cout << "Hasil Tambah : " << tambah() << endl;
		cout << "Hasil Kurang : " << kurang() << endl;
	}
	