//Chapter2_lession13_page47
#include<iostream>
#include<math.h>
using namespace std;
main(){
	int n, i;
	float x, tuso, e;
	long gt;
	do {
		cout << "Nhap vao so nguyen duong n: "; cin >> n;
		if (n<0) cout << "Hay nhap vao so nguyen duong!!! \n";
	} while (n < 0);
	cout << "Nhap vao so thuc x: "; cin >> x;
	
	e = 1;
	tuso = 1;
	gt = 1;
	for(i=1; i<=n; i++){
		tuso*=x;
		gt*=i;
		e+=pow(-1, i+1)*(tuso/gt);
	}
	
	cout << "e = " << e;
}

