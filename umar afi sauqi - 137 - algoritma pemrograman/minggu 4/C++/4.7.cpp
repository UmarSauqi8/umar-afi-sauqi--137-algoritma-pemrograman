#include <iostream>
using namespace std;

int main(){
	int x,y,i;
	int pangkat=1;
	cout<<"menghitung hasil perpangkatan\n";
	cout<<"Tulis sebuah bilangan : ";cin>>x;
	cout<<"Mau dipangkat berapa : ";cin>>y;
	for(i=1; i<=y; i++)
	pangkat*=x;
	cout<<x<<" pangkat "<<y<<" = " <<pangkat;
	return 0;
}
