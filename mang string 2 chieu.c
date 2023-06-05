#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
//Mang ky tu 2 chieu;
//defined: la mang string 2 chieu tring[100][100];
//declare: char string[100][100];
//limit: n(rows) x m(columns)
//Input meothd: 



int main(){
	char s[100][100];
	int i,j,k,n;
	printf("1.Enter numner of INPUT strings: ");
	scanf("%d",&n);
	//enter string
	 fflush(stdin);
	for(i=0;i<n;i++){
		printf("Enter String %d: ",i+1);
		gets(s[i]);
	}
	
	//output string
	printf("\n2. Output String: \n");
	for(i=0;i<n;i++){
		printf("String %d: ",i+1);
		printf("'%s'\n",s[i]);
	}

	return 0;
}

