//Chapter2_Lession2
#include<iostream>
using namespace std;
main(){
	int songuyen; 
	cout << "Nhap vao mot so nguyen: "; cin >> songuyen;
	if (songuyen < 0)
		cout << "La so am." << endl;
	else 
		if (songuyen > 0)
			cout << "La so duong." << endl;
		else 
			cout << "Khong la so duong, khong la so am." << endl;
	if((songuyen%2)==0)
		cout << "La so chan";
	else 
		cout << "La so le";
}
