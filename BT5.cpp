#include <stdio.h>

int main(){
	int day, month, year;
	printf("Moi ban nhap vao thag can tim: ");
	scanf("%d", &month);
	printf("Moi ban nhap vao so nam can tim: ");
	scanf("%d", &year);
	
	if(year < 0){
		printf("Nam nhap khong hop le!");
	}
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
		case 2:
			if(year % 4 == 0){
				if(year % 100 != 0 || year % 400 == 0){
					day = 29;
					break;
				}
				else{
					day = 28;
					break;
				}
			}
		default:
			printf("Thang khong hop le!");	
	}
	if(year > 0){
		if(month > 0 && month <= 12){
			printf("Ngay %d thang %d nam %d.", day, month, year);
		}
	}
	return 0;
}
