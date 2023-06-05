#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

//

//
void InputString(char s[100][100], int n){
	int i;
  	for (i=0; i<n; i++){
    	do{
     		printf("Enter S[%d]: ",i+1);
     		fflush(stdin);
      		gets(s[i]);
    	}while(strlen(s[i])>30);
  	}
  	printf("______________________________________________________\n");
}
//1
void OutputString(char s[100][100], int n){
	int i;
	printf("Output Entered String: \n");
  	for (i=0; i<n; i++){
  		printf("String S[%d]: ",i+1);
    	printf("'%s'\n",s[i]);
  	}
  	printf("______________________________________________________\n");
}
//2
void MaxMinLength(char s[100][100], int n){
	int i,j,max,min;
	max = min = 0;
	char smax[100] = "\0";
	char smin[100] = "                                         ";
	
	for(i=0;i<n;i++){
		
		if( strlen(s[i]) > strlen(smax) ){
			strcpy(smax,s[i]);
		}
		else if( strlen(s[i]) < strlen(smin)){
			strcpy(smin,s[i]);
		}
		
	}
	
	printf("\n- Chuoi co kich thuoc lon nhat: %s (%d)",smax,strlen(smax));
	
	printf("\n- Chuoi co kich thuoc lon nhat: %s (%d)",smin,strlen(smin));
	printf("\n______________________________________________________\n");
}
//3
float AvarageLength(char s[100][100], int n){
	int i;
	float sum;
	float avg;
	for(i=0;i<n;i++){
		sum += strlen(s[i]);
	}
	avg=sum/n;
	return avg;
}
//4
void Avgup(char s[100][100], int n,float avglength){
	int i;
	printf("4, Chuoi co kich thuoc lon hon trung binh: ");
	for(i=0;i<n;i++){
		if(strlen(s[i]) > avglength){
			printf("\n - S[%d]: ",i);
			printf("'%s' (%d)",s[i],strlen(s[i]));
		}
	}
	printf("\n______________________________________________________\n");
}
//5
void SortArray(char s[100][100], int n){
	printf("5, Sap xep cac chuoi:");
	printf("\n-Tang dan: ");
	int i,j;
	char stemp[n];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( strlen(s[i]) > strlen(s[j]) ){
				strcpy(stemp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],stemp);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("\n   %d - '%s'",i+1,s[i]);
	}
	printf("\n-Giam dan: ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( strlen(s[i]) < strlen(s[j]) ){
				strcpy(stemp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],stemp);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("\n   %d - '%s''",i+1,s[i]);
	}
	printf("\n______________________________________________________\n");
}
//6
void MaxMinASCII(char s[100][100], int n){
	
	int i;
	char smax[100];
	char smin[100];
	strcpy(smax,s[0]);
	strcpy(smin,s[0]);
	printf("6, Chuoi lon nhat, nho nhat theo ASCII: ");
	
	for(i=0;i<n;i++){
		if( strcmp(smax,s[i]) < 0 ){
			strcpy(smax,s[i]);
		}
		if( strcmp(smax,s[i]) > 0 ){
			strcpy(smin,s[i]);
		}
	}
	printf("\n- Lon nhat ASCII: ");
	puts(smax);
	printf("\n- Nho nhat ASCII: ");
	puts(smin);
	printf("\n______________________________________________________\n");
}
//7
void SortASCII(char s[100][100],int n){
	
	
	char stemp[100];
	int i,j;
	char t[100];
	printf("8, Sap xep cac chuoi theo ASCII");
	for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }
 
   for (i = 0; i < n; i++) {
      printf("\n A[%d]: %s",i,s[i]);
   }
	
	printf("\n______________________________________________________\n");
}
//8
void EnterStr(char s[100][100],int n){
	int i,j,max,min;
	char s1[1][100];
	int id=40;
	int check =0;
	
	while(id > 30){
		printf("\n9, Nhap chuoi S1 bat ky ( kich thuoc < 30 ): ");
		fflush(stdin);
		gets(s1[0]);
		id = strlen(s1[0]);
	}
	printf("- Chuoi da nhap: '%s' ",s1[0]);
	printf("\n- Chuoi co kich thuoc bang S1 (%d): ",id);
	for(i=0;i<n;i++){
		if( strlen(s[i]) == id ){
			printf("\n     A[%d]: %s",i,s[i]);
		}
		else
			check++;
	}
	if( check == n ){
		printf("\n     KHONG CO.");
	}
	
	printf("\n- Chuoi A co chua chuoi A1:");
	for(i=0;i<n;i++){
		if( strstr(s[i],s1[0]) != NULL ){
			printf("\n     A[%d] %s",i,s[i]);
		}
	}
	printf("\n______________________________________________________\n");
}
//9
//10
void Email(char s[100][100], int n){
	int i,j;
	int check =0;
	fflush(stdin);
	char s1[10][10] = {"@gmail.com"};
	printf("\n10, Kiem tra dinh dang @gmail.com:");
	for(i=0;i<n;i++){
		if( strstr(s[i],s1[0]) != NULL ){
			printf("\nA[%d] %s",i,s[i]);
			check =1;
		}
	}
	if(check == 0){
		printf("KHONG CO.");
	}
	printf("\n______________________________________________________\n");
}
//11
int KiemTraSo(char s[100][100],int n){
 	int check=0;
 	int i,j,k;
 	printf("\n12, Chuoi co ky tu so: ");
 		for(i=0;i<n;i++){
     		for(j=0;j<n;j++){
				for(k=48;k<=57;k++){
       				if( s[i][j] == k) check=1;
				}
			}
		
			printf("\nA[%d] co chua ky tu so.",i);
		}
		printf("\n______________________________________________________\n");
 	return check;  
}
//12
int KiemTraHoa(char s[100][100],int n){
 	int check=0;
 	int i,j,k;
 	printf("\n12, Chuoi co ky tu in hoa: ");
 		for(i=0;i<n;i++){
     		for(j=0;j<n;j++){
				for(k=65;k<=90;k++){
       				if( s[i][j] == k) check=1;
				}
			}
		
			printf("\nA[%d] co chua ky tu hoa.",i);
		}
	printf("\n______________________________________________________\n");
 	return check;  
}
//13
void TimKyTu(char s[100][100],int n){
	int i,j;
	char s1[1][1];
	printf("\nNhap ky tu c: ");
	fflush(stdin);
	gets(s[0]);
	
	printf("- Chuoi A co chua ky tu C:");
	for(i=0;i<n;i++){
		for(i=0;j<n;j++){
			
		}
	}
	printf("\n______________________________________________________\n");
}
//14
void DemTu(char s[100][100],int n){
	int i,j,count;
	count =0;
	int k =32;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if ( s[i][j] == k){
					count ++;
				}
			}
			printf("\n A[%d] co %d tu:",i,count);
		}
		count=0;
	}
	
	printf("\n______________________________________________________\n");
}
//printf("\n______________________________________________________\n");
int main(){
	
	int i,j,k,n,max;
	char s[100][100];
	char s1[100][100];
	
	
	do {
    	printf("Enter the number of Input string: "); 
    	scanf("%d",&n);
  	}while(!(n>0 && n<=50));
  	
  	InputString(s,n); // nhap mang 1 
	OutputString(s,n); // xuat mang 1
	MaxMinLength(s,n); // in ra mang lon nhat, nho nhat 2
		float avglength = AvarageLength(s,n);
		printf("3, Kich thuoc trung binh: %g",avglength); // in ra kick thuoc trung binh tra ve tu ham AvarageLength 3
		printf("\n______________________________________________________\n");
	Avgup(s,n,avglength); // in ra string co kich thuoc lon hon trung binh 4
	SortArray(s,n); // sap xep 5 
	MaxMinASCII(s,n); // max min theo ascii 6
	SortASCII(s,n);// sap xep theo ascii
	Email(s,n);
	KiemTraSo(s,n);
	KiemTraHoa(s,n);
	DemTu(s,n);

	EnterStr(s,n);
	TimKyTu(s,n);
	
	return 0;
}

