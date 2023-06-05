#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a;
	printf("Nhap so tuoi: ");
	scanf("%d",&a);
	if(a>0 && a<=2){
		printf("Tre so sinh");
	}
	else if(a>2 && a<=10){
		printf("Nhi Dong");
	}
	else if(a>10 && a<=17){
		printf("Vi Thanh nien");
	}
	else if(a>17 && a<=39){
		printf("Thanh nien");
	}
	else if(a>39 && a<=50){
		printf("Trung nien");
	}
	else{
		printf("Nguoi gia");
	}

	return 0;
}

