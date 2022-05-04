//Chapter2_Lession20
#include<iostream>
using namespace std;
main(){
	int n, f1, f2, f3;
	cout << "Nhap vao 1 so hang: "; cin >>n;
	f1 = 1;f2 = 1;
	for(int i=1; i<n; i++)
		if(i==1 || i==2) cout << 1 << ' ';
		else {
			f3 = f1 + f2;
			cout << f3 << ' ';
			f1 = f2;
			f2 = f3;
		}
}
