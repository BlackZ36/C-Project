#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int i,j,sum,n,k,l,h,count,sotachra,min,max,a,b,num;
	//-----------------------------------------------------------------------------------
	printf("1. Number 1-100: \n");
	for(i=1;i<=100;i++){
		printf("%d ",i);
	}
	//-----------------------------------------------------------------------------------
	printf("\n\n2.Number 100-1: \n");
	for(i=100;i>=1;i--){
		printf("%d ",i);
	}
	//-----------------------------------------------------------------------------------
	printf("\n\n3. Number 1-100 division by 3: \n");
	for(i=1;i<=100;i++){
		if(i%3==0){
			printf("%d ",i);
		}
	}
	//-----------------------------------------------------------------------------------
	printf("\n\n4. Number 99-1 division by 7: \n");
	for(i=99;i>=1;i--){
		if(i%7==0){
			printf("%d ",i);
		}
	}
	//-----------------------------------------------------------------------------------
	j=0;
	for(i=0;i<=50;i++){
		j+=i;
	}
	printf("\n\n5. Sum of number 1-50: %d",j);
	//-----------------------------------------------------------------------------------
	j=0;
	for(i=50;i>=1;i--){
		j+=i;
	}
	printf("\n\n6. Sum of number 50-1: %d",j);
	//-----------------------------------------------------------------------------------
	j=0;
	sum=0;
	for(i=2;i<=INFINITY;i++){
		if(i%2==0){
			sum+=i;
			j++;
		}
		if(j==50){
			break;
		}
	}
	printf("\n\n7.Sum of 50 even number starting at 2: %d",sum);
	//-----------------------------------------------------------------------------------
	sum=0;
	for(i=0;i<=100;i+=5){
		sum+=i;
	}
	printf("\n\n8.Sum of 20 number in (5-10-15-...-100) is: %d",sum);
	//-----------------------------------------------------------------------------------
	j=1;
	printf("\n\n9.Find factorial of N.\nEnter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j*=i;
	}
	printf("Factorial of %d is: %d",n,j);
	//-----------------------------------------------------------------------------------
	printf("\n\n10.Check N is prime or not.\nEnter N: ");
	scanf("%d",&n);
	j =0;
	if(n==0 || n==1){
		j=2;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			j++;
		}
		
	}
	if(j==0){
		printf("%d is a prime number.",n);
	}
	else
		printf("%d is NOT a prime number.",n);
	//-----------------------------------------------------------------------------------
	printf("\n\n11. Check N is perfect number or not.\nEnter N: ");
	scanf("%d",&n);
	j=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			j = j+i;
		}
	}
	if(j==n){
		printf("%d is a perfect number.",n,j);
	}
	else
		printf("%d is NOT a perfect number.",n,j);
	//-----------------------------------------------------------------------------------
	j=0;
	k=1;
	l=1;
	printf("\n\n12. First 10th Fibonacci number is: %d %d ",j,k);
	for(i=0;i<15;i++){
		l=j+k;
		j=k;
		k=l;
  		if(i<=10-3){
			printf("%d ",l);
		}
		if(i==10){
			printf("\n- The 13th fibonacci number is: %d",l);
		}
	}
	
	//-----------------------------------------------------------------------------------	
	printf("\n\n13. Enter N: ");
	scanf("%d",&n);
	j=n;
	h=n;
	count=0;
	for(;n!=0;){
        n = n/10;
        count++;
    }
    k=0;
    printf("- N have %d digits.",count);
    for(;j!=0;){
        sotachra = j % 10;
        k += sotachra;
        j /= 10;
    }
	printf("\n- Sum of digits of N is: %d",k);
	sotachra=0;
	max=0;
	for(;h!=0;){
		sotachra = h % 10;
		if(sotachra>max){
			max=sotachra;
		}
		h = h/10;
	}
	printf("\n- Large digits of N is: %d",max);
	
	//-----------------------------------------------------------------------------------
	i=1;
	j=1;
	printf("\n\n14. Return a digit nth of 123456789101112...");
	printf("\nEnter N: ");
	scanf("%d",&n);
	h=n;
	while (n > 9 * i * j) {
    	n -= 9 * i * j;
    	j *= 10;
    	i ++;
    }
    	k = j + (n - 1) / i;
    for (j = (n - 1) % i; j < i - 1; j ++) {
        k = k / 10;
    }
    printf("The digit at %dth is: %d",h,k%10);		
    //-----------------------------------------------------------------------------------
	i=2;
	printf("\n\n15.Phan tich N thanh tich cac thua so nguyen to:");
	printf("\nEnter N:");
	scanf("%d",&n);
	while (n>1){
        if (n%i==0){
            printf("%d ",i);
            n=n/i;
        }
        else{
            i++;
        }
    }
    //-----------------------------------------------------------------------------------
	printf("\n\n16.Enter A and B (0<A<B<100)");
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("-The prime numbers in  the range a to b is: ", n);
	for(num = a;num<=b;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
       while(b!=0)
    {
        i = a % b;
        a = b;
        b = i;
    }
        printf("\n-UCLN :%d",a);
	
	
	return 0;
}
