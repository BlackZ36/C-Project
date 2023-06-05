#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a;
	printf("Nhap so nam san xuat cua may tinh: ");
	scanf("%d",&a);
	if(a>=15){
		printf("Thay the");
	}
	else if(a>= 10 && a <15){
		printf("Bao tri");
	}
	else
		printf("khong co de xuat");


	return 0;
}

