//Chalter2_Lesstion17
#include<iostream>
using namespace std;
main(){
	float sothuc;
	do {
		cout << "Nhap vao so thuc: "; cin >> sothuc;
		if(sothuc!=0) {
			sothuc*=-1;
			cout << "So doi cua so thuc la " << sothuc << endl;
			cout << "----------------------"<< endl;
		}
	} while (sothuc!=0);
}
