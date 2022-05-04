//Chalter2_Lesstion14_page47
#include<iostream>
using namespace std;
main(){
	int i;
	long gt=1;
	float x, e;
	
	do {
		cout << "Nhap vao 1 luong Epsilon (x>0): "; cin >> x;
		if( x < 0 ) cout << "Khong phai luong Epsilon!!! \n\n";
	} while (x < 0);
	
	e = 1;
	i = 1;
	
	do {
		e+=1.0/gt;
		i++; // (1)
		gt*=i; // (2) ; (1)+(2) => n! -> (n+1)! -> n!(n+1)
	} while (1.0/(gt*i) >=x);
	
	cout << "e = " << e;
}
