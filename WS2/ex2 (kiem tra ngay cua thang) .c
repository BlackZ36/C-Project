#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int a=0,b,c,i,j,k;
	while( !(a>=1 && a<=12) ){
		printf("Nhap 1 thang trong nam: ");
		scanf("%d",&a);
	}
	
	switch(a){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay",a);
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d co 30 ngay",a);
			break;
		case 2:
			printf("Nhap them so nam: ");
			scanf("%d",&b);
			if(b%4==0 && b%100!=0){
				printf("Thang %d nam %d co 29 ngay",a,b);
			}
			else if(b % 400 ==0){
				printf("Thang %d nam %d co 29 ngay",a,b);
			}
			else
				printf("Thang %d nam %d co 28 ngay",a,b);
			break;	
	}	

	return 0;
}

