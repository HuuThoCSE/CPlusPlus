//chapter2_lesstion10_page46
#include<iostream>
using namespace std;
main(){
	int n, m;
	float s=0;
	do {
		cout <<"Nhap vao 2 so nguyen duong: "<< endl; cin >>n>>m;
		if(n<0 && m<0) cout << "Khong phai la so nguyen duong" << endl;
	} while(n<0 && m<0);
	
	for(int i=1; i <= n; i++){
		for(int j=1; j <= m; j++) s+=(i+2*j);	
	}
	cout << "Tong S = " <<s;
}
