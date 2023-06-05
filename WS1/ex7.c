#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("Enter a and b:");
	scanf("%d",&a);
	scanf("%d",&b);	
	c=b;
	b=a;
	a=c;
	printf("a=%d  b=%d",a,b);

	return 0;
}

