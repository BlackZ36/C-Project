#include <stdio.h> 
#include<string.h>
int main() {
    char s[] = "Chuong trinh dang chay";
    int i;
    for (i = 0; s[i] != '\0'; ++i);
      printf("Ð? dài chu?i: %d", i);
      
    printf("\nDo dai chuoi dung strlen: %d",strlen(s));
    return 0;
}
