//chapter2_lession12_page47
#include<iostream>
using namespace std;
main(){
	int cd, cr;
	cout << "Nhap vao chieu dai: "; cin >> cd;
	cout << "Nhap vao chieu rong: "; cin >> cr; cout << endl;
	for(int i=1; i <= cd; i++){
		for(int j=1; j <= cr; j++) cout << '*';
		cout << endl;
	}
}
