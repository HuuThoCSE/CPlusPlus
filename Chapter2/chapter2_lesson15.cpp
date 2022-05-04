//Chalter2_Lesstion15
#include<iostream>
using namespace std;
main(){
	int n, sumsoduong=0, sumsoam=0;
	do {
		cout << "Nhap vao so nguyen: "<< endl; cin >>n;
		if(n < 0) sumsoam+=1;
		else if (n>0) sumsoduong+=1;
	} while (n!=0);
	cout << "Tong so duong: "<<sumsoduong<<endl;
	cout << "Tong so am: "<<sumsoam;
}
