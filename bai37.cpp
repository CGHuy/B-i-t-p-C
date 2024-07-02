#include <stdio.h>
#include <conio.h>
#include <string.h>

struct sach {
	char masach[10];
	char tensach[50];
	char tacgia[50];
	int namxb;
};

sach nhap() {
	sach a;
	printf ("\nNhap ma sach: "); fflush(stdin); gets(a.masach);
	printf ("Nhap ten sach: "); fflush(stdin); gets(a.tensach);
	printf ("Nhap ten tac gia: "); fflush(stdin); gets(a.tacgia);
	printf ("Nhap nam xuat ban: "); scanf ("%d",&a.namxb);
	return a;
}

void xuat(sach a) {
	printf ("%-5s%-25s%-25s%4d\n",a.masach,a.tensach,a.tacgia,a.namxb);
}

int main() {
	sach a[100];
	int n;
	printf ("Nhap so sach: "); scanf ("%d",&n);
	for (int i=0; i<n; i++) {
		a[i] = nhap();
	}
	
	printf ("\nNhung quyen sach co ten ngan hon tin hoc dai cuong\n");
	char chuoi[] = "tin hoc dai cuong";
	for (int i=0; i<n; i++) {
		if (strlen(a[i].tensach) < strlen(chuoi)) {
			xuat(a[i]);
		}
	}
	
	printf ("\nDanh sach cac quyen sach theo thu tu\n");
	for (int i=0; i<n-1; i++) {
		for (int j=i; j<n; j++) {
			if (strcmp(a[i].tensach,a[j].tensach) > 0) {
				sach temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i=0; i<n; i++) {
		xuat(a[i]);	
	}
	
	getch();
}
