//Chapter2_lesstion22_page47 -
#include<iostream>
using namespace std;
main(){
	int N, i;
	float s;
	do {
		cout <<"Nhap vao 1 so nguyen duong: "; cin >>N;
		if(N<=0) cout << "Khong phai la so nguyen duong. Xin nhap lai!" << endl;
	} while(N<=0);
	
	i=0;
	s=0;
	loop:i++;
	if(i<=N){
		s+=i/float(i+1);
		goto loop;
	}	
	
	cout << "Tong S la: " <<s;
		
}
