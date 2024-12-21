#include <stdio.h>

int main() {
	int a=0, b=1, c=0 ,numb;
	printf("Moi ban nhap vao mot so nguyen bat ki: ");
	scanf("%d", &numb);
	printf("%d ",a);
	for(int i = 0;i < numb;i++){
		b = b+c;
		c = a;
		a = b;
		printf("%d ",a);
		
	}
	return 0;
	
}
