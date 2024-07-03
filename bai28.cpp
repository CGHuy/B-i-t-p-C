#include <stdio.h>
#include <conio.h>
#include <math.h>

void nhap(int a[100], int n) {
	for (int i=0; i<n; i++) {
		printf ("Gia tri cua a[%d] la: ",i); scanf ("%d",&a[i]);
	}
}

void xuat(int a[100], int n) {
	for (int i=0; i<n; i++) {
		printf ("%d ",a[i]);
	}
}

void sxtang(int a[100], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf ("\nDay so theo chieu tang dan la: ");
	xuat(a,n);
}

void sxgiam(int a[100], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf ("\nDay so theo chieu giam dan la: ");
	xuat(a,n);
}

void tbcsl(int a[100], int n) {
	float s = 0;
	int count = 0;
	for (int i=0; i<n; i++) {
		if (a[i]%2!=0) {
			s += a[i];
			count++;
		}
	}
	printf ("\nTrung binh cong so le la: %.2f",s/count);
}

void minmax(int a[100], int n) {
	int min = a[0];
	int max = a[0];
	for (int i=1; i<n; i++) {
		if (min > a[i]) min = a[i];
		if (max < a[i]) max = a[i];
	}
	printf ("\nMin la: %d",min);
	printf ("\nMax la: %d",max);
}

int ktsnt(int n) {
	if (n==0 || n==1) return 0;
	if (n==2 || n==3) return 1;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0)  return 0;
		return 1;
	}
}

void tbcsnt(int a[100], int n) {
	float s = 0;
	int count = 0;
	for (int i=0; i<n; i++) {
		if (ktsnt(a[i])==1) {
			s += a[i];
			count++;
		}
	}
	printf ("\nTrung binh cong so nguyen to la: %.2f",s/count);
}

int ktscp(int n) {
	for (int i=0; i<=sqrt(n); i++) {
		int can=sqrt(n);
		if (pow(can,2)==n) return 1;
		return 0;
	}
}

void scp(int a[100], int n) {
	printf ("\nCac so chinh phuong la: ");
	for (int i=0; i<n; i++) {
		if (ktscp(a[i])==1) {
			printf ("%d ",a[i]);
		}
	}
}

int ktshh(int n) {
	if (n==0 || n==1) return 0;
	int s = 1;
	for (int i=2; i<n; i++) {
		if (n%i==0) {
			s += i;
		}
	}
	if (s == n) return 1;
	return 0;
}

void shh(int a[100], int n) {
	printf ("\nCac so hoan hao la: ");
	for (int i=0; i<n; i++) {
		if (ktshh(a[i])==1) {
			printf ("%d ",a[i]);
		}
	}
}

void yc8(int a[100], int n) {
	float s = 0;
	int count = 0;
	for (int i=0; i<n; i++) {
		if (a[i]%6==0 && a[i]%10==2) {
			s += a[i];
			count++;
		}
	}
	printf ("\nTrung binh cong cac so chia het cho 6 va co tan cung bang 2 la: %.2f",s/count);
	
}


int main() {
	int a[100];
	int n;
	int chon;
	printf ("Nhap do dai cua day so n = "); scanf ("%d",&n); 
	nhap(a,n);
	printf ("Day da nhap la: ");
	xuat(a,n);
	printf ("\n\nMENU\n");
	printf ("1. Sap xep day so theo chieu tang dan");
	printf ("\n2. Sap xep day so theo chieu giam dan");
	printf ("\n3. Tinh trung binh cong so le");
	printf ("\n4. Tim phan tu lon nhat, nho nhat");
	printf ("\n5. Trung binh cong cac so nguyen to");
	printf ("\n6. Cac so chinh phuong la");
	printf ("\n7. Cac so hoan hao la");
	printf ("\n8. Trung binh cong cac so chia het cho 6 va co tan cung la 2");
	printf ("\nNHAP YEU CAU CUA BAN: "); scanf ("%d",&chon);
	switch (chon) {
		case 1:
			sxtang(a,n);
			break;
		case 2:
			sxgiam(a,n);
			break;
		case 3:
			tbcsl(a,n);
			break;
		case 4:
			minmax(a,n);
			break;
		case 5:
			tbcsnt(a,n);
			break;
		case 6:
			scp(a,n);
			break;
		case 7:
			shh(a,n);
			break;
		case 8:
			yc8(a,n);
			break;
		default:
			printf ("\nYeu cau khong ton tai!");
	}
	
	getch();
}