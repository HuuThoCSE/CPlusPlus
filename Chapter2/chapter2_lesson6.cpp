//Chapter2_Lession6
#include<iostream>
using namespace std;
main(){
	float a, b, ketqua;
	char toantu;
	cout << "Nhap vao 2 so a, b: " << endl; cin >>a>>b;
	cout << "Nhap vao toan tu (+, -, *, /): " << endl; cin >>toantu;
	switch(toantu){
		case '+': ketqua = a+b; break;
		case '-': ketqua = a-b; break;
		case '*': ketqua = a*b; break;
		case '/': ketqua = a/b; break;
		default: cout << "Khong phai la toan tu.";
	}
	cout << "Phep tinh " <<a<<toantu<<b<<" = "<<ketqua; 
}
