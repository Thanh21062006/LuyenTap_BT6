#include <stdio.h>

int main() {
	int numb;
	printf("Moi ban nhap vao mot so bat ki: ");
	scanf("%d", &numb);
	
	printf("tat ca cac uoc cua %d la: ",numb);
	for(int i = 1;i <= numb;i++){
		if(numb % i == 0){
			printf("%d ",i);
		}
	}
	return 0;
}
