#include <stdio.h>
#include <conio.h>

struct phanso {
	int tu, mau;
};

void nhap(phanso *ps) {
	printf ("Nhap tu so: ");
	scanf ("%d",&ps->tu);
	printf ("Nhap mau so: ");
	scanf ("%d",&ps->mau);
}

int ucln(int a, int b) {
	if (b==0) return a;
	return ucln(b,a%b);
}

void xuat(phanso ps) {
	int uc = ucln(ps.tu,ps.mau);
	ps.tu /= uc;
	ps.mau /= uc;
	printf ("%d/%d",ps.tu,ps.mau);
}

void tong(phanso a, phanso b) {
	phanso kq;
	kq.mau = a.mau * b.mau;
	kq.tu = a.tu*b.mau + b.tu*a.mau;
	xuat(kq);
}

void hieu(phanso a, phanso b) {
	phanso kq;
	kq.mau = a.mau * b.mau;
	kq.tu = a.tu*b.mau - b.tu*a.mau;
	xuat(kq);
}

void tich(phanso a, phanso b) {
	phanso kq;
	kq.mau = a.mau * b.mau;
	kq.tu = a.tu*b.tu;
	xuat(kq);
}

void thuong(phanso a, phanso b) {
	phanso kq;
	kq.mau = a.mau * b.tu;
	kq.tu = a.tu*b.mau;
	xuat(kq);
}

int main () {
	phanso a,b;
	printf ("Nhap vao phan so A\n");
	nhap(&a);
	printf ("Phan so A co dang ");
	xuat(a);
	printf ("\n");
	printf ("\nNhap vao phan so B\n");
	nhap(&b);
	printf ("Phan so B co dang ");
	xuat(b);
	printf ("\n\nTong 2 phan so la: ");
	tong(a,b);
	printf ("\nHieu 2 phan so la: ");
	hieu(a,b);
	printf ("\nTich 2 phan so la: ");
	tich(a,b);
	printf ("\nThuong 2 phan so la: ");
	thuong(a,b);
	getch();
}