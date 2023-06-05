#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
	int i,count=0,n;
	int sodau, sogancuoi;
	printf("enter N: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&i);
		count++;
		if(count == 0){
			sodau = i;
		}
		else if( count == n-1){
			sogancuoi = i;
		}
	}
	printf("so dau: %d",sodau);
	printf("\nso gan cuoi: %d",sogancuoi);
	return 0; 
}
