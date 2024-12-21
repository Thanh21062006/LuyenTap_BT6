#include <stdio.h>

int main() {
	int password = 18, numb;
	printf("Moi ban nhap vao mat khau can tim: ");
	scanf("%d", &numb);
	
	if(numb == password){
		printf("mat khau ban nhap dung roi");
	}
	else{
		printf("Mat khau ban nhap sai roi");
	}
	return 0;
}
