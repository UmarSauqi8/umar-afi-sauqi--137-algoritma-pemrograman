#include <iostream>

using namespace std;
int main(){
	int m,cm,in;
		cout<<"PROGRAM KONVERSI METER KE CM DAN INCI\n"<<endl;
		cout<<"Masukkan nilai meter : ";cin>>m;
			cm=m*100;
    	cout<<"Nilai cetimeter : "<<cm<<endl;
    		in=(m*100)/2.54;
    	cout<<"Nilai inci : "<<in<<endl;
	return 0;
}
