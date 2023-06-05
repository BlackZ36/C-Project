#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n, i;
	printf("Nhap n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(n%i==0)
			printf("\nUoc cua so N la %d",i);
            }
	return 0;
}
