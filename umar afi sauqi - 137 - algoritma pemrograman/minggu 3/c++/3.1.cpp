#include <iostream>
#include <conio.h>
using namespace std;

class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
	friend istream& operator >> (istream&, Kelas&);
	
public:
	void bandingkan() {
		if (A > B) {
			hasil=A;
		}
		else{
			hasil=B;
		}
	}
	
private:
	int A, B, hasil;
};

istream& operator >> (istream& in, Kelas& inp) {
	cout<<"=====MASUKAN BILANGAN====="<<endl;
	cout << "Bilangan Pertama: ";
	in >> inp.A;
	cout << "Bilangan Kedua: ";
	in >> inp.B;
	cout <<"==================="<<endl;
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out <<"Nilai terbesar adalah " <<outp.hasil;
}

main() {
	Kelas n;
	cin >> n;
	n.bandingkan();
	cout << n;
	
	getch();
}
