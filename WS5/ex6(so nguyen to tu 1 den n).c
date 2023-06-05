#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int n,i,j;
	
	printf("Nhap N:");
	scanf("%d",&n);
	int check;
	printf("so nguyen to tu 1 den %d: ",n);
	for(i=1;i<=n;i++){
		for(j=2;j<=i-1;j++){
			if(i % j == 0){
				check = 0;
			}
		}
		if(check == 1){
			printf("%d ",i);
		}
		check=1;
	}
	
	return 0;
}

