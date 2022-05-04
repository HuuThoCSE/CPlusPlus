//Chapter2_Lession1
#include<iostream>
using namespace std;
main(){
	char kytu;
	cout << "Nhap 1 ky tu: "; cin >> kytu;
	if((kytu >= 'a' && kytu <= 'z')||(kytu >= 'A' && kytu <='Z'))
		cout << "La chu cai." << endl;
	else cout << "Khong la chu cai." << endl;
}
