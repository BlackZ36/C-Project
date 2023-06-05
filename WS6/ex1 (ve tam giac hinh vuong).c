#include <stdio.h>
int main() {
   int i, j, rows,star,canh;
   
   
   printf("Nhap chieu cao to tam giac: ");
   scanf("%d", &rows);
   canh=rows;
   printf("------------------------------------------------------");
   printf("\n1. Tam giac 1\n\n");
   for (i = 1; i <= rows; ++i) {
      	for (j = 1; j <= i; ++j) {
        printf("* ");
    	}
      printf("\n");
   }
   printf("------------------------------------------------------");
   printf("\n2. Tam giac 2\n\n");
   for(i = 0; i < rows; i++) {
    	for(j = 0; j < rows - i; j++) {
        	printf("* ");
    	}
    	printf("\n");
	}
   
   printf("------------------------------------------------------");
   printf("\n3. Tam giac 3\n\n");
       for(i = 0; i < rows; i++){
        	for(j = 0; j < rows; j++){
            	if(j < rows-i-1){
                	printf(" ");
            	}else {
                	printf("*");
            	}
        	}
        printf("\n");
        }
    
	printf("------------------------------------------------------");
   	printf("\n4. Tam giac 4\n\n");   
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            if (j < i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    
    printf("------------------------------------------------------");
   	printf("\n5. Tam giac 5\n\n");
   	for (i = 0; i < rows; i++) {
        for (j = 0; j <= (rows - i - 1); j++) {
            printf(" ");
        }
        while (star != (2 * i + 1)) {
            printf("*");
            star++;;
        }
        star = 0;
        printf("\n");
    }
   	printf("------------------------------------------------------");
   	printf("\n6. Tam giac 6\n\n");
   	for (i = 0; i < rows; i++){
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0;j < 2*(rows-i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    //
    printf("------------------------------------------------------");
   	printf("\n7. Tam giac 7\n\n");
   	//in tam giac tren
   	for(i = rows;i >= 1; i--) {
        for(j = 0; j <= rows-i; j++) {
           printf(" ");
        }
        star = 0;
        while(star != (2*i - 1)) {
            printf("*");
            star++;
        }
        if(star>=2){
        	printf("\n");
		}
    }
    rows++;
    //in tam giac duoi
    for(i = 1; i <= rows-1; i++) {
        for(j = 1; j <= rows-i; j++) {
           printf(" ");
        }
        while(star != (2*i - 1)) {
            printf("*");
            star++;
        }
        star=0;
        printf("\n");
    }
   	printf("------------------------------------------------------");
   	printf("\n7. hinh vuong\n\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < rows; j++){
            if(i==0 || i==rows-1 || j==0 || j==rows-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
   	
   	
   return 0;
}
