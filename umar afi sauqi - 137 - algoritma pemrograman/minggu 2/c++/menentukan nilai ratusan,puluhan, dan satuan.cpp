#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i;
	int rat,pul,sat;
	
	cout<<"PROGRAM MENENTUKAN NILAI RATUSAN PULUHAN SATUAN"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"masukan angka : ";cin>>i;
	if (i<1000){
		rat=i/100;
		pul=(i-rat*100)/10;
		sat=(i-rat*100-pul*10);
		
		cout<<"Nilai "<<rat<<" adalah ratusan"<<endl;
		cout<<"Nilai "<<pul<<" adalah puluhan"<<endl;
		cout<<"Nilai "<<sat<<" adalah satuan"<<endl;
	}
	else
	{
		cout<<"Nilai terlalu besar!!!"<<endl;
	}
	return 0;
}

