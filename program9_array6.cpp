#include <iostream>

using namespace std;

int main(){
	string nama[3];
	int i;
	
	for(i=0; i<3; i++){
		cin >> nama[i];
	}

	for(i=0; i < 3; i++){
		cout << "Nama index ke-" << i <<" : " << nama[i] << endl;	
	}
	
	
	return 0;
}