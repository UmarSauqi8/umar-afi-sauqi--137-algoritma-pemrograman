#include<iostream>
using namespace std;

class Fibonacci{
	private:
		int n,k,l=0;
	public:
		void in();
		void out();
};

void Fibonacci::in(){
	cout<<"Menghitung deret fibonacci"<<endl;
	cout<<"Masukkan batas	: ";cin>>n;
}

int fibonaci(int n){// ITERATIFNYA
	int f1=0,f2=1,berikutnya=0;
	for (int i = 1; i <= n; ++i){
        if(i == 1){
            cout << " " << f1<<" ";
            continue;
        }if(i == 2){
            cout << f2 << " ";
            continue;
        }
        berikutnya = f1 + f2;
        f1 = f2;
        f2 = berikutnya;
        cout << berikutnya << " ";
    }
}

int fibonaci2(int n){ // REKURSIFNYA
	if((n==0) || (n==1)){
		return n;
	}else{
		return (fibonaci2(n-1) + fibonaci2(n-2));
	}
}

void Fibonacci::out(){
	int j=0;
	cout<<"fibonacci (rekursif)"<<endl;
	for(k=1;k<=n;k++){
		cout<<"Fibonacci ke-"<<k<<" = "<<fibonaci2(j)<<endl;
		j++;
	}
	cout<<"fibonacci (iteratif)"<<endl;
	cout<<fibonaci(n)<<endl;
}

main(){
	Fibonacci o;
	o.in();
	o.out();
	return 0;
}
