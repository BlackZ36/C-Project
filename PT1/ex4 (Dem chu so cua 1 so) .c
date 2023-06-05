#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a,b,sotachra;
	a=405;
	int count=0;
	printf("number = 405");
	printf("\nSo gom co: ");
	for(;a!=0;){
		sotachra = a % 10;
		printf(" %d,",sotachra);
		a = a/10;
		count++;
	}
	printf(" tong %d chu so",count);


	return 0;
}

