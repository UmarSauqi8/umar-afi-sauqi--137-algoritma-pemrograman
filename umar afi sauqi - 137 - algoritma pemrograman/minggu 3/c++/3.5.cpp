#include <iostream>
#include <conio.h>
using namespace std;

class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
	friend istream& operator >> (istream&, Kelas&);
	
public:
	void konversi() {
		switch(A) {
			case 1:
				hari = "Senin";
				break;
			case 2:
				hari = "Selasa";
				break;
			case 3:
				hari = "Rabu";
				break;
			case 4:
				hari = "Kamis";
				break;
			case 5:
				hari = "Jum'at";
				break;
			case 6:
				hari = "Sabtu";
				break;
			case 7:
				hari = "Minggu";
				break;
		}
	}	
private:
	int A;
	string hari;
	
};

istream& operator >> (istream& in, Kelas& inp) {
 cout<<"============================="<<endl;
 cout<< "Hari ke-";
 in >> inp.A;
 cout<<"============================="<<endl;
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out << "\nHari ke-" << outp.A << " adalah hari " << outp.hari;
}

main() {
	Kelas n;
	cin >> n;
	n.konversi();
	cout << n;
	
	getch();
}
