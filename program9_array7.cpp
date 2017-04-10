#include <iostream>

using namespace std;

int main(){
	string nama[10];
	int i;
	
	for(i=0; i < 10; i++){
		cin >> nama[i];
	}

	for(i=0; i < 10; i++){
		cout << "Nama index ke-" << i <<" : " << nama[i] << endl;	
	}
	
	
	return 0;
}