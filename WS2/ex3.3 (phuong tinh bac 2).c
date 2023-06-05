#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){
    float a,b,c,delta,xa,xb,x1,x2,x3,x4;
    printf("Nhap he so a b c : ");
    scanf ("%f%f%f",&a,&b,&c);
    delta = (b*b) - (4*a*c);
    if( a != 0){
        if( delta > 0 ){
            xa = (-b + sqrt(delta))/(2*a);
            xb = (-b - sqrt(delta))/(2*a);
            if ( xa > 0 ){
                printf("x1 = %g, ",+sqrt(xa));
                printf("x2 = %g, ",-sqrt(xa));
            }
            else if(xa == 0){
                printf("x1 = 0 ");
        	}
            if ( xb > 0 ){
                printf("x3 = %g, ",+sqrt(xb));
                printf("x4 = %g, ",-sqrt(xb));
            }
            else if(xb == 0){
			
                printf("x2 = 0");
 			}
            printf("\n");
    	}
        else if( delta == 0 ){
            xa = -b / ( 2 * a);
            if ( xa > 0 ){
                printf("x1 = %g, ",+sqrt(xa));
                printf("x2 = %g, ",-sqrt(xa));
            }
            else if( xa == 0 ){
                printf("x = 0");
            }
            else if( xa < 0 ){
                printf("Phuong trinh vo nghiem");
            }
        }
        else if( delta < 0 ){
            printf("Phuong trinh vo nghiem");
        }
    }
    else if (b != 0){
        x1 = (-c / b);
        if (x1 == 0)
            printf("x = 0\n");
        else if (x1 < 0)
            printf("Pt vo nghiem\n");
        else{
            printf("x1 = %g",+sqrt(x1));
            printf("x2 = %g",-sqrt(x1));
        }
    }
    else{
        if (c != 0)
            printf("Pt vo nghiem\n");
        else
            printf("Pt co vo so nghiem\n");
    }
 
    return 0;
}
