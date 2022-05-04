//Chapter2_Lession7
#include<iostream>
using namespace std;
main(){
	int N;
	long s;
	cout <<"Nhap vao 1 so nguyen duong: "; cin >>N;
	if(N<=0) cout << "Khong phai la so nguyen duong";
	else {
		s=1;
		for(int i=1; i <= N; i++){
			s = i*s;
		}
		cout << "Tich "<<N<<" so nguyen dau tien la: " <<s;
	}
		
}
