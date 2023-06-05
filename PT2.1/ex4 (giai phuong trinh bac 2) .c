#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

void NhapLieu(float *a, float *b, float *c) {
  printf("\nNhap He So A: ");
  scanf("%f", a);
  printf("\nNhap He So B: ");
  scanf("%f", b);
  printf("\nNhap He So C: ");
  scanf("%f", c);
}
int giaiPT(float a, float b, float c){
	int d;
	if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("\nPhuong trinh co vo so nghiem!");
                else
                    printf("\nPhuong trinh vo nghiem!");
            }
        else
            printf("\nPhuong trinh co nghiem duy nhat la: %g",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("\nPhuong trinh vo nghiem!!!");
        else if (d==0)
            printf("\nPhuong trinh co nghiem kep la: %g",-b/(2*a));
        else
            printf("\nPhuong trinh co 2 nghiem phan biet la: \n- x1 = %g \n- x2= %g\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }
}

void program(){
	printf("_________________ Tim Nghiem Phuong Trinh Bac 2 __________________\n");
	printf("\n1. Nhap 3 he so A B C.");
	printf("\n2. Tim Nghiem Phuong Trinh Bac 2.");
	printf("\n3. Exit.");
	printf("\n\n__________________________ Enter Choice __________________________\n");
}
int main(){
	float a,b,c;
	float x1,x2;
	int choice;
	choice=0;
	int exit;
	exit =1;
	program();
	printf("\n---------------------> Choice(1-3): ");
	scanf("%d",&choice);
	
	while(!(choice >=1 && choice<=3) ){
		printf("Khong hop le, vui long nhap lai\n---------------------> Choice(1-3): ");
		scanf("%d",&choice);
	}
	
	while(exit!=0){
		switch(choice){
			case 1:{
				NhapLieu(&a,&b,&c);
				break;
			}
			case 2:{
				int numNo = giaiPT(a,b,c);
				break;
			}
			case 3:{
				printf("Exited");
				exit = 0;
				break;
			}
		}
		if(exit==1){
			printf("\n---------------------> Choice(1-3):: ");
			scanf("%d",&choice);
			while(!(choice >=1 && choice<=3)){
				printf("Khong hop le, vui long nhap lai\n---------------------> Choice(1-3): ");
				scanf("%d",&choice);
			}
		}
	}
	

	return 0;
}


