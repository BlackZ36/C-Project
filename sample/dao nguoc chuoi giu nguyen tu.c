#include <stdio.h> 
#include <conio.h> 
#include <string.h>

int main()
{
   char xau[50];
   int i,j;
   printf("Nhap vao mot chuoi: ");
   gets(xau);
   int a=strlen(xau)-1;
   for( i=strlen(xau)-1;i>=0;i--)
   {
      if(xau[i]==32 || i==0)
      {
         if(i==0)
         {
            printf(" ");
         }
         for( j=i;j<=a;j++)
         {
            printf("%c",xau[j]);
         }
         a=i-1;
      }
   }
   getch();
}
