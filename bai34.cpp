#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char xau[100];
	char check;
	printf ("Nhap xau: "); fflush(stdin); gets(xau);
	printf ("Ket qua la: ");
	for (int i=0; i<strlen(xau); i++) {
		if (xau[i] != check) {
			check = xau[i];
			int count = 0;
			int duyet = i;
			while (xau[duyet] == check) {
				count++;
				duyet++;
			}
			printf ("%d%c",count,check);
		}
	}
	getch();
}