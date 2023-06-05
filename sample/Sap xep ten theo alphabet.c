#include <stdio.h>
  
  #include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  system("cls");
char str[5][80], tmp[80];

  int i, j;
  for (i = 0; i < 5; i++)
    scanf("%s", str[i]);

  printf("\nOUTPUT:\n");

  for (i = 0; i < 4; i++){
    for (j = i + 1; j < 5; j++){
      if (strcmp(str[i], str[j]) > 0){
        strcpy(tmp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], tmp);
      }
    }
  }
  for (i = 0; i < 5; i++)
    printf("%s ", str[i]);

  printf("\n");
  system("pause");
  return (0);
}
