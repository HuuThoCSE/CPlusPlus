#include<iostream>
using namespace std;
main(){
	int a[50], n, i, dem;
	long s;
	do {
		cout << "Nhap vao do dai mang: "; cin >> n;
	} while (n < 0 || n > 50);
	
	for(i =0; i < n; i++){
		cout << "[" << i << "] = "; cin >> a[i];
	}
	
	cout << "Mang vua nhap: " << endl;
	for(i=0; i < n; i++){
		cout << a[i] << "\t";
	}
	
	// In ra vi tri cac phan tu lon nhat co trong day
	
	// Tinh tri trung binh cua ca phan tu duong co trong day.
	s = 0;
	dem = 0;
	for(i=0; i < n; i++){
		if(a[i] > 0) {
			dem++
			s+=a[i];
		}
	}
	cout << "Gia tri trung binh cua cac phan tu duong: " << s/dem;
}
