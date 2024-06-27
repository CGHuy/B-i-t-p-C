#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	float a, b;
	printf ("Phuong trinh co dang ax+b=0");
	printf ("\nNhap a, b: ");
	scanf ("%f %f",&a,&b);
	float x = -b/a;
	printf ("Nhiem cua phuong trinh %.0fx+%.0f=0 la x = %.1f",a,b,x);
	getch();
}
