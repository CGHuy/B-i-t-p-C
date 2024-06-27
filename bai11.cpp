#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	float a, b, c, delta;
	printf ("Nhap a = "); scanf ("%f",&a);
	printf ("Nhap b = "); scanf ("%f",&b);
	printf ("Nhap c = "); scanf ("%f",&c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf ("Phuong trinh co vo so nhiem");
			} else {
				printf ("Phuong trinh vo nhiem");
			}
		} else {
			printf ("Phuong trinh co 1 nhiem duy nhat %.2f",-b/2a);
		}
	} else {
		delta = pow(b,2) - 4*a*c;
		if (delta > 0) {
			printf ("Phuong trinh co 2 nhiem phan biet la: %.2f, %.2f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		} else if (delta == 0) {
			printf ("Phuong trinh co nhiem kep la: %.2f",-b/(2*a));
		} else {
			printf ("Phuong trinh vo nhiem");
		}
	}
	getch();
}
