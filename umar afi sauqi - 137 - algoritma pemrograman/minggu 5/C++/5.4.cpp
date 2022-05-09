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
	
};

istream& operator >> (istream& in, Kelas& inp) {
	cout << "Masukkan bilangan: ";
	in >> inp.a;
	cout << "Akan dikali dengan: ";
	in >> inp.b;
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out << endl << outp.a << " kali " << outp.b << " = " << kali(outp.a, outp.b);
}

main() {
	Kelas n;
	cin >> n;
	cout << n;
	
	getch();
}
