#include <iostream>

using namespace std;

int main(){
	char a[10];
	int h, i;
	int jmlA = 0;
	for(i=0; i<10; i++){
		cout << "Masukkan karakter ke-" << i+1 << " : ";
		cin >> a[i];
	}
	
	cout << "===================================" << endl;
	cout << "Hasil : ";
	
	for(h=0; h<10; h++){  
        cout << a[h] << " ";  
    }
	
	cout << endl;
	
	for(h=0; h<10; h++){   
        if(a[h] == 'a' || a[h] == 'A'){
			jmlA++;
		}
    }
	cout << "Jumlah Karakter a / A : " << " : " << jmlA <<endl;  
	
	return 0;
}