#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("Nhap vao 2 canh goc vuong cua hinh tam giac: ");
	scanf("%d",&a);
	scanf("%d",&b);
	int s;
	s = (a*b)/2;
	c = sqrt(a+b);
	printf("Dien tich tam giac: %d",s);
	printf("\nchu vi tam giac: %d",a+b+c);
	
	return 0;
}

