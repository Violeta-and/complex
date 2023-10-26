#pragma once

typedef struct complexe {
	int x;
	int y;

}nr_complex;

nr_complex conjugat(nr_complex a);
nr_complex adunare(nr_complex a, nr_complex b);
nr_complex scadere(nr_complex a, nr_complex b);
double modul(nr_complex a);
nr_complex inmultire(nr_complex a, nr_complex b);
nr_complex impartire(nr_complex a, nr_complex b);
