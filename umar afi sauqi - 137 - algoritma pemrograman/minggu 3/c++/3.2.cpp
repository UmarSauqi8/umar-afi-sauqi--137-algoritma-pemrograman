#include <iostream>
#include <conio.h>
#define LIMIT 3 
using namespace std;

class Kelas {
	friend ostream& operator<<(ostream&, const Kelas&);
	friend istream& operator>>(istream&, Kelas&);
	
public:
	void bandingkan() {
		for (int i = 0; i < LIMIT; i++) {
			if (A[i] > hasil) {
				hasil = A[i];}
		}
	}
	
private:
	int A[LIMIT], hasil;
};

istream& operator >> (istream& in, Kelas& inp) {
	for (int i = 0; i < LIMIT; i++) {
		cout << "Bilangan ke-" << i + 1 << ": ";
		in >> inp.A[i];
		cout<<"====================="<<endl;
	}
}

ostream& operator << (ostream& out, const Kelas& outp) {
	out << "\nBilangan Terbesar Adalah = " << outp.hasil;
}

main() {
	Kelas n;
	cin >> n;
	n.bandingkan();
	cout << n;
	
	getch();
}
