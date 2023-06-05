#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int a;
	int i;
	int max;
	printf("Nhap so a:");
	scanf("%d",&a);
	do{
    	i = a % 10;
    	if(i > max){
      		max = i;
		}
  	}while(a /= 10);
  printf("chu so lon nhat la: %d",max);

	return 0;
}

