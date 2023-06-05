#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	//mang 2 chieu
	//define: la mang cua cac mang 1 chieu
	//con duong goi la mang phang?
	
	//khai bao;
	int a[10][10];
	//a[0][0]: phan tu dau tien
	//bao gom: a[0][0], a[0][1], a[1][1],.....
	// input cho mang 2 chieu dung i,j
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\n a[%d][%d]: = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Hien thi mang 2 chieu
	printf("Show data of the array: ");
	for(i=0;i<5
	;i++){
		for(j=0;j<5;j++){
			printf(" %d -",a[i][j]);
		}
	}


	return 0;
}

