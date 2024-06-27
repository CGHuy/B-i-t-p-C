#include <stdio.h>
#include <conio.h>
#include <math.h>

long long decimal(int n) {
	long long binary = 0;
	int p = 0;
	while (n>0) {
		binary += (n%2) * pow(10,p);
		p++;
		n /= 2; 
	}
	return binary;
}
int binary(int n) {
	int decimal;
	int p = 0;
	while (n>0) {
		decimal += (n%10) * pow(2,p);
		p++;
		n /= 10;
	}
	return decimal;
}

main() {
	int n,m;
	printf ("Nhap so thap phan: ");
	scanf ("%d",&n);
	printf ("So nhi phan la: %lld\n",decimal(n));
	printf ("\nNhap so nhi phan: ");
	scanf ("%d",&m);
	printf ("So thap phan la: %d",binary(m));
	getch();
}
