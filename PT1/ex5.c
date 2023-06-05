#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	float a,b,c;
	
	printf("Nhap 3 diem thanh phan:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	float tong= a/4+b/4+c/2;
	printf("diem tong ket: %g",tong);
	return 0;
}

