// Thay doi vi tri a[i] -> a[n-1]
#include<iostream>
using namespace std;
main(){
	int a[50], i, n, j;
	do{
		cout << "Nhap vao do dai mang: "; cin >> n;	
	} while(n < 0 || n > 50);
	
	for(i=0; i < n; i++){
		cout << "[" << i << "] = "; cin >> a[i];
	}
	
	for(i=0; i < n; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
	
	cout << "Chuoi nguoc chieu: ";
	int tam=0;
	for(i=0; i < n/2; i++){
		tam = a[i]; 
		a[i] = a[n-(i+1)]; 
		a[n-(i+1)] = tam;
	}
	cout << endl;
	
	for(i=0; i < n; i++){
		cout << a[i] << "\t";
	}
}
