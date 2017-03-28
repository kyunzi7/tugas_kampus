#include <iostream>
using namespace std;

//prototype

void baca();
void pilih();
void proses();
int tambah();
int kurang();
int kali();
int bagi();
void tampil();

// variabel global

int a, b, c, hasil	;

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
	int tambah(){
		return a + b;
	}
	
	
// proses kurang
	 int kurang(){
		hasil = a - b;
		return hasil;
	}
	
// proses kali
	 int kali(){
		hasil = a * b;
		return hasil;
	}
// proses bagi	
	int bagi(){
		float a,b;
		float c;
		cout << "\nMasukkan nilai A : ";
		cin >> a;
		cout << "Masukkan nilai B : ";
		cin >> b;
		c = a / b;
		cout << "\nHasil  : " << c;
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
			bagi();

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
		}else{
			cout << "Tidak Ada";
		}
		
	}
	