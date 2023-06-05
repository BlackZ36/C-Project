	#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a;
	printf("Nhap diem: ");
	scanf("%d",&a);
	if(a>=9){
		printf("hoc bong: 5000000");
	}
	else if(a>=8 && a<9){
		printf("hoc bong: 3000000");
	}
	else if( a>= 7 && a<8){
		printf("hoc bong: 1000000");
	}
	else
		printf("hoc bong: 0");

	return 0;
}

