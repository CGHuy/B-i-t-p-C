#include <stdio.h>
#include <conio.h>
#include <math.h>

main () {
	for (int i=100; i<1000; i++) {
		int a = i/100;
		int b = (i%100)/10;
		int c = i%10;
		if (a+b+c==9) {
			printf ("%d co tong 3 chu so: %d+%d+%d=9\n",i,a,b,c);
		}
	}
	getch();
}