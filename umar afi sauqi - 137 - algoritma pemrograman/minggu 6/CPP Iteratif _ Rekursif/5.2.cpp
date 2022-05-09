#include<iostream>
using namespace std;

class kelas{
	private:
		int a,b;
		int hasil;
	public:
		void in();
		void out();
};

void kelas::in(){
	cout<<"Menentukan nilai max dari 2 bilangan A dan B"<<endl;
	cout<<"Masukkan Nilai A	: ";cin>>a;
	cout<<"Masukkan Nilai B	: ";cin>>b;
}

int max2(int a, int b){//ITERATIVE
	int x,y,batas,max=0;
	cout<<"Masukkan batas input bilangan	: ";cin>>batas;
	for(x=1;x<=batas;x++)
	{
		cout<<"Bilangan	: ";cin>>y;
		if(y>max)
		{
			max=y;
		}
	}
	cout<<endl;
	cout<<"Bilangan terbesar	: "<<max<<endl;
}

int max(int a, int b){ //REKURSIF
	int hasil = a>b;
	if(a<b)
	{
		cout<<"Bilangan terbesar adalah B = ";
		return b;
	}
	else{
		cout<<"Bilangan terbesar adalah A = ";
		return hasil;
	}
}

void kelas::out(){
	cout<<max(a,b)<<endl;
	cout<<"=========================="<<endl;
	cout<<max2(a,b)<<endl;
}

main()
{
	kelas z;
	z.in();
	z.out();
	return 0;
}
