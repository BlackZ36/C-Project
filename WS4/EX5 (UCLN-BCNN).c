#include <stdio.h>

int main(){
    int a,b,uc,bc;
    printf("Nhap a va b: ");
    scanf("%d%d",&a,&b);
    for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN cua %d va %d la: %d\n",a,b,uc);
            break;
        }
    }
    for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN cua %d va %d la: %d\n",a,b,bc);
            break;
        }
    }
    return 0;
}
