//Chalter2_Lesstion21
#include<iostream>
using namespace std;
main(){
	int n;
	do{
		cout << "Nhap vao 1 so nguyen duong lon hon 1: "; cin>>n;
	} while(n<=1);
	unsigned int i=2;
	cout << n << " = ";
	while(n>1){
		if(n%i==0){
			cout << i;
			if(n!=i){
				cout << 'x';
			}
			n /= i;
		} else {
			i++;
		}
	}
}
