#include <stdio.h>
int main(){
    //khai bao so luong phan tu
    int n = 10;
    int i,j;
    //khai bao mang
    int number[] = {8,5,2,6,9,3,1,4,0,7};
    //khai bao bien trung gian de hoan vi
    int trunggian;
    //hien thi mang ban dau
    printf("MANG BAN DAU\n");
    for(i = 0; i < n; i++){
        printf("%d \n", number[i]);
    }
    //thuc hien thuat toan sap xep chon
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j ++){
            //neu tim thay phan tu be hon phan tu dang xet thi doi cho 2 phan tu do cho nhau
            if(number[i] > number[j]){
                //hoan vi 2 phan tu
                trunggian = number[i];
                number[i] = number[j];
                number[j] = trunggian;
            }
        }
    }
    
    //hien thi mang sau khi sap xep tang dan
    printf("\nMANG SAU KHI SAP XEP TANG DAN\n");
    for(i = 0; i <=3 ; i++){
        printf("%d ", a[i]);
    }
}
