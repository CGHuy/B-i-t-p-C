#include <stdio.h>
#include <conio.h>

void nhap(int a[][100], int n, int m) {
	printf ("\nNHAP GIA TRI CUA MA TRAN\n");
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			printf ("Gia tri a[%d][%d] la: ",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
}

void xuat(int a[][100], int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m ;j++) {
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");
	}
}

void sxtang(int a[][100], int n, int m) {
	int k = m*n;
	for (int i=0; i<k-1; i++) {
		for (int j=i+1; j<k; j++) {
			if (a[i/m][i%m]>a[j/m][j%m]) {
				int temp = a[i/m][i%m];
				a[i/m][i%m] = a[j/m][j%m];
				a[j/m][j%m] = temp;
			}
		}
	}
	printf ("\nMa tran tang dan la\n");
	xuat(a,n,m);
}

void sxgiam(int a[][100], int n, int m) {
	int k = m*n;
	for (int i=0; i<k-1; i++) {
		for (int j=i+1; j<k; j++) {
			if (a[i/m][i%m]<a[j/m][j%m]) {
				int temp = a[i/m][i%m];
				a[i/m][i%m] = a[j/m][j%m];
				a[j/m][j%m] = temp;
			}
		}
	}
	printf ("\nMa tran giam dan la\n");
	xuat(a,n,m);
}

void TangTheoDong(int a[][100], int n, int m) {
	for (int i=0; i<n ;i++) {
		for (int j=0; j<m-1; j++) {
			for (int k=j+1; k<m; k++) {
				if (a[i][j]>a[i][k]) {
					int temp = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}
	printf ("\nMa tran tang theo dong la\n");
	xuat(a,n,m);
}

void GiamTheoDong(int a[][100], int n, int m) {
	for (int i=0; i<n ;i++) {
		for (int j=0; j<m-1; j++) {
			for (int k=j+1; k<m; k++) {
				if (a[i][j]<a[i][k]) {
					int temp = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}
	printf ("\nMa tran giam theo dong la\n");
	xuat(a,n,m);
}

void TangTheoCot(int a[][100], int n, int m) {
	for (int j=0; j<m; j++) {
		for (int i=0; i<n-1; i++) {
			for (int k=i+1; k<n; k++) {
				if (a[i][j]>a[k][j]) {
					int temp = a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = temp;
				}
			}
		}
	}
	printf ("\nMa tran tang theo cot la\n");
	xuat(a,n,m);
}

void GiamTheoCot(int a[][100], int n, int m) {
	for (int j=0; j<m; j++) {
		for (int i=0; i<n-1; i++) {
			for (int k=i+1; k<n; k++) {
				if (a[i][j]>a[k][j]) {
					int temp = a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = temp;
				}
			}
		}
	}
	printf ("\nMa tran giam theo cot la\n");
	xuat(a,n,m);
}

void MinMax(int a[][100], int n, int m) {
	int max = a[0][0];
	int min = a[0][0];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (max<a[i][j]) max = a[i][j];
			if (min>a[i][j]) min = a[i][j];
		}
	}
	printf ("\nGia tri lon nhat cua ma tran la: %d",max);
	printf ("\nGia tri nho nhat cua ma tran la: %d",min);
}

void invien(int a[][100], int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (i==0 || j == 0 || i==n-1 || j==m-1) {
				printf ("%d\t",a[i][j]);
			} else {
				printf ("\t");
			}
		}
		printf ("\n");
	}
}

int main (){
	int a[100][100];
	int n,m;
	int chon;
	do {
	printf ("Nhap so dong: "); scanf ("%d",&n);
	printf ("Nhap so cot: "); scanf ("%d",&m);
	} while (n <= 0 || m <= 0);
	nhap(a,n,m);
	printf ("\nMA TRAN DA NHAP LA\n");
	xuat(a,n,m);
	printf ("\nMENU\n");
	printf ("1. Sap xep ma tran theo chieu tang, giam\n");
	printf ("2. Sap xep ma tran tang dan theo dong\n");
	printf ("3. Sap xep ma tran tang dan theo cot\n");
	printf ("4. Sap xep ma tran giam dan theo dong\n");
	printf ("5. Sap xep ma tran giam dan theo cot\n");
	printf ("6. Tim so nho nhat, lon nhat cua mang\n");
	printf ("7. In cac phan tu tren duong vien cua ma tran\n");
	printf ("\nNHAP YEU CAU: "); scanf ("%d",&chon);
	switch (chon) {
		case 1:
			sxtang(a,n,m);
			sxgiam(a,n,m);
			break;
		case 2:
			TangTheoDong(a,n,m);
			break;
		case 3:
			TangTheoCot(a,n,m);
			break;
		case 4:
			GiamTheoDong(a,n,m);
			break;
		case 5:
			GiamTheoCot(a,n,m);
			break;
		case 6:
			MinMax(a,n,m);
			break;
		case 7:
			invien(a,n,m);
			break;
		default:
			printf ("Yeu cau khong ton tai");
			break;
	}
	getch();
}
