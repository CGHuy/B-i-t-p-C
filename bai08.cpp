#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	int so;
	printf ("Nhap so: ");
	scanf ("%d", &so);
	int hangtram = so/100;
	int hangchuc = (so%100)/10;
	int hangdonvi = so%10;
	printf ("\nChu so hang tram: %d", hangtram);
	printf ("\nChu so hang chuc: %d", hangchuc);
	printf ("\nChu so hang don vi: %d", hangdonvi);
	getch();
}
