#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void duavedangchuan(char a[100], char b[100]) {
	for (int i=0; i<strlen(a); i++) {
		if (isalnum(a[i]) == 0) {
			a[i] = ' ';
		}
	}
	char *token = strtok(a," ");
	while (token != NULL) {
		strcat(b,token);
		strcat(b," ");
		token = strtok(NULL," ");
	}
	printf ("\na. Xau sau khi loai bo ky tu vo nghia la: %s",b);
}


void dem_max(char a[100]) {
	char b[50][100]; // khai báo mảng tối đa 50 từ, mỗi từ 100 ký tự 
	char *token = strtok(a," ");
	int count = 0;
	
	// đếm số từ của xâu
	while (token != NULL) {
		strcpy(b[count],token);
		count++;
		token = strtok(NULL," ");
	}
	printf ("\nc. So tu cua xau la: %d",count);
	
	// từ có độ dài lớn nhất
	int size[count];
	for (int i=0; i<count; i++) {
		size[i] = strlen(b[i]);
	}
	int max = 0;
	for (int i=0; i<count; i++) {
		if (size[max] < size[i]) {
			max = i;
		}
	}
	printf ("\nd. Tu co do dai lon nhat la tu: %s",b[max]);
}

int main() {
	char xau[100];
	char dangchuan[100]="";
	printf ("Nhap xau: "); fflush(stdin); gets(xau);
	
	//dua xau ve dang chuan
	duavedangchuan(xau,dangchuan);
	
	//chu cai dau viet hoa
	dangchuan[0] = toupper(dangchuan[0]);
	printf ("\nb. Xau sau khi chu cai dau viet hoa la: %s",dangchuan);
	
	//dem so tu trong sau va dua ra tu co do dai lon nhat
	dem_max(dangchuan);
	
	getch();
}