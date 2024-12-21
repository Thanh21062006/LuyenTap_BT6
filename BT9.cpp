#include <stdio.h>

int main() {
	int a, b, c, check;
	printf("Cac so Armstrong co 3 chu so la: ");
	for(int i = 100;i <= 999;i++){
		a = i / 100;
		b = (i / 10) % 10;
		c = (i % 100) % 10;
		
		check = (a*a*a) + (b*b*b) + (c*c*c);
		
		if(check == i){
			printf("%d ",i);
		}
	}
	return 0;
}
