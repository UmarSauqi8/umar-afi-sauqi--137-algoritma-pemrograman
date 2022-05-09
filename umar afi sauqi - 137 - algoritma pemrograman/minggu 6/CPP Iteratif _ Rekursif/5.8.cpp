#include<iostream>
using namespace std;

class Gcd{
	private:
		int a,b;
	public:
		void in();
		void out();
		process();
};

void Gcd::in(){
	cout<<"Menghitung FPB/GCD antara 2 bilangan "<<endl;
	cout<<"Masukkan Nilai A	: ";cin>>a;
	cout<<"Masukkan Nilai B	: ";cin>>b;
}

Gcd::process(){	//ITERATIFNYA
	while(a!=b)
	{
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}
	cout<<"Hasil FPB fungsi itertif	: "<<a<<endl;
}

int fpb2(int a, int b){ //REKURSIF
	int c = a%b;
	if (c!=0){
		while(c!=0){
			a=b;
			b=c;
			c=a%b;
			return b;
		}
	}
}

void Gcd::out(){
	cout<<"Hasil FPB fungsi rekursif	: "<<fpb2(a,b)<<endl;
}

main()
{
	Gcd z;
	z.in();
	z.out();
	z.process();
}
