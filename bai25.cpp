#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	int n;
	float S=0;
	printf ("Nhap n: ");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++) {
		S += (pow(-1,i+1)*(1.0/(2*i)));
	}
	printf ("S = %.2f",S);
	getch();
}