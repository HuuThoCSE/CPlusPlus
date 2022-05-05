// (Weed3)_chapter3_vd4_tr54
#include<iostream>
using namespace std;
main(){
	float a[50], x, y, max, tich;
	int n, i, j, vt;
	
	do {
		cout << "Nhap vao do dai mang: "; cin >> n;
	} while(n < 0 || n > 50);
	
	//Nhap mang
	for(i=0; i<n;i++){
		cout << "[" << i<< "]="; cin>> a[i]; 
	}
	
	//In mang
	cout << "Gia tri mang vua nhap: ";
	for(i=0; i<n;i++){
		cout << a[i] << "\t"; 
	}
	cout << endl;
	
	cout << "Nhap vao gia tri x = "; cin >> x;
	cout << "Nhap vao vi tri: "; cin >> vt;
	
	// Them phan tu vao vi tri vt
	cout << "Nhap phan tu can them: "; cin >> x;
	do {
		cout << "Nhap vi tri can them: "; cin >> vt;
	} while (vt < 0 || vt > n);
	
	for(i=n-1; i>=vt;i--) a[i+1] = a[i];
	
	a[vt] = x;
	n = n+1;
	cout << "Mang vua them la: " << endl;
	for(i=0; i < n; i++) cout << a[i] << "\t";
	cout << endl;
	
	//Tim phan tu lon nhat xuat hien sau cung
	max = a[0];
	for(i=1; i<n;i++)
		if(max < a[i]) max=a[i];
	i=n-1;
	while (a[i] != max) i--;
	cout << "Vi tri xuat hien sau cung cua ";
	cout << "phan tu lon nhat la: " << i << endl;
	
	//Tinh tich cac phan tu duong o vi tri le
	tich = 1;
	for(i=0; i < n; i++)
		if(i%2!=0 && a[i] > 0) tich*=a[i];
	cout << "Tich cac phan tu duong nam o cac vi tri le";
	cout << "la: " << tich << endl;
	
	//Xoa tat ca cac phan tu co noi dung la y
	cout << "Nhap phan tu can xoa: "; cin >> y;
	i = 0;
	while (i<= n -1)
		if(a[i]==y){
			for(j=i; j <= n-2; j++)
				a[j] = a[j+1];
			n--;
		}
		else i+=1;
	cout << "Mang sau khi xoa la: " << endl;
	for(i=0; i < n; i++) cout << a[i] << "\t";
}
