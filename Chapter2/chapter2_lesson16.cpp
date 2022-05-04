//Chalter2_Lesstion16
#include<iostream>
#include<iomanip>
using namespace std;
main(){
	float tong=0.0, giatri, gttb, dem=0;
	do {
		cout << "Nhap vao so thuc: "<<endl; cin >> giatri;
		dem+=1;
		tong=tong+giatri;
	} while (giatri!=0);
	cout << "Gia tri trung binh cua cac so: " << setprecision(2) << fixed << tong/dem;
}
