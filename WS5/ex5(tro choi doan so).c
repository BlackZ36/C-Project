#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int a,b,c;
	int i,j;
	a= srand()%1000;
	b=1;
	c=0;
	printf("Nhap so muon doan: ");
	scanf("%d",&b);
	while(b!=a){
		
		if(b > a){
			printf("Lon hon so can du doan, nhap lai:");
		}
		else if(b<a){
			printf("nho hon so can du doan, nhap lai:");
		}
		scanf("%d",&b);
		c++;
	}
	printf("Ban da doan chinh xac, so ngau nhien la: %d",b);
	printf("\nBan da doan dung sau %d lan du doan.",c);

	return 0;
}

