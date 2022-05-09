#include <iostream>
#include <conio.h>
#include "kasus5.h"

using namespace std;

class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
	friend istream& operator >> (istream&, Kelas&);
	
public:
	void panggil();
	
private:
	int a, b;
	float hasil;
	
};

istream& operator >> (istream& in, Kelas& inp) {
	cout << "Masukkan bilangan: ";
	in >> inp.a;
	cout << "Mau dipangkat berapa: ";
	in >> inp.b;
}

void Kelas::panggil() {
	hasil = pangkat(a, b);
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out << endl << outp.a << " pangkat " << outp.b << " = " << outp.hasil;
}

main() {
	Kelas n;
	cin >> n;
	n.panggil();
	cout << n;
	
	getch();
}
