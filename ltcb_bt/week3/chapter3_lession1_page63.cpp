//Chapter3_lession1_page63
#include<iostream>
#include<math.h>
using namespace std;
main(){
	int n, i, a[50];
	do {
		cout << "Nhap vao do dai cua mang: "; cin >> n;
	} while(n < 1 || n > 50);
	
	for(i=0; i<n;i++){
		cout << "[" <<i<<"] = "; cin >> a[i];
	}
	
	cout << "\n*** In gia tri trong mang theo thu tu nguoc---\n";
	
	for(i=n-1; i>=0;i--){
		cout << a[i] << "\t";
	}
	cout << endl;
	
	// So phan tu co noi dung la so nguyen to
	int count = 0, dem_snt=0;
	for(i=0; i<n;i++){
    	for(int j = 2; j <= sqrt(i); j++){
        	if(i % j == 0){
            	count++;
        	}
    	}
    	if(count == 0) dem_snt++;
	}
	
	cout << "\nCo " << dem_snt << " so nguyen to." << endl;
	
	int k;
	long s=1;
	cout << "\nNhap k = "; cin >> k;
	for(i=0; i<n; i++){
		if(k%a[i]==0) s*=a[i];
	}
	cout << "Tich cac phan tu la uoc so cua " << k << " la " << s << endl;
	
	int X, m;
	cout << "\nNhap vao phan tu: "; cin >> X;
	cout << "Lan thu: "; cin >> m;
	
	int dem=0; i=0;
	while (i<=n-1 && dem < m){
		if(a[i] == X) dem ++;
		i++;
	}
	if(i <= n) cout << "Vi tri " << i - 1;
	else cout << "Khong co";
	
//	cout << "Phan tu " << X << " xuat hien lan thu " << m << " tai vi tri thu " << vt << " trong mang." << endl;
	
	//In ra mang tang dan
	for(i=0; i<n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] < a[j]){
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	cout << "\nMang theo chieu giam dan: " ;
	for(i=0; i<n; i++){
		cout << a[i] << "\t";
	}
	
}
