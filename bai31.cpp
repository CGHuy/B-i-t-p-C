#include <stdio.h>
#include <conio.h>
#include <math.h>

void nhap(int a[][100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf ("Gia tri cua a[%d][%d] la: ",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
}

void xuat(int a[][100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf ("%d\t",a[i][j]);
		}
		printf ("\n");
	}
}

void tong(int a[][100], int b[][100], int c[][100], int n) {
	printf ("\nMA TRAN C=A+B LA\n");
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	xuat(c,n);
}

void hieu(int a[][100], int b[][100], int c[][100], int n) {
	printf ("\nMA TRAN C=A-B LA\n");
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	xuat(c,n);
}

void tich(int a[][100], int b[][100], int c[][100], int n) {
	printf ("\nMA TRAN C=A*B LA\n");
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			c[i][j]=0;
			for (int k=0; k<n; k++) {
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	xuat(c,n);
}

int main () {
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int n;
	int chon;
	printf ("2 ma tran vuong co kich thuoc n = "); scanf ("%d",&n);
	printf ("\nNHAP MA TRAN A\n");
	nhap(a,n);
	printf ("\nMA TRAN A LA\n");
	xuat(a,n);
	printf ("\nNHAP MA TRAN B\n");
	nhap(b,n);
	printf ("\nMA TRAN B LA\n");
	xuat(b,n);
	printf ("\nMENU\n");
	printf ("1. In ra ma tran C=A+B\n");
	printf ("2. In ra ma tran C=A-B\n");
	printf ("3. In ra ma tran C=A*B\n");
	printf ("NHAP YEU CAU CUA BAN: "); scanf ("%d",&chon);
	switch (chon) {
		case 1:
			tong(a,b,c,n);
			break;
		case 2:
			hieu(a,b,c,n);
			break;
		case 3:
			tich(a,b,c,n);
			break;
		default:
			printf ("Yeu cau khong ton tai!");
	}
	getch();
}