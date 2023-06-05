#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
    int a1, b1, c1, a2, b2, c2;
    float D, Dx, Dy, x, y;
    printf("Phuong trinh 1: a1*x + b1*y = c1\n");
    printf("Phuong trinh 2: a2*x + b2*y = c2\n");
    printf("\nNhap he so a1: "); 
	scanf("%d",&a1);
    printf("\nNhap he so b1: "); 
	scanf("%d",&b1);
    printf("\nNhap he so c1: "); 
	scanf("%d",&c1);
    printf("\nNhap he so a2: "); 
	scanf("%d",&a2);
    printf("\nNhap he so b2: "); 
	scanf("%d",&b2);
    printf("\nNhap he so c2: "); 
	scanf("%d",&c2);
    D=a1*b2-a2*b1;
    Dx=c1*b2-c2*b1;
    Dy=a1*c2-a2*c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            printf("He phuong trinh co vo so nghiem");
        else
            printf("He phuong trinh vo nghiem");
    }
    else {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem (x, y) = (%d, %d)", x, y);
    }
    return 0;
}
 
