//Chapter2_Lession5
#include<iostream>
using namespace std;
main(){
	float dcb, dnc, dtb; 
	cout << "Nhap vao diem co ban, diem nang cao:" << endl; cin >>dcb>>dnc;
	dtb = (dcb+dnc)/2.0;
	cout << "Xep loai: ";
	if(dtb>=9 && dcb>=8 && dnc>=8)  cout << "Xuat sac.";
	else 
		if(dtb>=8 && dcb>=7 && dnc>=7) cout << "Gioi.";
		else 
			if(dtb>=7 && dcb>=6 && dnc>=6) cout << "Kha.";
			else 
				if(dtb>=5 && dcb>=3 && dnc>=3) cout << "Trung binh.";
				else cout << "Khong dat.";
}
