#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include <stdlib.h>

int main(){
	int i,j,k;
	int n;
	int to5,to2,to1,to;
	div_t output;
		
	printf("Nhap so tien N:");
	scanf("%d",&n);
	

	
	output = div(n,5000);
	to5=output.quot;
	printf("%d",to5);
	
	
	return 0;
}

