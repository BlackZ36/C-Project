#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
	int i;
	int dem=0;
    char s[100];
    printf(" Nhap ky tu hoa: ");
    fflush(stdin);
    gets(s);
    
    for (i=0;i<strlen(s);i++){
        if ( s[i]>='A' && s[i]<='Z' )
			dem++;
    }
    printf("so ki tu hoa la  :  %d",dem);
    return 0;
}
