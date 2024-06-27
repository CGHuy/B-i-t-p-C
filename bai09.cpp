#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	float a, b, c;
	printf ("Nhap a, b, c: ");
	scanf ("%f %f %f",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a) {
		float cv = a+b+c;
		printf ("\nChu vi hinh tam giac la: %.0f",cv);
		float p = cv/2;
		float dt = sqrt(p*(p-a)*(p-b)*(p-c));
		printf ("\nDien tich hinh tam giac la: %.2f", dt);
	} else {
		printf ("\nKhong la tam giac!");
	}
	getch();
}
