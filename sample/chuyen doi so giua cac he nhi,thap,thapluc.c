#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int convertNumber(int n, int b) {
    if (n < 0 || b < 2 || b > 16 ) {
        printf("He co so hoac gia tri chuyen doi khong hop le!");
        return 0;
    }
    int i;
    char arr[20];
    int count = 0;
    int m;
    int remainder = n;
    while (remainder > 0) {
        if (b > 10) {
            m = remainder % b;
            if (m >= 10) {
                arr[count] = (char) (m +55);
                count++;
            } else {
                arr[count] = (char) (m + 48);
                count++;
            }
        } else {
            arr[count] = (char) ((remainder % b) + 48);
            count++;
        }
        remainder = remainder / b;
    }
    // hien thi he co so
    for (i = count - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 1;
}

int main(){
	int i,j;
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("\nBinary: ");
	convertNumber(n,2);
	printf("\nHexaldicimal: ");
	convertNumber(n,16);
	printf("\nOctal: ");
	printf("%o",n);
}
