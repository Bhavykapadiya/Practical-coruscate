#include <stdio.h>
void main() {
	int i, j=5, k, l;
	char ch="A";
	for (i=1;i<=4;i++) {
		for (k=1;k<=j;k++) {
			printf(" ");
		}
		for (l=1;l<=i;l++) {
            printf("%c",(char)(l+96));
            ch++;
			printf("%d",i);
			printf(" ");
		}
		printf("\n");
		j=j-1;
	}
}
