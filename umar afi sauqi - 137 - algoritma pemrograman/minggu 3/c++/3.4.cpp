#include <iostream>
#include <conio.h>
using namespace std;

class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
	friend istream& operator >> (istream&, Kelas&);
public:
	void konversi() {
		if ((A>=0) && (A<=20)) {
			hasil = 'E';
		} else if ((A>=21) && (A<=40)) {
			hasil = 'D';
		} else if ((A>=41) && (A<=60)) {
			hasil = 'C';
		} else if ((A>=61) && (A<=80)) {
			hasil = 'B';
		} else {
			hasil = 'A';
		}
	}
private:
	int A;
	char hasil;
};

istream& operator >> (istream& in, Kelas& inp) {
	cout << "Masukkan Nilai Anda : ";
	in >> inp.A;
	cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out << "\nNilai Dalam Huruf = " << outp.hasil;
}

main() {
	Kelas n;
	cin >> n;
	n.konversi();
	cout << n;
	
	getch();
}
