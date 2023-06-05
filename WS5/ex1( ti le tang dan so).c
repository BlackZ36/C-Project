#include<stdio.h>

int main(){
	int i,j,n;
	n=6000000;
	for (i = 1; i <= 10; i++){
       n +=n*0.018;
   }
   printf("Dan so sau 10 nam voi ti le tang 1.8%: %d",n);
}
