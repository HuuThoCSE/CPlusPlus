//Chapter2_lesstion19_page47
#include<iostream>
using namespace std;
main(){
	int N, i, max;
	do {
		cout <<"Nhap vao 1 so nguyen duong: "; cin >>N;
		if(N<=0) cout << "Khong phai la so nguyen duong. Xin nhap lai!" << endl;
	} while(N<=0);
	
	i=N-1;
	while(N%i!=0||i%2==0) i--;
	cout << "Uoc so le lon nhat cua "<<N<<" la "<< i;
}
