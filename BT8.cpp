#include <stdio.h>
#include <math.h>

int main(){
	float total, phanTram, lai, months;
	printf("Moi ban nhap vào so tien can gui: ");
	scanf("%f", &total);
	printf("Moi ban nhap lai xuat thang: ");
	scanf("%f", &phanTram);
	printf("Moi ban nhap so thang can gui: ");
	scanf("%f", &months);
	
	phanTram = phanTram/100;
	float total1 = total * pow(phanTram+1, months);
	lai = total1 - total;
	
	printf("Tong so tien lai la: %.3f\n",lai);
	printf("Tong so tien la: %.3f",total1);
	return 0;
}
