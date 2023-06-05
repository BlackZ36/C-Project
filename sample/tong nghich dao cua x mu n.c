#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int x,n;
  	scanf("%d%d", &x, &n); //Nhap vao hai so nguyen x va n
  	double sum = 0; //Khoi tao gia tri cua tong bang khong
  	int i;
  	for(i = 0;i <= n;i++)
  	{
  		sum+= 1 / (pow(x,i));	//pow(x,i) la ham tinh luy thua bac i cua x
	}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%g\n", sum);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
