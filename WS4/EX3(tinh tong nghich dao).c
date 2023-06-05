#include <conio.h>
#include <stdio.h>
	
int main(){
	float kq=0;
	int N,i;
	printf("nhap so N:");
	scanf("%d",&N);
	for( i=1;i<=N;i++){
		kq=kq+(float)1/i;
	}
			printf("Tong nghich dao cua so N la:%f",kq);
	return 0;
} 
