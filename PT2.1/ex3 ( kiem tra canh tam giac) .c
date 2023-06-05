#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

void NhapLieu(float *a, float *b, float *c) {
  printf("\nNhap a: ");
  scanf("%f", a);
  printf("\nNhap b: ");
  scanf("%f", b);
  printf("\nNhap c: ");
  scanf("%f", c);
}

void KiemTra(float a,float b,float c){
	if( a<b+c && b<a+c && c<a+b ){
		printf("\na(%g) - b(%g) - c(%g) la 3 canh cua tam giac.",a,b,c);
	}
	else
		printf("\na(%g) - b(%g) - c(%g) KHONG la 3 canh cua tam giac.",a,b,c);
}
void KiemTraCan(float a,float b,float c){
	if(a==b || a==c || b==c){
      	printf("\n- a b c la tam giac can");
    }
    else
    	printf("\n- a b c KHONG la tam giac can");
}

void KiemTraDeu(float a,float b,float c){
	if(a==b && b==c){
      	printf("\n- a b c la tam giac deu");
    }
    else
    	printf("\n- a b c KHONG la tam giac deu");
}

void KiemTraVuong(float a,float b,float c){
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
      	printf("\n- a b c la tam giac vuong");
    }
    else
    	printf("\n- a b c KHONG la tam giac vuong");
}

void KiemTraVuongCan(float a,float b,float c){
	if( (a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b) && (a==b || a==c || b==c) ){
      	printf("\n- a b c la tam giac vuong can");
    }else
    	printf("\n- a b c KHONG la tam giac vuong can");
}



int main(){
	float a,b,c;
	NhapLieu(&a,&b,&c);
	KiemTra(a,b,c);
	KiemTraCan(a,b,c);
	KiemTraDeu(a,b,c);
	KiemTraVuong(a,b,c);
	KiemTraVuongCan(a,b,c);

	return 0;
}


