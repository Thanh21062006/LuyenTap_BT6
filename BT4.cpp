#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, delta, x1, x2, check;
	printf("Moi ban nhap vao so a: ");
	scanf("%f", &a);
	printf("Moi ban nhap vao so b: ");
	scanf("%f", &b);
	printf("Moi ban nhap vao so c: ");
	scanf("%f", &c);
	
		delta = (float)b*b-4*(a*c);
			
		if(delta > 0){
			x1 = (-b + sqrt(delta))/(2*a); 
			x2 = (-b + sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f; x2 = %.2f", x1, x2);
		}
		else{
			if(delta == 0){
				printf("Phuong trinh co nghiem kep: x = %.2f",-b/(2*a));
			}
			else{
			printf("Phuong trinh vo nghiem!");
			}
		}
		
	
	return 0;
}
