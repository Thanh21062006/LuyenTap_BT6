#include <stdio.h>

 int main() {
 	int numb1, numb2, numb3, numb4, numb5, total = 0;
 	printf("Moi ban nhap so thu nhat: ");
 	scanf("%d", &numb1);
 	printf("Moi ban nhap so thu hai: ");
 	scanf("%d", &numb2);
 	printf("Moi ban nhap so thu ba: ");
 	scanf("%d", &numb3);
 	printf("Moi ban nhap so thu tu: ");
 	scanf("%d", &numb4);
 	printf("Moi ban nhap so thu nam: ");
 	scanf("%d", &numb5);
 	
 	if(numb1 % 2 == 0){
 		total += numb1;
	 }
	 	if(numb2 % 2 == 0){
 		total += numb2;
	 }
	 	if(numb3 % 2 == 0){
 		total += numb3;
	 }
	 	if(numb4 % 2 == 0){
 		total += numb4;
	 }
	 	if(numb5 % 2 == 0){
 		total += numb5;
	 }
	 printf("%d", total);
	 
	 return 0;
}
 
