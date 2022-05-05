// Chapter3_Vd3_Tr51
#include<iostream>
using namespace std;
main(){
	int i, n, a[50], x;
	do {
		cout << "Nhap vao do dai cua mang: "; cin >> n;
	} while(n < 1 || n > 50);
	
	for(i=0; i<n;i++){
		cout << "[" <<i<<"] = "; cin >> a[i];
	}
	
	cout << "\n*** In gia tri trong mang---\n";
	
	for(i=0; i<n;i++){
		cout << a[i] << "\t";
	}
	
	cout << "\n*** Phan tu co noi dung la le---\n";
	int sophantule=0;
	for(i=0; i<n;i++){
		if(a[i]%2!=0) sophantule+=1;
	}
	cout << "So phan tu le la " << sophantule << endl;
	
	int k;
	long sum=0;
	cout << "\nNhap k = "; cin >> k;
	for(i=0; i<n;i++){
		if(a[i]%k==0) sum+=a[i];
	}
	cout << "Tong S cac phan tu là boi so cua k=" <<k<< " la " << sum << endl;
	
	cout << "\nNhap x = "; cin >> x;
	
	i=0;
	while (i < n && a[i]!=x) i++;
	if (i<n) cout << x << " xuat hien lan dau tien o vi tri " << i << " trong mang." << endl;
	
	//In ra mang tang dan
	for(i=0; i<n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	cout << "\nMang theo chieu tang dan: " ;
	for(i=0; i<n; i++){
		cout << a[i] << "\t";
	}
	
}
