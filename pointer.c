#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

//Session: 	Pointer ( con tro )
//defined:	- dung de luu dia chi cua bien khac.
//			- share vung nho cho cac bien khac
//declare:	*p -> p is pointer

void InputA(int *p){
	// *p chung vung nho voi a o ham main();
	printf("\nInput A: ");
	scanf("%d",&*p);
}

int main(){
	int a=1234;
	int *p;
	p = &a; // *p va a se dung chung vung nho
	printf(" %d ",*p);
	
	//Ky thuat mo rong:
	InputA(&a);
	printf("A= %d",a);
	
	
	return 0;
}

