#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	int a,b,c,d;
	int j=1;
	for (a=1;a<=10;a++)
		for (b=0;b<=10;b++)
			for (c=0;c<=10;c++)
				for (d=0;d<=10;d++)
				if ((a*d*d)==(b*c*c*c)){
					printf("\n%d, a=%d, b=%d, c=%d, d=%d",j,a,b,c,d);
					j++;
				}
	return 0;
}

