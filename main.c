#include <stdio.h>
#include"complex.h"

/*2. Să se dezvolte un modul pentru operaţii cu numere complexe. Să se utilizeze acest
modul pentru efectuarea operaţiei de împărţire a două numere complexe. */

nr_complex nr1;
nr_complex nr2;


int main() {
	nr_complex suma;
	nr_complex diferenta;
	nr_complex produs;
	nr_complex rest;
	nr_complex conj;

	scanf_s("%d%d%d%d", &(nr1.x), &(nr1.y), &(nr2.x), &(nr2.y));
	printf("Primul numar este : %d + %di", nr1.x, nr1.y);
	printf("\nAl doilea numar este : %d + %di", nr2.x, nr2.y);
	suma = adunare(nr1, nr2);
	diferenta = scadere(nr1, nr2);
	produs = inmultire(nr1, nr2);
	rest = impartire(nr1, nr2);
	conj = conjugat(nr1);

	printf("\nConjugatul primului numar: ");
	printf("%d+( %d)i",conj.x,conj.y);
	printf("\nSuma celor doua numere: ");
	printf("%d + %di",suma.x,suma.y );
	printf("\nDiferenta celor doua numere: ");
	printf("%d+(%d)i",diferenta.x,diferenta.y);
	printf("\nModulul primului numar este: ");
	printf("%lf", modul(nr1));
	printf("\nProdusul celor doua numere: ");
	printf("%d + %di", produs.x , produs.y);

	printf("\nRestul impartirii celor 2 numere este: ");

	printf("%d + %di",rest.x,rest.y);


	return 0;
}