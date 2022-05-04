//Chalter2_Lesstion19
#include<iostream>
using namespace std;
main(){
	int N, max;
	do {
		cout <<"Nhap vao 1 so nguyen duong: "; cin >>N;
		if(N<=0) cout << "Khong phai la so nguyen duong. Xin nhap lai!" << endl;
	} while(N<=0);
	for(int i=1;i<=N;i++){
		if(N%i==0){
			if(i%2==1){
				if(i>max){
					max=i;
				}	
			}
		}
	}
	cout << "Uoc so le lon nhat cua "<<N<<" la "<<max;
}
