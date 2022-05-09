#include <iostream>
#include <string.h>
using namespace std;

int main(){

string gula;

	cout<<"1.Siapkan gelas, gula, teh celup , dan air panas"<<endl;
	cout<<"2.Masukan teh kedalam gelas" <<endl;
	cout<<"3.Kemudian masukan gula 1/2 sendok gula"<<endl;
	cout<<"4.kemudian seduh dengan air panas"<<endl;
	cout<<"5.Aduk gelas  kemudian angkat teh \n"<<endl;
	aduk:
	cout<<"apakah sudah pas? \n";
	cin>>gula;
	if(gula=="belum"){
		cout<<"masukan 1 sendok gula /n"<<endl;
	goto aduk;
	}
	else if(gula=="kemanisan"){
		cout<<"tambah air secukupya \n"<<endl;
	goto aduk;
	}	
	
	else if(gula=="sudah"){
		cout<<"6. Teh dapat di sajikan /n"<<endl;
	}
	return 0;
}
