#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
	friend istream& operator >> (istream&, Kelas&);
	
public:
	void perskuadrat() {
		if (A == 0) {
			disk = -C/B;
		} else {
			disk = B*B - 4*A*C;
			
			if (disk > 0) {
				x1 = -B + sqrt(disk) / (2 * A);
				x2 = -B - sqrt(disk) / (2 * A);
			} else if (disk == 0) {
				x1 = -B / (2 * A);
				x2 = x1;
			}
		}
	}
	
private:
	int A, B, C;
	long disk;
	float x1, x2;
	
};

istream& operator >> (istream& in, Kelas& inp) {
	cout<<"Masukan Koefisien"<<endl;
	cout << "Koefisien pangkat 2: ";
	in >> inp.A;
	cout << "Koefisien pangkat 1: ";
	in >> inp.B;
	cout << "Koefisien pangkat 0: ";
	in >> inp.C;
	cout<<"======================="<<endl;
}

ostream& operator << (ostream& out, const Kelas& outp) {
	if (outp.A == 0) {
		out << "bukan sebuah persamaan kuadrat\n";
		out << "akar = " << outp.disk;
	} else {
		if (outp.disk >= 0) {
			out << "diskriminan = " << outp.disk << endl;
			out << "x1 = " << outp.x1 << endl;
			out << "x2 = " << outp.x2 << endl;
		} else {
			cout << "\nAkar imajiner";
		}
	}
}

main() {
	Kelas n;
	cin >> n;
	n.perskuadrat();
	cout << n;
	getch();
}
