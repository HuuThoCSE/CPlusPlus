//Chapter2_Lession8
#include<iostream>
using namespace std;
main(){
	int N;
	float s;
	cout <<"Nhap vao 1 so nguyen duong: "; cin >>N;
	if(N<=0) cout << "Khong phai la so nguyen duong";
	else {
		s = 0;
		for(int i=1; i<=N; i++){
			s = s+((float)i/(i+1));
		}
		cout << "Tong S=1/2 + 2/3 + 3/4 +...+ n/(n+1) la: " <<s;
	}
}
