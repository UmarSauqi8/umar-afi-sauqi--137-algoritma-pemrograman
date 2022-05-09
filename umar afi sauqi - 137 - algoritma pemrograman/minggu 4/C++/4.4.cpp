#include <iostream>
using namespace std;

int main(){
	int n=1, jumlah=0,x;
	float rata;
	cout<<"Data ke-1 : ";
	cin>>x;
	while(x>0){
		jumlah +=x;
		cout<<"Data ke-"<<n+1<<" : ";
		cin>>x;
		n++;
	}
	rata= (float)jumlah/(n-1);
	cout<<"Rata-rata = "<<rata;
	return 0;
}
