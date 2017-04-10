#include <iostream>
#include <stdlib.h>

using namespace std;

// prototype
void menu();
void pilA();
void pilB();

// variable global
char pil;
int jml,i;
unsigned int nilai, minimal, maksimal;
// badan program

int main(){
	selection:
	system("cls");
	cout << " =====================================================================" << endl;
	cout << " 		Program Mencari Nilai Terkecil dan Terbesar			   " << endl;
	cout << " =====================================================================" << endl;
	cout << " Menu Utama : \n" << endl;
	cout << " A. Nilai Terkecil " << endl;
	cout << " B. Nilai Terbesar \n" << endl;
	cout << " Masukkan Pilihan :  ";
	cin >> pil;
	
	if (pil == 'a' || pil == 'A'){
		pilA();
	}else if (pil == 'b' || pil == 'B'){
		pilB();
	}else{
		goto selection;
	}
	return 0;
}



void pilA(){
	cout << "\nMencari Nilai Terkecil" << endl;
		cout << "==============================" << endl;
		cout << "Masukkan jumlah Nilai : ";
		cin	>> jml;
		cout << endl;
		for (i = 1; i <= jml; i++){
			cout << "Masukkan nilai ke-" << i << " : ";
			cin >> nilai;
			if (i == 1){
				minimal = nilai;
			}else if(minimal > nilai){
				minimal = nilai;
			}
			
		}
		cout << "\nNilai Terkecil : " << minimal;
}

void pilB(){
	cout << "\nMencari Nilai Terbesar" << endl;
		cout << "==============================" << endl;
		cout << "Masukkan jumlah Nilai : ";
		cin	>> jml;
		cout << endl;
		for (i = 1; i <= jml; i++){
			cout << "Masukkan nilai ke-" << i << " : ";
			cin >> nilai;
			if (i == 1){
				maksimal = nilai;
			}else if(maksimal < nilai){
				maksimal = nilai;
			}
		}
		cout << "\nNilai Terbesar : " << maksimal;
}