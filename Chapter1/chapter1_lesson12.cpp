#include<iostream>
using namespace std;
main(){
	int a, b, t;
	cout << "Nhap so nguyen a: ";
	cin >> a;
	cout << "Nhap so nguyen b: ";
	cin >> b;
	t = a;
	a = b;
	b = t;
	cout << "Gia gia cua a = " << a <<", b = " << b << ".\n";
	
	cout << "Nhap so nguyen a: ";
	cin >> a;
	cout << "Nhap so nguyen b: ";
	cin >> b;
	a=a-b;
	a=a+b;
	b=a+b;
	cout << "Gia gia cua a = " << a <<", b = " << b << ".";
}
