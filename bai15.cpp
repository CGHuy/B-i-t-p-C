#include <stdio.h>
#include <conio.h>
#include <string.h>

main () {
	int a, b;
	char ch;
	printf ("Nhap vao a, b: ");
	scanf ("%d %d",&a,&b);
	printf ("Lua chon phep tinh: ");
	fflush(stdin);
	ch = getchar();
	switch(ch) {
		case '+' :
			printf ("Tong la: %d",a+b);
			break;
		case '-' :
			printf ("Hieu la: %d",a-b);
			break;
		case '*' :
			printf ("Tich la: %d",a*b);
			break;
		case '/' :
			printf ("Thuong la: %.1f",float(a/b));
			break;
		default:
			printf ("Phep tinh khong ton tai!");
	}
	getch();
}
