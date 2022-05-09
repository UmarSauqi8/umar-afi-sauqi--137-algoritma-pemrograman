#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int m, n, q, r;
		cout<<"Diketahui Bilangan bulat bentuk m = q x n + r \n";
		cout<<"Masukkan nilai m : ";cin>>m;
		cout<<"Masukkan nilai n : ";cin>>n;
		cout<<"================================\n"<<endl;
		
	if (n < m){
		q = m / n;
		r = m % n;
		cout<<"Bentuk bilangan bulat "<<m<<" = "<<q<<" x "<<n<<" + "<<r;
	}
	
	else {
		cout<<"NILAI M TIDAK BOLEH LEBIH KECIL DARI N !";
	} 
	
	return 0;
}
