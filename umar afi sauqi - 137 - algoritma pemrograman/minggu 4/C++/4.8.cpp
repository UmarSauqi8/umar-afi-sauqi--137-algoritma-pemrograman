#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,i,jumlah=0;
	cout<<"Porgram menghitung perkalian dengan cara penjumlahan\n";
	cout<<"Masukan nilai a : ";cin>>a;
	cout<<"Masukan nilai b : ";cin>>b;
	for(i=1; i<=abs(b); i++)
		jumlah += a;
		if(b<0) jumlah =-jumlah;
	cout<<a<<" X "<<b<<" = " <<jumlah;
	return 0;
}
