#include <iostream>

using namespace std;

void main () {
	int conta=0;
try{
	
	while(true){
		new int [1000000];
		conta++;
		cout << conta <<" \n";
	}
} catch( bad_alloc ){

	cout<<"\t\t!!!Out of Memmory!!!";
}
}