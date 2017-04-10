#include <iostream>

using namespace std;

int main(){
	int sum, i;
	int TabInt[10];
	
	cout << "Isilah 10 data nilai dalam range 0 - 100 : " << endl;
	for(i=0; i<10; i++){
		cin >> TabInt[i];
	}
	
	cout << "Data Input : " << endl;
	
	sum=0;
	for(i=0; i<10; i++){
		cout << TabInt[i] << endl;
		sum += TabInt[i];
	}
	
	cout << "Rata - Rata : " << (float)sum/10.0 << endl;
	
	return 0;
}