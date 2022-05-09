#ifndef _KASUS_H
#define _KASUS_H
#include <math.h>

//Kasus 5.2
int max(int x, int y) {
	return (x > y ? x : y);
}
int max(int x, int y, int z) {
	int m = (x > y ? x : y);
	return (z > m ? z : m);
}

//Kasus 5.3
float pangkat(int x, int y) {
	return (exp(y * log(x)));
}

//Kasus 5.4
int kali(int m, int n) {
	int hasil = 0;
	for (int i = 1; i <= abs(n); i++) {
		hasil += m;
	}
	
	if (n < 0) {
		return -hasil;
	} else {
		return hasil;
	}
}

#endif
