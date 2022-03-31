#include<iostream>
using namespace std;
main(){
	int a, b, c, d, tong, sohangchuc, sohangdonvi;
	cout << "Nhap vao 4 so nguyen: \n";
	cin >> a >> b >> c >> d;
	tong = a + b + c + d;
	cout << "\n-------------------------------\n";
	cout << "Tong cua 4 so nguyen: " << tong << endl;
	sohangchuc = (tong%100)/10;
	sohangdonvi = tong%10;
	cout << "Chu so hang chuc: " << sohangchuc << endl;
	cout << "Chu so hang don vi: " << sohangdonvi;
}
