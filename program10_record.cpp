#include <iostream>
using namespace std;

typedef struct{
	string hari;
	string tgl;
	string bulan;
	string tahun;
}tanggal;

int main(){
	tanggal A;
	cout << "Masukkan Nama Hari : ";
	cin >>A.hari;
	cout << "Masukkan Nama Tanggal : ";
	cin >>A.tgl;
	cout << "Masukkan Nama Bulan : ";
	cin >>A.bulan;
	cout << "Masukkan Nama Tahun : ";
	cin >>A.tahun;
	
	cout << "========================================" << endl;
	cout << "Hasil : " << A.hari << " / " << A.tgl << " - " << A.bulan << " - " << A.tahun;
	return 0;
}
