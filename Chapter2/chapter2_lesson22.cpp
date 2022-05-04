//Chalter2_Lesstion22
#include<iostream>
using namespace std;
main(){
	int N;
	float s;
	do {
		cout <<"Nhap vao 1 so nguyen duong: "; cin >>N;
		if(N<=0) cout << "Khong phai la so nguyen duong. Xin nhap lai!" << endl;
	} while(N<=0);
	int i=0;
	lap:i++;
	if(i<=N){
		s = s+((float)i/(i+1));
		goto lap;
	}	
	cout << "Tong s la: " <<s;
		
}
