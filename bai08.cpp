#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	int so;
	printf ("Nhap so: ");
	scanf ("%d", &so);
	int hangtram = so / 100;
	int phanduhangtram = so % 100;
	int hangchuc = phanduhangtram / 10;
	int phanduhamchuc = phanduhangtram % 10;
	printf ("\nChu so hang tram: %d", hangtram);
	printf ("\nChu so hang chuc: %d", hangchuc);
	printf ("\nChu so hang don vi: %d", phanduhamchuc);
	getch();
}
