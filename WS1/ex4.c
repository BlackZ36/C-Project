	#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a;
	printf("Nhap gio lam: ");
	scanf("%d",&a);
	if(a>=200){
		printf("thuong = 20%% luong");
	}
	else if(a>=100 && a<200){
		printf("thuong = 10%% luong");
	}
	else{
		printf("thuong = 0%% luong");
	}

	return 0;
}

