#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	float a,b,check;
	printf("nhap so A: ");
	scanf("%f",&a);
	if(a == (int)a ){
		printf("1. N la so nguyen");
	}
	else
		printf("1. N la so thuc");
	if((int)a%2==0){
		printf("\n2. N la so chan");
	}
	else
		printf("\n2. N la so le");
	if((int)a%2==0 && a>0){
		printf("\n3. N la so chan duong");
	}
	else
		printf("\n3. N khong phai la so chan duong");
	if((int)a%2!=0 && a<0){
		printf("\n4. N la so le am");
	}
	else
		printf("\n4. N khong phai la so le am");
	if(a>0 && (sqrt(a)==(int)sqrt(a))){
		printf("\n5. N la so chinh phuong");
	}
	else
		printf("\n5. N khong phai la so chinh phuong");
	int d=a;
	int donvi = d%10;
	int chuc = d/10%10;
	int tram = d/100%10;
	if( pow(donvi,3)+pow(chuc,3)+pow(tram,3) == d){
		printf("\n6. N la so dac biet");
	}
	else
		printf("\n6. N khong phai so dac biet");
	
	return 0;
}

