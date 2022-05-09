#include<iostream>
#include<math.h>
using namespace std;

class Perkalian{
	private:
		int x,y,i;
		int jumlah=0;
	public: 
		void in();
		void out();
};

void Perkalian::in(){
	cout<<"Perkalian X dan Y menggunakan operator pernjumlahan"<<endl;
	cout<<"Masukkan bilangan X	: ";cin>>x;
	cout<<"Masukkan bilangan Y	: ";cin>>y;
}

int kali(int x, int y){//ITERATIF
	for(int i=1;i<=y;i++){
		int jumlah=i*x;
		cout<<i<<" X "<<x<<" = "<<jumlah<<endl;
	}
}

int kali2(int x, int y){// REKURSIFNYA
	if (y==1){
		return x;
	}
	else{
		if(y<0){
			return (-x) + kali2(-x, abs(y)-1);
		}
		else{
			return x + kali2(x, y-1);
		}
	}
}
	
void Perkalian::out(){
	cout<<"Hasil dari perkalian iteratif"<<endl;
	cout<<kali(x,y)<<endl;
	cout<<"Hasil dari perkalian rekursif = "<<kali2(x,y)<<endl;
}

main()
{
	Perkalian z;
	z.in();
	z.out();
	return 0;
}
