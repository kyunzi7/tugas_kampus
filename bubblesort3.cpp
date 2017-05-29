#include <iostream>

using namespace std;

int main(){
	int i, k, temp, x[] = {72, 97, 11, 13};
	
	for(i = -1; i < 2; ++i){
		for(k=3; k > i+1; --k){
			if(x[k] < x[k-1]){
				temp = x[k];
				x[k] = x[k-1];
				x[k-1] = temp;
			}
		}
	}
	
	for(i = 0; i < 4; ++i){
		cout << x[i] << endl;
	}
	
	return 0;
}