#include <stdio.h>
#include <conio.h>
#include <string.h>

void dodai(char a[100]) {
	int size = strlen(a);
	printf ("\nDo dai cua xau la: %d",size);
}

void chuhoa(char a[100]) {
	char b[100];
	strcpy(b,a);
	printf ("\nXau sau khi doi thang chua hoa la: %s",strupr(b));
}

void dem(char a[100]) {
	char check;
	printf ("\nNhap ky tu can dem: "); scanf("%c",&check);
	int count = 0;
	for (int i=0; i<strlen(a); i++) {
		if (a[i] == check) {
			count++;
		}
	}
	printf ("So ky tu trung voi ky tu vua nhap la: %d",count);
}

void daoxau(char a[100]) {
	printf ("\nXau theo thu tu nguoc lai la: %s",strrev(a));
}

int main() {
	char xau[100];
	printf ("Nhap xau: "); fflush(stdin); gets(xau);

	
	dodai(xau);
	chuhoa(xau);
	dem(xau);
	daoxau(xau);

	getch();
}