//Chapter2_Lession11
#include<iostream>
using namespace std;
main(){
	int n, i, j;
	do{
		cout <<"Nhap vao 1 so nguyen duong: "; cin >>n;
		if(n<0) cout << "Khong phai la so nguyen duong\n";
	} while (n < 0);
	
	for(i=1;i<=n;i++){
		for(j=1; j<=i;j++){
			cout << '@';
		}
		cout << endl;
	}
}
