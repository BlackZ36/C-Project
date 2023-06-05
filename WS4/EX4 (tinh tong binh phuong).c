#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int i, s = 0, n;
	printf("Nhap N:");
	scanf("%d",&n);
	 for(i = 1;i <= n;i++){
        if(i % 2 != 0){
            s = s + i * i;
        }
    }
    printf("Tong binh phuong cac so le tu 1 den N: %d", s);
}

