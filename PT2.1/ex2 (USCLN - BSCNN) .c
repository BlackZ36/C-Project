#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

void NhapLieu(float *a, float *b) {
  printf("\nNhap Number1: ");
  scanf("%f", a);
  printf("\nNhap Number2: ");
  scanf("%f", b);
}

float TinhTong(float a, float b){
	float i;
	i = a + b;
	return i;
}

float TinhHieu(float a, float b){
	float i;
	i = a - b;
	return i;
}

float TinhNhan(float a, float b){
	float i;
	i =a * b;
	return i;
}

float TinhChia(float a, float b){
	float i;
	i = a / b;
	return i;
}

int USCLN(float a, float b){
	if( (int)a == a && (int)b == b){
		if ((int)b == 0) return (int)a;
    	return USCLN((int)b, (int)a % (int)b);
	}
	else
		return 0;
}

int BSCNN(float a, float b){
	if( (int)a == a && (int)b == b){
		return ( (int)a * b) / USCLN((int)a, (int)b);
	}
	else
		return 0;

}

int main(){
	float a,b;
	NhapLieu(&a,&b);
	printf("\nSo da nhap: number1= %g, number2= %g.\n",a,b);
	printf("\n- Tong cua number1 va number2 = %g", TinhTong(a,b) );
	printf("\n- Hieu cua number1 va number2 = %g", TinhHieu(a,b) );
	printf("\n- Nhan cua number1 va number2 = %g", TinhNhan(a,b) );
	printf("\n- Chia cua number1 va number2 = %g", TinhChia(a,b) );
	printf("\n- USCLN cua number1 va number2 = %d", USCLN(a,b) );
	printf("\n- BSCNN cua number1 va number2 = %d", BSCNN(a,b) );
	

	return 0;
}


