#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

bool isPrime(int n)	// ham kiem tra so nguyen to
{
	if( n < 2)
		return false;
	int i;
	for(i = 2; i <= sqrt(n);i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(){
	int n;
	scanf("%d",&n);
	if(isPrime(n)){
		printf("\nSo nguyen to");
	}
	else
		printf("Khong phai so nguyen to");
  return (0);
}
