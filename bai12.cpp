#include <stdio.h>
#include <conio.h>
#include <string.h>

main () {
	char hoten[30];
	char xeploai;
	int tongdiem;
	printf ("Nhap ho ten: "); gets(hoten); fflush(stdin);
	printf ("Nhap tong diem: "); scanf ("%d",&tongdiem);
	if (tongdiem >= 0 && tongdiem <= 10) {
		if (tongdiem <= 5) {
			printf ("Xep loai kem");
		} else if (tongdiem > 5 && tongdiem <= 7) {
			printf ("Xep loai trung binh");
		} else if (tongdiem > 7 && tongdiem < 8) {
			printf ("Xep loai kha");
		} else if (tongdiem > 8) {
			printf ("Xep loai gioi");
		}
	} else {
		printf ("Diem khong hop le");
	}
}