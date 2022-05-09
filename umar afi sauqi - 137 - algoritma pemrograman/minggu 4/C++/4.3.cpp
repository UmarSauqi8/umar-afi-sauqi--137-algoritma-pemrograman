#include <iostream>
using namespace std;

int main(){
	int i,n,jumlah,x;
	float rata;
	cout<<"banyak data : ";
	cin>>n;
	jumlah=0;
	for (i=1;i<=n;i++){
		cout<<"Data ke-"<<i<<" : ";
		cin>>x;
		jumlah +=x;
	}
	rata = (float)jumlah/n;
	cout<<"rata-rata = "<<rata;
	return 0;
}
