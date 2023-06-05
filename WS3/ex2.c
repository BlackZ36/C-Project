#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	
	char s[10];
	int i;
	
	printf("Enter 1 char (a-z): ");
	gets(s);
	for(i=0;i<=10;i++){
		printf("%s",s);
	}
	return 0;
}

