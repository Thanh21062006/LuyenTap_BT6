#include <stdio.h>

int main() {
	int n, j = 2, check, count = 0;
	printf("Moi ban nhap vao so luong so nguyen to: ");
	scanf("%d", &n);
	
	printf("\n%d so nguyen to dau tien la: ",n);
	while(count < n){
		check = 1;
		for(int i = 2;i * i <= j;i++ ){
			if(j % i == 0){
				check = 0;
				break;
			}
		}
		if(check){
			printf("%d ", j);
			count++;
		}
		j++;
	}
	return 0;
}
