#include<iostream>
using namespace std;
main(){
	int a, t, so4, so3, so2;
	cout << "Nhap vao mot so nguyen gom 4 chu so: ";
	cin >> a;
	t = a;
	so4 = t%10;
	t=t/10;
	so3 = t%10;
	t=t/10;
	so2 = t%10;
	t=t/10;
	cout << "Tong la: " << so4 + so3 + so2 + t << endl;
	cout << "So dau la: " << t << endl;
	cout << "So cuoi la: " << so4 << endl;
}
