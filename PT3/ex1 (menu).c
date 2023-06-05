#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int main(){
	
	//bien dem
 	int i,j,k,n;
	int count=0;
	int exit=1;
	int choice;
	
	//bien luu gia tri
	float tong=0;
	float a[100];
	float maxcp;
	float max,min;
	float TBC;
	float temp;
	float TBC1;
	
	printf("____________________________ Program ____________________________\n");
	printf("\n1. Nhap 1 so nguyen N (0<N<50).");
	printf("\n2. Nhap 1 mang gom N so thuc.");
	printf("\n3. Tim so lon nhat trong mang.");
	printf("\n4. Tim so nho nhat trong mang.");
	printf("\n5. Tim so duong chan lon nhat trong mang.");
	printf("\n6. Tim so am le nho nhat trong mang.");
	printf("\n7. Tim cac so chinh phuong trong mang.");
	printf("\n8. Tinh tong mang.");
	printf("\n9. Tinh trung binh cong cac phan tu trong mang.");
	printf("\n10. Tim nhung phan tu lon hon trung binh cong.");
	printf("\n11. Sap xep mang theo thu tu tang dan.");
	printf("\n12. Sap xep mang theo thu tu giam gian.");
	printf("\n13. In ra trung binh cong cac phan tu >0 cua mang.");
	printf("\n14. Thoat");
	printf("\n\n__________________________ Enter Choice __________________________\n");
	
	printf("\n------------> Choice(1-14): ");
	scanf("%d",&choice);
	
	
	while(!(choice >=1 && choice<=14) ){
		printf("Khong hop le, vui long nhap lai\n------------> Choice(1-14): ");
		scanf("%d",&choice);
	}
	
	while(exit!=0){
		switch(choice){
			case 1:{
				printf("\n1.Nhap N (0<N<50): ");
				
				scanf("%d",&n);
				while( !(n>0 && n<50) ){
					printf("Khong hop le, vui long nhap lai N(0<N<50): ");
					scanf("%d",&n);
				}
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}		
			case 2:{
				printf("\n2.Nhap gia tri cho mang N.");
				
				printf("\nMang N gom %d phan tu. \n",n);
				for(i=0;i<n;i++){
					printf("N[%d]: ",i);
					scanf("%f",&a[i]);
				}
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 3:{
				printf("\n3.So Lon Nhat Trong Mang: ");
				
				max=a[0];
				for(i=1;i<n;i++){
					if(a[i] > max){
						max = a[i];
					}
				}
				printf("%g.",max);
				maxcp=max;
				
				printf("\n______________________________________________________Enter Choice.");
				break;
			}
			case 4:{
				printf("\n4.So Nho Nhat Trong Mang: ");
				
				min=a[0];
				for(i=1;i<n;i++){
					if(a[i] < min){
						min = a[i];
					}
				}
				printf("%g.",min);
				
				printf("\n______________________________________________________Enter Choice.");
				break;
			}
			case 5:{
				printf("\n5.So duong chan lon nhat trong mang: ");
				
				max =-1;
				for(i=0;i<n;i++){
					if( (a[i] == (int)a[i]) && (int)a[i] != 0 ){
						if( (int)a[i] % 2 ==0){
							if(a[i] > max){
							max = a[i];
							}
						}
					}
				}
				if( max == -1){
					printf(" KHONG CO.");
				}
				else
					printf("%g.",max);
				
				printf("\n______________________________________________________Enter Choice.");
				break;
			}
			case 6:{
				printf("\n6.So am le nho nhat trong mang: ");
				
				max =0;
				for(i=0;i<n;i++){
					if(a[i] == (int)a[i]){
						if( (int)a[i] % 2 !=0){
							if(a[i] < max){
							max = a[i];
							}
						}
					}
				}
				if( max == 0){
					printf("KHONG CO.");
				}
				else
					printf("%g.",max);
				
				printf("\n______________________________________________________Enter Choice.");
				break;
			}
			case 7:{
				printf("\n7.In ra so chinh phuong trong mang: ");
				
				count=0;
				for(i=0;i<n;i++){
					if(a[i] == (int)a[i]){
						for(j=0;j<=sqrt(a[i]);j++){
							if(j*j == a[i]){
								printf(" %g ",a[i]);
								count++;
							}
						}
					}
				}
				if( count == 0){
					printf(" KHONG CO.");
				}
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 8:{
				printf("\n8.Tinh tong cua cac phan tu trong mang: ");
				
				for(i=0;i<n;i++){
					tong=tong + a[i];
				}
				printf("%g.",tong);
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 9:{
				printf("\n9.Tinh tong trung binh cong cac phan tu: ");
				
				TBC = tong / n;
				printf("%g",TBC);
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 10:{
				printf("\n10.Nhung phan tu lon hon trung binh cong (N > %g): ",TBC);
				
				for(i=0;i<n;i++){
					if(a[i] > TBC){
						printf(" (%g) ",a[i]);
					}
				}
				
				printf("\n\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 11:{
				printf("\n11.Sap xep mang theo thu tu tang dan: ");
				
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(a[i] > a[j]){
							temp = a[i];
							a[i] = a[j];
							a[j] = temp;
						}
					}
					printf(" (%g) ",a[i]);
				}
				
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 12:{
				printf("\n12.Sap xep mang theo thu tu giam dan: ");
				
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(a[i] < a[j]){
							temp = a[i];
							a[i] = a[j];
							a[j] = temp;
						}
					}
					printf(" (%g) ",a[i]);
				}
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 13:{
				printf("Tinh trung binh cong cac phan tu >=0 cua day: ");
				
				count=0;
				for(i=0;i<n;i++){
					if(a[i] >= 0){
						TBC1 = TBC1 + a[i];
						count++;
					}
				}
				TBC1 = TBC1 / count;
				printf ("%g",TBC1);
				
				
				printf("\n______________________________________________________Enter Choice.\n");
				break;
			}
			case 14:{
				printf("__________________________________________________________________\n\n");
				printf("Exited");
				exit=0;
				printf("\n__________________________________________________________________\n");
				break;
			}
			
			default:{
				printf(" KHONG HOP LE. ");
				break;
			}
		}
		
		
		
		if(exit==1){
			printf("\n------------> Choice(1-14): ");
			scanf("%d",&choice);
			while(!(choice >=1 && choice<=14)){
				printf("Khong hop le, vui long nhap lai\n------------> Choice(1-14): ");
				scanf("%d",&choice);
			}
		}
	}
	
	return 0;
}
