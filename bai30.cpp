#include <stdio.h>
#include <conio.h>

void nhap(int a[][100], int n) {
	printf ("\nNHAP MA TRAN\n");
	for (int i=0; i<n ;i++) {
		for (int j=0; j<n; j++) {
			printf ("Gia tri cua a[%d][%d] la: ",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
}

void xuat(int a[][100], int n) {
	printf ("\nTA CO MA TRAN\n");
	for (int i=0; i<n ;i++) {
		for (int j=0; j<n; j++) {
			printf ("%d\t",a[i][j]);
		}
		printf ("\n");
	}
}

void mttren(int a[][100], int n) {
	printf ("\nMa tran tren la\n");
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (j>=i) {
				printf ("%d\t",a[i][j]);
			} else {
				printf ("0\t");
			}
		}
		printf ("\n");
	}
}

void mtduoi(int a[][100], int n) {
	printf ("\nMa tran duoi la\n");
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (j<=i) {
				printf ("%d\t",a[i][j]);
			} else {
				printf ("0\t");
			}
		}
		printf ("\n");
	}
}

void mtcheo(int a[][100], int n) {
	printf ("\nMa tran cheo la\n");
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (j==i) {
				printf ("%d\t",a[i][j]);
			} else {
				printf ("0\t");
			}
		}
		printf ("\n");
	}
}

void mtchuyenvi(int a[][100],int n) {
	int b[100][100];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			b[i][j] = a[j][i];
		}
	}
	printf ("\nSAU KHI CHUYEN VI");
	xuat(b,n);
}

void tbck(int a[][100], int n, int k) {
	printf ("\nNhap k co gia tri la (1<=k<=n): "); scanf ("%d",&k);
	float sum = 0;
	int count = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (i==k-1 || j==k-1) {
				sum += a[i][j];
				count++;
			}
		}
	}
	printf ("Trung binh cong cac phan tu o hang k, cot k la: %.2f",sum/count);
}

void tbc(int a[][100], int n) {
	float sum = 0;
	int count = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (i==j || i+j==n-1) {
				sum += a[i][j];
				count ++;
			}
		}
	}
	printf ("\nTrung binh cong cac phan tu nam tren duong cheo chinh va duong cheo phu la: %.2f",sum/count);
}

int main() {
	int a[100][100];
	int n,k;
	printf ("Nhap ma vuong co n = "); scanf ("%d",&n);
	nhap(a,n);
	xuat(a,n);
	int chon;
	printf ("\nMENU\n");
	printf ("1. In ra ma tran tam giac tren, ma tran tam giac duoi\n");
	printf ("2. In ra ma tran cheo\n");
	printf ("3. In ra ma tran chuyen vi\n");
	printf ("4. Tinh trung binh cong cac phan tu o hang k, cot k\n");
	printf ("5. Tinh trung binh cong cac phan tu nam tren duong cheo chinh va duong cheo phu\n");
	printf ("NHAP YEU CAU: "); scanf ("%d",&chon);
	switch (chon) {
		case 1:
			mttren(a,n);
			mtduoi(a,n);
			break;
		case 2:
			mtcheo(a,n);
			break;
		case 3:
			mtchuyenvi(a,n);
			break;
		case 4:
			tbck(a,n,k);
			break;
		case 5:
			tbc(a,n);
			break;
		default:
			printf ("Yeu cau khong ton tai!");
	}
	getch();
}
