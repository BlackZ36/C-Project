#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	float a,b,c,i,j,k;
	int check=0,check1=0;
	printf("nhap 3 so a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c) && (a+c>b) && (b+c>a)){
		printf("\n1. a=%g b=%g c=%g la canh cua tam giac",a,b,c);
	}
	else
		printf("\n1. a=%g b=%g c=%g KHONG phai la canh cua tam giac");
	//
	if(a==b || b==c || a==c){
		printf("\n2. abc la tam giac can");
		check=1;
	}
	else
		printf("\n2. abc khong la tam giac can");
	//
	if(a==b && a==c){
		printf("\n3. abc la tam giac deu");
	}
	else
		printf("\n3. abc KHONG la tam giac deu");
	//
	if(( c*c==a*a+b*b) || (b*b==c*c+a*a) || (a*a==b*b+c*c) ){
		printf("\n4. abc la tam giac vuong.");
		check1=1;
	}
	else
		printf("\n4. abc KHONG la tam giac vuong");
	//
	if(check==1 && check1==1){
		printf("\n5. abc la tam giac vuong can.");
	}
	else
		printf("\n5. abc KHONG la tam giac vuong can");

	return 0;
}

