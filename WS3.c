#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int i,j,k,l,m,n,a[100],b;
	char s[100];
	int sum=0;
	int fact=1;
	int check;
	
	
//--------------------------------------------------------- WS3-EX-2:---------------------------------------------------------
//	printf("Enter N: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("Enter number %d: ",i+1);
//		scanf("%d",&a[i]);
//	}
//	printf("Result: ");
//	for(i=0;i<=n-1;i++){
//		printf("%d ",a[i]);
//	}
	
//--------------------------------------------------------- WS3-EX-1:---------------------------------------------------------

//	printf("Enter string: ");
//	scanf("%s",s);
//	n = strlen(s);
//	for(i=0;i<=n;i++){
//		printf("%c",s[i]);
//	}
//	for(i=n;i>=0;i--){
//		printf("%c",s[i]);
//	}
   	
//--------------------------------------------------------- WS3-EX0:---------------------------------------------------------
//	printf("Enter 1 char (a-z): ");
//	scanf("%c",s);
//	for(i=0;i<=10;i++){
//		if(i<10){
//			printf("%s",s);
//		}
//		else
//			break;
//	}
	
	
//--------------------------------------------------------- WS3-EX1:---------------------------------------------------------
//	do{
//		printf("Enter N (0<N<100): ");
//		scanf("%d",&n);
//	}while(!(n> 0 && n< 100));
	
	
//--------------------------------------------------------- WS3-EX2:---------------------------------------------------------
//	j=0;
//	for(i=50;i<=INFINITY;i=i+j){
//		j++;
//		if(j==2021-1){
//			printf("2021th number: %d",i);
//			break;
//		}
//	}


//--------------------------------------------------------- WS3-EX3: ---------------------------------------------------------
	
	//------------------------------- 1.1-100: -------------------------------
//	printf("number 1-100: \n");
//	for(i=1;i<=100;i++){
//		printf("%d ",i);
//	}
//	printf("\n");
	//------------------------------- 2.100-1: -------------------------------
//	printf("\nnumber 100-1: \n");
//	for(i=100;i>=1;i--){
//		printf("%d ",i);
//	}
//	printf("\n");
	//------------------------------- 3.1-100 division by 3 -------------------------------
//	printf("\nnumber 1-100 division by 3: \n");
//	for(i=1;i<=100;i++){
//		if(i%3==0){
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
	//------------------------------- 4.99-1 division by 7 -------------------------------
//	printf("\nnumber 99-1 division by 7: \n");
//	for(i=99;i>=1;i--){
//		if(i%7==0){
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	
//	printf("\n");
	//------------------------------- 5.sum of 1-50; -------------------------------
//	j=0;
//	for(i=0;i<=50;i++){
//		j+=i;
//	}
//	printf("sum of 1-50: %d",j);
//	printf("\n");
	//------------------------------- 6.sum of 50-1; -------------------------------
//	j=0;
//	for(i=50;i>=1;i--){
//		j+=i;
//	}
//	printf("sum of 50-1: %d",j);
//	printf("\n");
	//------------------------------- 7.sum of 50 even number from 2; -------------------------------
//	j=0;
//	for(i=2;i<=INFINITY;i++){
//		if(i%2==0){
//			sum+=i;
//			j++;
//		}
//		if(j==50){
//			break;
//		}	
//	}
//	printf("sum of 50 even number from 2: %d",sum);
//	printf("\n");
	//------------------------------- 8.sum of 20 number 5-10-15-...-100; -------------------------------
//	sum=0;
//	for(i=0;i<=100;i+=5){
//		sum+=i;
//	}
//	printf("sum of 20 number in array 5-10-15-...-100: %d",sum);
//	printf("\n");
	//------------------------------- 9.calculate factorial of n: -------------------------------
//	printf("Enter N: ");
//	scanf("%d",&n);	
//	for(i=1;i<=n;i++){
//		fact*=i;
//	}
//	printf("Factorial of %d: %d",n,fact);
//	printf("\n");
	//------------------------------- 10.prime number check: -------------------------------
//	printf("Enter N: ");
//	scanf("%d",&n);
//	check =0;
//	if(n==0 || n==2){
//		check=2;
//	}
//	for(i=2;i<=sqrt(n);i++){
//		if(n % i == 0){
//			check++;
//		}
//		
//	}
//	if(check==0){
//		printf("%d is a prime number.",n);
//	}
//	else
//		printf("%d is NOT a prime number.",n);
//	printf("\n");
	//------------------------------- 10.perfect number check: -------------------------------
//	printf("Enter N: ");
//	scanf("%d",&n);
//	j=0;
//	for(i=1;i<=n/2;i++){
//		if(n%i==0){
//			j = j+i;
//		}
//	}
//	if(j==n){
//		printf("%d is a perfect number.(j=%d)",n,j);
//	}
//	else
//		printf("%d is NOT a perfect number.(j=%d)",n,j);
//	printf("\n");
	//------------------------------- 10.fibonacci: -------------------------------	
	j=0;
	k=1;
	l=1;
	printf("fibonacci number: %d %d ",j,k);
	for(i=0;i<15;i++){
		l=j+k;
		j=k;
		k=l;
  		if(i<=10-2){
			printf("%d ",l);
		}
		if(i==10){
			printf("\n13th fibonacci number is: %d",l);
		}
	}
			
	
	
	
	
	
	
	
	return 0;
	
	
	
}
