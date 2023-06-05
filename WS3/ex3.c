#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int n;
	do{
	printf("Enter N (0<N<100): ");
	scanf("%d",&n);
	}while(!(n> 0 && n< 100));
	printf("OK");

	return 0;
}

