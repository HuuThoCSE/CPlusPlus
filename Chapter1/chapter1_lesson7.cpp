#include<iostream>
#include<math.h>
using namespace std;
main(){
	int a,b,c, tong;
	cout << "Nhap vao 3 so nguyen: \n";
	cin >> a >> b >> c;
	cout << "\n------------------------------\n";
	cout << "Trung binh cong cua 3 so nguyen: " << (a+b+c)/3 << endl;
	cout << "Trung binh nhan cua 3 so nguyen: " << pow(a + b + c, 1.0/3) << endl;
}
