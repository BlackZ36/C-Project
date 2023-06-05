#include<math.h>
#include<stdio.h>

main()
{
    float a,b,c,d;
    printf("Nhap vao he so a, b, c: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %g",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %g",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem la: %g , %g",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    
  
}
