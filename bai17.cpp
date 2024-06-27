#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	int count = 1;
	for (int i=1; i<4; i++) {
		for (int j=1; j<10; j++) {
			for (int k=1; k<20; k++) {
				if (i*5000+j*2000+k*1000==20000) {
					printf ("\nPhuong an %d la: i=%d, j=%d, k=%d",count,i,j,k);
					count++;
				}
			}
		}
	}
	getch();
}