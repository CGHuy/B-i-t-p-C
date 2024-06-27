#include <stdio.h>
#include <conio.h>
#include <math.h>

int giaithua(int n) {
	if (n==1) {
		return 1;
	} else {
		return n*giaithua(n-1);
	}
}

main() {
	int n;
	int S = 0;
	printf ("Nhap n: "); scanf ("%d",&n);
	for (int i=1;i<=n;i++) {
		S = S + (pow(-1,i+1)*giaithua(i));	
	}
	printf ("S = %d",S);
	getch();
}