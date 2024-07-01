#include <stdio.h>
#include <conio.h>

int giaithua(int n) {
	int a = 1;
	for (int i=1;i<=n;i++) {
		a *= i;
	}
	return a;
}

main() {
	int n,k;
	float c;
	printf ("Nhap n: "); scanf ("%d",&n);
	printf ("Nhap k: "); scanf ("%d",&k);
	if (n>=k) {
		printf ("\nn giai thua la: %d",giaithua(n));
		printf ("\nk giai thua la: %d",giaithua(k));
		printf ("\nn-k giai thua la: %d",giaithua(n-k));
		c = giaithua(n) / (giaithua(k)*giaithua(n-k));
		printf ("\nTo hop chap k cua n la: %.2f",c);
	} else {
		printf ("n phai lon hon k");
	}
	getch();
}
