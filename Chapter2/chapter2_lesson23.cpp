//Chalter2_Lesstion23
#include<iostream>
using namespace std;
main(){
	int n,s=1;
	float giaithua=1;
	cout << "Nhap vao 1 gia tri luong Epsilon: "; cin >>n;
	int i=0;
	lap:i++;
	if(i<=n){
		for(int j=1;j<=i;j++) {
			giaithua=giaithua*j;
		}
		s=s+(1/giaithua);
		goto lap;
	}
	cout << "Gia tri e la "<<s; 
}
