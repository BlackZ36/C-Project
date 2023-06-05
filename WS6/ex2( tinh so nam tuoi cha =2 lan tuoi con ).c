#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int a,b,i,j,k;
	a=0;
	b=0;
	printf("Nhap tuoi con:");
	scanf("%d",&a);
	printf("Nhap tuoi cha:");
	scanf("%d",&b);
	
	while( (b-a<25) ){
		printf("Cha > Con it nhat 25 tuoi, nhap lai tuoi cha: ");
		scanf("%d",&b);
	}
	
	for(i=1;i<=100;i++){
		a++;
		b++;
		if(a*2==b){
			printf("Tuoi cha gap doi tuoi con sau: %d nam (%d-%d)",i,a,b);
			break;
		}
	}
	
	return 0;
}

