//Chalter2_Lesstion3
#include<iostream>
using namespace std;
main(){
	float a, b, c;
	cout << "Nhap vao 3 so a, b, c: " << endl;
	cin >> a >> b >> c;
	if(a+b > c && a + c > b && b + c > a)
		cout << "La mot tam giac." << endl;
	else cout << "Khong la mot tam giac.";
}
