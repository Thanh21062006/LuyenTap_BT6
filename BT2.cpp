#include <stdio.h>

int main() {
	int numb1, numb2, numb3, numb4, numb5, le, chan;
	printf("Moi ban nhap vao so thu nhat: ");
	scanf("%d", &numb1);
	printf("Moi ban nhap vao so thu hai: ");
	scanf("%d", &numb2);
	printf("Moi ban nhap vao so thu ba: ");
	scanf("%d", &numb3);
	printf("Moi ban nhap vao so thu tu: ");
	scanf("%d", &numb4);
	printf("Moi ban nhap vao so thu nam: ");
	scanf("%d", &numb5);
	
	if(numb1 % 2 == 0){
		chan++;
	}
	if(numb2 % 2 == 0){
		chan++;
	}
	if(numb3 % 2 == 0){
		chan++;
	}
	if(numb4 % 2 == 0){
		chan++;
	}
	if(numb5 % 2 == 0){
		chan++;
	}
	le = 5 - chan;
	printf("co %d so chan va %d so le!", chan, le);
	return 0;
}
