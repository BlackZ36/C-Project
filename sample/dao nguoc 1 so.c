#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int Reverse(int n){
    int reNum = n % 10;
    n /= 10;
    int last;
    while(n > 0){
        last = n % 10;
        n /= 10;
        reNum = reNum * 10 + last;
    }
    return reNum;
}
 
int main(){
    int num;
    printf("Nhap num = ");
    scanf("%d", &num);
    printf("\nReNum = %d", Reverse(num));
}
