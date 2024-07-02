#include <stdio.h>
#include <conio.h>

struct sinhvien {
	char hoten[50];
	int namsinh;
	float dtb;
};

sinhvien nhap() {
	sinhvien a;
	printf ("Nhap ten sinh vien: "); fflush(stdin); gets(a.hoten);
	printf ("Nhap nam sinh: "); scanf ("%d",&a.namsinh);
	printf ("Nhap diem trung binh: "); scanf ("%f",&a.dtb);
	return a;
}

void xuat(sinhvien a) {
	printf ("%-20s%4d\t%.2f\n",a.hoten,a.namsinh,a.dtb);
}


void giamdan(sinhvien a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i].dtb < a[j].dtb) {
				sinhvien temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			} 
		}
	}
	for (int i=0; i<n; i++) {
		printf ("%d. ",i+1);
		xuat(a[i]);
	}
}

int main() {
	sinhvien ds[100];
	int n;
	printf ("Nhap so sinh vien: "); scanf ("%d",&n);
	for (int i=0; i<n; i++) {
		printf ("\nTHONG TIN SINH VIEN %d\n",i+1);
		ds[i] = nhap();
	}
	
	printf ("\nDanh sach hoc sinh sep loai kha tro len\n");
	int j=1;
	for (int i=0; i<n; i++) {	
		if (ds[i].dtb >= 7) {
			printf ("%d. ",j++);
			xuat(ds[i]);
		} else {
			printf ("Khong co hoc sinh xep loai kha tro len\n");
		}
	}
	
	printf ("\nDanh sach hoc sinh co nam sinh < 1997\n");
	int k=1;
	for (int i=0; i<n; i++) {
		if (ds[i].namsinh < 1997) {
			printf ("%d. ",k++);
			xuat(ds[i]);
		} else {
			printf ("Khong co hoc sinh co nam sinh < 1997\n");
		}
	}
	
	printf ("\nDanh sach sinh vien theo thu tu diem trung binh giam dan\n");
	giamdan(ds,n);
	
	getch();
}