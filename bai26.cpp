#include <stdio.h>
#include <conio.h>
#include <math.h>

int snt(int n) {
	for (int i=2;i<=sqrt(n);i++) {
		if (n%i==0)
			return 0;
	}
	return n>1;
}

int cp(long long n) {
	long long can = sqrt(n);
	if (can*can==n)
		return 1;
	return 0;
}

main() {
	int n;
	printf ("Nhap n: ");
	scanf ("%d",&n);
	printf ("Danh sach cac so nguyen to la: ");
	for (int i=1;i<=n;i++) {
		if (snt(i)) {
			printf ("%d ",i);
		}
	}
	printf ("\nTrung binh cong cac so chinh phuong la: ");
	float S = 0;
	int count = 0;
	for (int i=1;i<=n;i++) {
		if (cp(i)) {
			S += i;
			count++;
		}
	}
	printf ("%.2f",S/count);
	getch();
}