#include <iostream>
#include <conio.h>
#include "kasus5.h"

using namespace std;

class Kelas {
	friend ostream& operator << (ostream&, const Kelas&);
};

ostream& operator << (ostream& out, const Kelas& outp) {
	out << "Maksimum 2 bilangan = " << max(99, 77);
	out << "\nMaksimum 3 bilangan = " << max(55, 66, 33);
}

main() {
	Kelas n;
	cout << n;
	
	getch();
}
