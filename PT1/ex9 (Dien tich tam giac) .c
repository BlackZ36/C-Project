#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("Nhap vao 3 canh cua hinh tam giac: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int s,p;
	
	p=a+b+c/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich tam giac: %d",s);
	printf("\nchu vi tam giac: %d",p*2);
	
	return 0;
}

