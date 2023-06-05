#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a,b,c,i,j,k,m,n;
	
	n=6;
	//
	printf("1.\n");
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	//
	printf("2.\n");
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
	//
	printf("3.\n");
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	//
	printf("4.\n");
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=n-1;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	//
	int sao;
	printf("5.\n");
	for (i = 0; i < n; i++) {
        for (j = 0; j <= (n - i - 1); j++) {
            printf(" ");
        }
        while (sao != (2 * i + 1)) {
            printf("*");
            sao++;;
        }
        sao = 0;
        printf("\n");
    }
    //
    printf("6.\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0;j < 2*(n-i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    //
    printf("8.");
	printf("\n");
	for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
	


	return 0;
}

