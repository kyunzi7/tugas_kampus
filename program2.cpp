#include <iostream>
#define PHI 3.14 // konstanta

using namespace std;
int main(){
	float jari_jari, luas;
	
	jari_jari = 25;
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "Data Lingkaran : " << endl;
	cout << "Jari - Jari : " << jari_jari << endl;
	cout << "Luas : " << luas << endl;
	
	return 0;
}