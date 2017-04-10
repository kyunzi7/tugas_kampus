#include <iostream>
using namespace std;

typedef struct{
	string hari;
	string bulan;
	string tahun;
}tanggal;

typedef struct{
	int detik;
	int menit;
	int jam;
}jam;

typedef struct{
	int noKA;
	string kotaAsalKA;
	tanggal tglBerangkat;
	jam jamBerangkat;
	string kotaTujuanKA;
	tanggal tglTiba;
	jam jamTiba;
}jadwalKA;


int main(){
	jadwalKA A;
	
	A.noKA = 1;
	
	//Asal
	A.kotaAsalKA = "Bandung";
	A.tglBerangkat.hari = "Rabu / 09";
	A.tglBerangkat.bulan = "Desember";
	A.tglBerangkat.tahun = "2017";
	A.jamBerangkat.jam = 15;
	A.jamBerangkat.menit = 46;
	A.jamBerangkat.detik = 59;
	
	//tujuan
	A.kotaTujuanKA = "Surabaya";
	A.tglTiba.hari = "Kamis / 10";
	A.tglTiba.bulan = "Desember";
	A.tglTiba.tahun = "2017";
	A.jamTiba.jam = 15;
	A.jamTiba.menit = 46;
	A.jamTiba.detik = 59;

	
	cout << "Nomor KA : " << A.noKA << endl;
	cout << "	\nJadwal Pemberangkatan  " << endl;
	cout << "=======================================" << endl;
	cout << "Kota Asal : " << A.kotaAsalKA << endl;
	cout << "Jam Pemberangkatan : " << A.jamBerangkat.jam << ":" << A.jamBerangkat.menit << ":" << A.jamBerangkat.detik<< endl;
	cout << "Tanggal Pemberangkatan : " << A.tglBerangkat.hari << " - " << A.tglBerangkat.bulan << " - " << A.tglBerangkat.tahun << endl;
	
	cout << "	\nJadwal Tujuan  " << endl;
	cout << "=======================================" << endl;
	cout << "Kota Tujuan : " << A.kotaTujuanKA << endl;
	cout << "Jam Pemberangkatan : " << A.jamTiba.jam << ":" << A.jamTiba.menit << ":" << A.jamTiba.detik<< endl;
	cout << "Tanggal Pemberangkatan : " << A.tglTiba.hari << " - " << A.tglTiba.bulan << " - " << A.tglTiba.tahun << endl;
	return 0;
}
