#include<iostream>
using namespace std;

class Fakt{
	private:
		int a,n;
	public:	
		void in();
		void out();
};

void Fakt::in(){
	cout<<"Menghitung nilai faktorial dengan fungsi rekursif"<<endl;
	cout<<"Masukkan nilai	: ";cin>>a;
}

long int faktorial(int a){ //REKURSIFNYA
	if((a==0) || (a==1)){
		return 1;
	}else{
		return a*faktorial(a-1);
	}
}

long int faktorial2(int a){//ITERATIF
	for(int i=1; i<a; i++){
		int hasil = hasil *= i; 
	 	cout<<i<<"! = "<<hasil<<endl; 
	} 
}

void Fakt::out(){
	cout<<"Hasil faktorial dari (rekursif)	: "<<a<<"! = "<<faktorial(a)<<endl;
	cout<<"Hasil faktorial dari (iteratif)	: "<<endl;
	cout<<faktorial2(a)<<endl;
}

main()
{
	Fakt z;
	z.in();
	z.out();
	return 0;
}
