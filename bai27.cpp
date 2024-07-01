#include <stdio.h>
#include <conio.h>

long long ucln(long long a, long long b) {
	if (b==0) 
		return a;
	return ucln(b,a%b);
}

long long bcnn(long long a, long long b) {
	return a*b/ucln(a,b);
}

main() {
	int a,b;
	printf ("Nhap tu so: "); scanf ("%d",&a);
	printf ("Nhap mau so: "); scanf ("%d",&b);
	printf ("\nUoc chung lon nhat la: %lld",ucln(a,b));
	printf ("\nBoi chung nho nhat la: %lld",bcnn(a,b));
	printf ("\nToi gian cua phan so %d/%d la %lld/%lld",a,b,a/ucln(a,b),b/ucln(a,b));
	getch();
}
