#include <iostream>
#include <stdlib.h>
using namespace std;

//variable global
float nilai[40], jmlNilai, jmlRata, temp;
int mhs = 0, lulus = 0, tidakLulus = 0;
bool q;

//prototype
void inputNilai();
void prosesNilai();
bool isWithinRange(float x, int max, int min);

//program
int main(){
	system("cls");
	inputNilai();	
	prosesNilai();
	return 0;
}

 void inputNilai() {
	cout << endl;
	cout << endl;
	cout << "========================================================================" << endl;
	cout << "                       Program IP Mahasiswa							 " << endl;
	cout << "========================================================================" << endl;
	for (int i = 1; i <= 40; i++) {

		cout << "Masukan IP Mahasiswa ke-" << i << " : ";
		cin >> temp;


		if (temp == -999)
			return;

		q = isWithinRange(temp, 0, 4);
		if (q == true) {

			nilai[mhs] = temp;
			jmlNilai += nilai[mhs];
			
				if (nilai[mhs] > 2.75){
					lulus++;
				} 
				else { 
					tidakLulus++;
				}
			mhs++;

		}
		
	}
}

void prosesNilai(){
	jmlRata = jmlNilai / mhs;
	
	if (mhs > 0 ){
		cout << "=============================================" << endl;
		cout << endl;
		cout << "Jumlah Mahasiswa : " << mhs << endl;
		cout << "Nilai Rata - Rata : " << jmlRata << endl;
		cout << "Jumlah Mahasiswa yang lulus : " << lulus << endl;
		cout << "Jumlah Mahasiswa yang tidak lulus : " << tidakLulus << endl;
		cout << endl;
		cout << "============================================="<< endl;
	}else{
		cout << "=============================================" << endl;
		cout << endl;
		cout << "Tidak Ada data " << endl;
		cout << endl;
		cout << "============================================="<< endl;
	}
}

bool isWithinRange(float x, int min, int max) {

	return (x >= min && x <= max);
}