#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int max;
	int i,j;
	int n=4;
	int temp;
	int a[]={2,3,5,4};
	printf("cho a=3,b=5,c=2,d=4");
	max=a[0];
	if(a[1]> max){
		max=a[1];
	}
	if(a[2]>max){
		max=a[2];
	}
	if(a[3]>max){
		max=a[3];
	}
	printf("\n1. Max: %d",max);
	
	for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j ++){
            //neu tim thay phan tu be hon phan tu dang xet thi doi cho 2 phan tu do cho nhau
            if(a[i] > a[j]){
                //hoan vi 2 phan tu
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    //hien thi mang sau khi sap xep tang dan
    printf("\n2. Sap xep: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
	
	
	return 0;
}

