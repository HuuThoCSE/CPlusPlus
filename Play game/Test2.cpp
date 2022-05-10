// Tim cac phan tu xuat hien 1 lan
#include<iostream>
using namespace std;
main(){
	int a[50], i, n, j, dem;
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

    for(i=0;i<n;i++){
       dem =0;
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j]&&i!=j)
              dem =1;
       }
       if(dem==0)
          cout << a[i] << "\t";
    }
}
