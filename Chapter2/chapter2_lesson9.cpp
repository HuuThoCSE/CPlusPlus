//Chapter2_Lession9
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
			if(i%3==0) s=s-i;
			else s=s+i;
		}
		cout << "Tong S= 1 + 2 - 3 + 4 + 5 - 6 + 7 + 8 - 9 la " <<s;
	}
		
}
