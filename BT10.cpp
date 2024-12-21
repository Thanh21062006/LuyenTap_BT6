#include <stdio.h>

int main() {
	int number, check;
	printf("Moi ban nhap mot so bat ki de kiem tra so nguyen to: ");
	scanf("%d", &number);
	
	if(number < 2){
		check = 0;
	}
	else{
	if(number == 2){
		check = 1;
	}
	else{
		for(int i = 2;i < number;i++){
			check = 1;
			if(number % i == 0){
				check = 0;
				break;
				}
			}
		}
	}
	
	if(check){
		printf("%d la so nguyen to!", number);
	}
	else{
		printf("%d khong phai la so nguyen to!", number);
	}
	return 0;
}
