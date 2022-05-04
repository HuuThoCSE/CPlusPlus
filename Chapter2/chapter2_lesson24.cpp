//Chalter2_Lesstion24
#include<iostream>
#include<iomanip>
using namespace std;
main(){
	float tong=0.0, giatri, gttb, dem=0;
	int i=0;
	lap:cout << "Nhap vao so thuc: "; cin >> giatri;
	if(giatri!=0){
		dem+=1; 
		tong=tong+giatri;
		goto lap;
	} 
	cout << "Gia tri trung binh cua cac so: " << setprecision(2) << fixed << tong/dem;
}
