#include <iostream>
using namespace std;

//prototype

void baca();
void pilih();
void proses();
float tambah();
float kurang();
float kali();
float bagi();
void tampil();

// variabel global

float a, b, hasil;
int c;

//program utama 
int main(){
	cout << "\nProgram Kalkulator Sederhana Menggunakan Prosedur dan Function" << endl;
	cout << "=================================================================\n" << endl;
	pilih();
	proses();
	return 0;
}

	void pilih(){
		cout << "1. Penambahan ( + ) " << "			" << "2. Pengurangan ( - )" << endl;
		cout << "3. Perkalian ( * )" << "			" << "4. Pembagian ( / )" << endl;
		cout << "\nPilih Operator : ";
		cin >> c;
	}
// proses baca 

	void baca(){
		cout << "==================================================================\n";
		cout << "\nMasukkan nilai A : ";
		cin >> a;
		
		cout << "Masukkan nilai B : ";
		cin >> b;
	}
// proses tambah	
	float tambah(){
		return a + b;
	}
	
	
// proses kurang
	 float kurang(){
		hasil = a - b;
		return hasil;
	}
	
// proses kali
	 float kali(){
		hasil = a * b;
		return hasil;
	}
// proses bagi	
	float bagi(){
		float d;
		d = a / b;
		return d;
	}
	
// struktur kendali proses
	void proses(){
		if ( c == 1){
			baca();
			tambah();
			tampil();
		}else if ( c == 2){
			baca();
			kurang();
			tampil();
		}else if ( c == 3){
			baca();
			kali();
			tampil();
		}else if ( c == 4){
			baca();
			bagi();
			tampil();

		}else{
			cout << "Inputan Error" << endl;
		}
		
	}
	
// proses tampil
	void tampil(){
		if ( c == 1){
			cout << "\nHasil  : " << tambah() << endl;
		}else if ( c == 2){
			cout << "\nHasil  : " << kurang() << endl;
		}else if ( c == 3){
			cout << "\nHasil  : " << kali() << endl;
		}else if ( c == 4){
			cout << "\nHasil  : " << bagi() << endl;
		}else{
			cout << "Tidak Ada";
		}
		
	}
	