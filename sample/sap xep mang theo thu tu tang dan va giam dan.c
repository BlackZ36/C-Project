#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>
 
int main(){
    int a[100];
    int n;
    int i,j;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    
    // Sap xep dung thuat toan sap xep chon
    int tg;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    
    
    printf("\nMang giam dan: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    
    
    printf("\nMang tang dan: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    
}
    
