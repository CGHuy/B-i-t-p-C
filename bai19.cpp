#include <stdio.h>
#include <conio.h>

main() {
	int n;
	int sum=0;
	printf ("Nhap so nguyen n la: "); scanf ("%d",&n);
	for (int i=1; i<=n; i++) {
		if (i%2==0) {
			sum += i;
		}
	}
	printf ("Tong cac so chan tu 1 den n la: %d",sum);
	getch();
}
