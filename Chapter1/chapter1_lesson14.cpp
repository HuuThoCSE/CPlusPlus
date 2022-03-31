#include<iostream>
using namespace std;
main(){
	float chieucao, vongnguc, trongluong, so_pignet;
	cout << "Nhap vao chieu cao cua ban: ";
	cin >> chieucao;
	cout << "Nhap vao vong nguc cua ban: ";
	cin >> vongnguc;
	cout << "Nhap vao trong luong cua ban: ";
	cin >> trongluong;
	so_pignet=chieucao-(vongnguc + trongluong);
	cout << "Chi so pignet cua ban la: " << so_pignet;
}
