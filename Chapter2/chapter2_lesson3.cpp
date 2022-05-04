//Chalter2_Lesstion3
#include<iostream>
using namespace std;
main(){
	float a, b, c, max, min;
	cout << "Nhap vao 3 so a, b, c: " << endl; cin >>a>>b>>c;
	// max	
	if(a>b&&a>c) max = a;
	else 
		if(b>a&&b>c) max = b;
		else max = c;
	// min	
	if(a<b&&a<c) min = a;
	else 
		if(b<a&&b<c) min = b;
		else min = c;
	cout << "Max la: " << max << endl;
	cout << "Min la: " << min;
}
