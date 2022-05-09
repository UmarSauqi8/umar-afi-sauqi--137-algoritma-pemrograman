#include<iostream>
using namespace std;

class Pangkat{
	private:
		int x,y;
	public:
		void masukan();
		void outline();
};

void Pangkat::masukan(){
	cout<<"Menghitung bilangan berpangkat dengan cara rekursif"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Masukkan bilangan X = ";
	cin>>x;
	cout<<"Masukkan bilangan Y = ";
	cin>>y;
}

long int iteratif(int x, int y){//ITERATIF
	int total=1,nilai=x,i;
	for(i=1;i<=y;i++)
	{
		total=total*nilai;
	}
		cout<<endl;
	cout<<"Hasil iteratif	: "<<total<<endl;
}

long int rekursif(int x, int y) {//REKURSIF
		int hasil;
		if (y==0)
		return 1 ;
		else 
		hasil = x * rekursif(x,y-1);
		return hasil;
}

void Pangkat::outline(){
	int hasil;
	if(y==0)
	{
		cout<<"Nope";
	}
	else{
		hasil = x * rekursif(x,y-1);
	}
	cout<<"Hasil rekursif	:  "<<hasil<<endl;
	cout<<endl;
	cout<<iteratif(x,y)<<endl;
}

main(){
	Pangkat x;
	x.masukan();
	x.outline();
	return 0;
}

