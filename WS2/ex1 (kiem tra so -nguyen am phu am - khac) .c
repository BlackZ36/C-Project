#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	char a,b,c;
	printf("Nhap 1 ky tu:");
	a=getche();
	if(('a'<=a && a<='z') || ('A'<=a && a<='Z') ){
		switch(a){
			case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
				printf("\n%c la mot nguyen am",a);
				break;
			default:
				printf("\n%c la mot phu am",a);
		}
	}
	else if (a>='0' && a<='9'){
		printf("\n%c la mot ky tu so",a);
	}
	else
		printf("\n%c la ky tu khac",a);

	return 0;
}

