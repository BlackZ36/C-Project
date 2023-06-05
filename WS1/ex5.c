	#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a;
	printf("Nhap diem trung binh: ");
	scanf("%d",&a);
	if(a>=8){
		printf("hoc sinh gioi");
	}
	else if(a>=6 && a<8){
		printf("hoc sinh kha");
	}
	else{
		printf("hoc sinh trung binh");
	}

	return 0;
}

