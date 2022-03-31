#include<iostream>
#include<math.h>
using namespace std;
main(){
	double a, b, c, cv, p, dt;
	cout << "Nhap vao chieu day 3 canh cua 1 tam giac: " << endl;
	cin >> a >> b >> c;
	cv = a + b + c;
	p = cv/2;
	dt = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "Chu vi cua tam gia la: " << cv << endl;
	cout << "Dien tich cua tam gia la: " << dt;
}
