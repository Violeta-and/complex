#include <math.h>
#include "complex.h"

nr_complex adunare(nr_complex a, nr_complex b) {
	nr_complex S;
	S.x = a.x + b.x;
	S.y = a.y + b.y;
	return S;

}


nr_complex scadere(nr_complex a, nr_complex b) {
	nr_complex S;
	S.x = a.x - b.x;
	S.y = a.y - b.y;
	return S;
}


double modul(nr_complex a) {
	return sqrt(((a.x)*(a.x))+((a.y)*(a.y)));
}


nr_complex inmultire(nr_complex a, nr_complex b) {
	nr_complex S;
	S.x = a.x * b.x - a.y * b.y;
	S.y = a.x * b.y + a.y * b.x;
	return S;

}


nr_complex impartire(nr_complex a, nr_complex b) {
	nr_complex S;
	S.x = ((a.x)*(b.x)+(a.y)*(b.y)) /((a.x)*(a.x) + (a.y)*(a.y)) ;
	S.y =-((a.x)*(b.y)+(a.y)*(b.x))  / ((a.x) * (a.x) + (a.y) * (a.y));
	return S;
}


nr_complex conjugat(nr_complex a) {
	nr_complex S;
	S.x = a.x;
	S.y = - a.y;

	return S;
}