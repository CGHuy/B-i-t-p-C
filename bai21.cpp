#include <stdio.h>
#include <conio.h>
#include <math.h>

long long factorial(int n) {
	if (n == 0) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}

main() {
	int n;
	printf ("Nhap n: "); scanf ("%d",&n);
	printf ("Giai thua cua n la: %lld",factorial(n));
	getch();
}