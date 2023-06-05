#include <stdio.h>
#include <conio.h>
#include <string.h>



int demktso(char s[100])
{
	int i,dem=0;
	for (i=0;i<strlen(s);i++)
        if ( s[i]>='0' && s[i]<='9' )
			dem++;
	return dem;
}
int main()
{
    char s[100];
    fflush(stdin);
    gets(s);
    printf("so ki tu so  :  %d",demktso(s) );
    return 0;
}
