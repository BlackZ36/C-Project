#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

//for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			
//		}
//	}

void NhapMang(float a[100][100],float a1[100][100],float a2[100][100],float a3[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d]= ",i,j);
			scanf("%f",&a[i][j]);
			a1[i][j] = a[i][j];
			a2[i][j] = a[i][j];
			a3[i][j] = a[i][j];
		}
	}
	printf("\n---------------------------------------------------------\n");
}

void InMang(float a[100][100],int n){
	int i,j;
	
	printf("\nMa Tran:\n");
    for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            printf("%g\t",a[i][j]);
        }
        printf("\n");
    }
	printf("\n---------------------------------------------------------\n");
}

void TinhTongDuong(float a[100][100], int n){
	int i,j;
	float sum;
	sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if( a[i][j] > 0){
				sum+=a[i][j];
			}
		}
	}
	printf("a, Tong cac so >0: %g",sum);
	printf("\n---------------------------------------------------------\n");
}

void TinhTongChiaHet(float a[100][100], int n){
	int i,j;
	float sum;
	sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if( (i+j)%5 == 0){
				sum+=a[i][j];
			}
		}
	}
	printf("b, Tong cac phan tu A[i][j] trong do (i+j)%%5==0: %g",sum);
	printf("\n---------------------------------------------------------\n");
}

int IsPrime(int n){
	int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

void InSNT(float a[100][100], int n){
    int i,j;
    printf("c, In ra So Nguyen To theo tung hang: \n");
    for(i = 0; i < n; i++){
    	printf("- So nguyen to hang i=%d: ",i);
    	for(j = 0; j < n; j++){
     		if( a[i][j] >= 2){
     			if( IsPrime(a[i][j]) ){
     			printf("%g ",a[i][j]);
				}
    		}
    	}
    	printf("\n");
   }
   printf("---------------------------------------------------------\n");
}

void SapXepTangTheoHang(float a1[100][100], int n){
	int i,j,k;
	float temp;
	printf ("d, Sap xep ma tran tang dan theo tung hang: ");
 
	for (i=0;i<n;++i) {
		for (j=0;j<n;++j) {
			for (k=(j+1);k<n;++k) {
				if (a1[i][j] > a1[i][k]) {
					temp = a1[i][j];
					a1[i][j] = a1[i][k];
					a1[i][k] = temp;
				}
			}
		}
	}
	InMang(a1,n);
 	printf("---------------------------------------------------------\n");
}

void SapXepGiamTheoCot(float a2[100][100], int n){
	int i,j,k;
	float temp;
	printf ("e, Sap xep ma tran giam theo tung cot: ");
 
	for (j=0;j<n;++j) {
		for (i=0;i<n;++i) {
			for (k=i+1;k<n;++k) {
				if (a2[i][j] < a2[k][j]) {
					temp = a2[i][j];
					a2[i][j] = a2[k][j];
					a2[k][j] = temp;
				}
			}
		}
	}
	InMang(a2,n);
 	printf("---------------------------------------------------------\n");
}


void SapXepMang(float a3[100][100],int n){
  	int i,j;
  	float temp;
  	float atemp[n*n];
  	printf("f, Sap Xep Toan Bo Mang: ");
  	
  	for(i=0; i<n*n; i++){ //gan phan tu cua mang 2 chieu cho mang 1 chieu
   		atemp[i]=a3[i/n][i%n];
  		}
  
  	for(i=0; i<n*n-1; i++){// sap xep mang 1 chieu
    	for(j=n*n-1; j>i; j--){
      		if(atemp[i]>atemp[j]){
        		temp=atemp[i];
        		atemp[i]=atemp[j];
        		atemp[j]=temp;
      		}
    	}
  	}

  	for(i=0; i<n*n; i++){ // gan nguoc lai mang 1 chieu cho mang 2 chieu
    	a3[i/n][i%n]=atemp[i];
 	}
 	InMang(a3,n);
 	printf("---------------------------------------------------------\n");
}

void TinhTongDuongCheoVaBien(float a[100][100],int n){
	printf("g, Tong cac phan tu nam o duong cheo va bien: ");
	printf("\n- Cac phan tu nam tren duong cheo va bien: ");
	int i,j;
	float sum;
	sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if( i==j ||j==0 || i==0 || j==n-1 || i==n-1){
				printf("%g ", a[i][j]);
				sum += a[i][j];
			}
		}
	}
	printf("\n- Tong cac phan tu nam tren duong cheo va bien: %g",sum);
	
	printf("\n---------------------------------------------------------\n");
}

void MaxMinTheoHang(float a[100][100], int n){
	int i,j,k;
	float temp;
	float max,min;
	max =0;
	min=0;
	printf ("h, Max, Min theo hang: ");

	for (i=0;i<n;++i) {
		max = a[i][0];
		min = a[i][0];
		printf("Max, Min Hang i=%d: ",i);
		for (j=0;j<n;++j) {
			for (k=(j+1);k<n;++k) {
				if (a[i][j] > a[i][k]) { //tim max
					max = a[i][j];
				}else if( a[i][j] < a[i][k]){ // tim min
					min = a[i][k];
				}
			}
		}
	}

}

int main(){
	
	float a[100][100];
	float a1[100][100];
	float a2[100][100];
	float a3[100][100];
	
	int i,j,k,n,m;
	printf("- Nhap kich thuoc N cho mang A[n][n]: ");
	scanf("%d",&n);
	
	NhapMang(a,a1,a2,a3,n); 	//nhap gia tri cho cac phan tu trong mang
	InMang(a,n); //In ra mang da nhap
	TinhTongDuong(a,n); // tinh tong cac phan tu >0
	TinhTongChiaHet(a,n); // tinh tong cac phan tu co i+j chia het cho 5
	InSNT(a,n);// in so nguyen to theo tung hang
	SapXepTangTheoHang(a1,n); // sap xep mang tang dan theo hang
	SapXepGiamTheoCot(a2,n); // sap xep mang giam dan theo cot
	SapXepMang(a3,n); // sap xem toan bo mang
	
	TinhTongDuongCheoVaBien(a,n);
	MaxMinTheoHang(a,n);
	
	return 0;
}
