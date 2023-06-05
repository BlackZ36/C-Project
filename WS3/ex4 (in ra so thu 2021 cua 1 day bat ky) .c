#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int a,i,j;
	j=0;
	for(i=50;i<=INFINITY;i=i+j){
		j++;
		if(j==2021){
			printf("The 2021th number of (50,51,53,56,60,...) is: %d",i);
			break;
		}
	}
	return 0;
}

