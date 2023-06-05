#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_LINE_LENGTH 1000

typedef struct {
  char Ten[30];
  char GioiTinh[3];
  float DiemPython;
  float DiemC;
  float DiemTB;
  char KetQua[10];
} HocVien; 

int NhapN(){
  	int n;
  	do{
    	printf("Nhap so luong hoc vien: ");
    	scanf("%d",&n);
  	}while(n<=0);
  	return n;
}

void NhapLieu(HocVien* HV,int n){
	int i;
	for(i=0;i<n;i++){
		printf("___________________________________________\n");
		printf("\nNhap thong tin cho Hoc Vien so %d:",i+1);
		//nhap ho ten
		printf("\nHo Ten: ");
		fflush(stdin);
		gets(HV[i].Ten);
		//nhap gioi tinh
		printf("Gioi Tinh: ");
		fflush(stdin);
		gets(HV[i].GioiTinh);
		//Nhap Diem Python
		do{
      		printf("Nhap diem Python: ");
      		scanf("%f",&HV[i].DiemPython);
    	}while(!(HV[i].DiemPython>=0 && HV[i].DiemPython<=10));
		//Nhap diem C
		do{
      		printf("Nhap diem C: ");
      		scanf("%f",&HV[i].DiemC);
    	}while(!(HV[i].DiemC>=0 && HV[i].DiemC<=10));
	}
}

void TinhDiemTB(HocVien* HV, int n,float DTB[100]){
	int i;
	for(i=0;i<n;i++){
		DTB[i]= (HV[i].DiemC*2 + HV[i].DiemPython)/3;
		HV[i].DiemTB = DTB[i];
	}
	for(i=0;i<n;i++){
		if( HV[i].DiemTB < 5 ){
			if( strcmp(HV[i].GioiTinh,"Nu") == 0 || strcmp(HV[i].GioiTinh,"nu") == 0 ){
				strcpy(HV[i].KetQua,"Dau");
			}
			else
				strcpy(HV[i].KetQua,"Truot");
		}
		else
			strcpy(HV[i].KetQua,"Dau");
	}
}

void HienThiDSHV(HocVien* HV,int n){
	int i;
	printf("\n___________________________________________1, Danh Sach Hoc Vien:");
	for(i=0;i<n;i++){
		
		printf("\n- Hoc vien So %d:",i+1);
		printf("\n- Ho Va Ten: %s",HV[i].Ten);
  		printf("\n- Gioi Tinh: %s",HV[i].GioiTinh);
  		printf("\n- Diem Python: %g",HV[i].DiemPython);
  		printf("\n- Diem C: %g",HV[i].DiemC);
  		printf("\n- Diem Trung Binh: %.2g",HV[i].DiemTB);
  		printf("\n- Ket Qua: %s",HV[i].KetQua);
  		printf("\n_______________");
  		
	}
}

void HienThiTheoThuTu(HocVien* HV,int n){
	int i,j;
	HocVien temp;
	//sap xep
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( HV[i].DiemTB < HV[j].DiemTB ){
				temp = HV[i];
				HV[i] = HV[j];
				HV[j] = temp;
			}
		}
	}
	//in ra thu tu
	printf("\n___________________________________________2, Danh Sach Hoc Vien Theo Thu Tu Diem Trung Binh Giam Dan:");
	for(i=0;i<n;i++){
		
		printf("\n- Hoc vien So %d:",i+1);
		printf("\n- Ho Va Ten: %s",HV[i].Ten);
  		printf("\n- Gioi Tinh: %s",HV[i].GioiTinh);
  		printf("\n- Diem Python: %g",HV[i].DiemPython);
  		printf("\n- Diem C: %g",HV[i].DiemC);
  		printf("\n- Diem Trung Binh: %.2g",HV[i].DiemTB);
  		printf("\n- Ket Qua: %s",HV[i].KetQua);
  		printf("\n_______________");
  		
	}
	
}

void TimHV(HocVien* HV,int n){
	int i;
	char name[100];
	int check=0;
	printf("\n___________________________________________3, Nhap Ten Hoc Vien Muon Tim:");
	printf("\nNhap ten hoc vien muon tim: ");
	fflush(stdin);
	gets(name);
	for(i=0;i<n;i++){
		if( strcmp(HV[i].Ten,name) == 0 ){
			check++;
		}
	}
	if( check > 0){
		printf("\nTim thay %d Hoc vien giong voi ten da nhap!",check);
	}
	else
		printf("\nKHONG tim thay hoc vien giong voi ten da nhap!");
}

void TimDau(HocVien* HV,int n){
	int i;
	char dau[100] = "Dau";
	printf("\n___________________________________________4, Hoc Vien Da Dau: ");
	int check = 1;
	for(i=0;i<n;i++){
		if( strcmp(HV[i].KetQua,dau) == 0 ){
			
			printf("\n%d, Ten: %s ( Hoc Vien so %d).",check,HV[i].Ten,i+1); //ten
			printf("\n   - Gioi Tinh: %s",HV[i].GioiTinh); //gioi tinh
			printf("\n   - Diem Python: %g",HV[i].DiemPython); //diem python
			printf("\n   - Diem C: %g",HV[i].DiemC); //diem c
			printf("\n   - Diem Trung Binh: %g",HV[i].DiemTB); //diem trung binh
			check++;
			
		}
	}
	if(check == 1){
		printf("\n- KHONG co hoc vien nao DAU.");
	}
}

void TimTruot(HocVien* HV,int n){
	int i;
	char dau[100] = "Truot";
	printf("\n___________________________________________5, Hoc Vien Da Truot: ");
	int check = 1;
	for(i=0;i<n;i++){
		if( strcmp(HV[i].KetQua,dau) == 0 ){
			
			printf("\n%d, Ten: %s ( Hoc Vien so %d).",check,HV[i].Ten,i+1); //ten
			printf("\n   - Gioi Tinh: %s",HV[i].GioiTinh); //gioi tinh
			printf("\n   - Diem Python: %g",HV[i].DiemPython); //diem python
			printf("\n   - Diem C: %g",HV[i].DiemC); //diem c
			printf("\n   - Diem Trung Binh: %g ",HV[i].DiemTB); //diem trung binh
			check++;
			
		}
	}
	if(check == 1){
		printf("\n- KHONG co hoc vien nao TRUOT.");
	}
}

void Diem8(HocVien* HV,int n){
	int i;
	printf("\n___________________________________________6, Hoc Vien co diem TB tren 8: ");
	int check = 1;
	for(i=0;i<n;i++){
		if( HV[i].DiemTB >= 8 ){
			
			printf("\n%d, Ten: %s ( Hoc Vien so %d).",check,HV[i].Ten,i+1); //ten
			printf("\n   - Gioi Tinh: %s",HV[i].GioiTinh); //gioi tinh
			printf("\n   - Diem Python: %g",HV[i].DiemPython); //diem python
			printf("\n   - Diem C: %g",HV[i].DiemC); //diem c
			printf("\n   - Diem Trung Binh: %g ",HV[i].DiemTB); //diem trung binh
			check++;

		}
	}
	if(check == 1){
		printf("\n- KHONG co hoc vien nao co diem TB tren 8.");
	}
}

void DocGhi(HocVien* HV,int n){
	int choice;
	int i;
	char    line[MAX_LINE_LENGTH];
	
	printf("\n___________________________________________7, Ghi Va Doc File: ");
	printf("\n1. Ghi File.");
	printf("\n2. Doc File.");
	printf("\n3. Exit.");
	
	printf("\nEnter Choice (1-3): ");
	scanf("%d",&choice);
	while(!(choice >=1 && choice<=3) ){
		printf("\nRe-Enter Choice (1-3): ");
		scanf("%d",&choice);
	}
	
	FILE* fp;
	
	int exit =1;
	while( exit != 0 ){	
		switch(choice){
			case 1:{
				if( (fp = fopen ("DSHV.txt", "w")) == NULL) {
				  		printf("\n-----> Open Failed!\n");
					}
				fprintf(fp,"\n___________________________________________ Danh Sach Hoc Vien ___________________________________________");
					
				for(i=0;i<n;i++){
					fprintf(fp,"\n- Hoc vien So %d:",i+1);
					fprintf(fp,"\n- Ho Va Ten: %s",HV[i].Ten);
			  		fprintf(fp,"\n- Gioi Tinh: %s",HV[i].GioiTinh);
			  		fprintf(fp,"\n- Diem Python: %g",HV[i].DiemPython);
			  		fprintf(fp,"\n- Diem C: %g",HV[i].DiemC);
			  		fprintf(fp,"\n- Diem Trung Binh: %.2g",HV[i].DiemTB);
			  		fprintf(fp,"\n- Ket Qua: %s",HV[i].KetQua);
			  		fprintf(fp,"\n_______________");
				}
				printf("-----> Write To File Succesfully!.");
				fclose(fp);
				break;
			}
			case 2:{
				if( (fp = fopen ("DSHV.txt", "r")) == NULL) {
				  		printf("\n-----> Open Failed!\n");
				}
				
				while(fgets(line, MAX_LINE_LENGTH, fp)){
					printf(line);
				}
				printf("-----> Read File Succesfully!.");
				printf("\n");	
				fclose(fp);
				break;
			}
			case 3:{
				exit=0;
				printf("\nExited.");
				break;
			}
		}
		
		if(exit == 1){
			printf("\nEnter Choice(1-3): ");
			scanf("%d",&choice);
			while(!(choice >=1 && choice<=3)){
				printf("\nRe-Enter Choice(1-3): ");
				scanf("%d",&choice);
			}
		}
	}
}

int main(){
	int n,i;
	HocVien* HV;
	float DTB[100];
	int choice;
	
	
	
	n=NhapN(); //Nhap so luong hoc vien
  	HV=(HocVien*)malloc(n*sizeof(HocVien)); //Cap phat vung nho
	   	
	NhapLieu(HV,n); //Nhap thong tin cho tung hoc vien
	TinhDiemTB(HV,n,DTB); //Tinh Diem Trung Binh va gian gia tri dau truot
	HienThiDSHV(HV,n); //Hien Thi danh sach hoc vien sau khi tinh diem trung binh
	printf("\n\nEnter to continue.....\n");
	getch();
	HienThiTheoThuTu(HV,n); //Hien Thi danh sach hoc vien thoe thu tu diem TB
	printf("\n\nEnter to continue.....\n");
	getch();
	TimHV(HV,n);//Tim Hoc Vien;
	printf("\n\nEnter to continue.....\n");
	getch();
	TimDau(HV,n);//Hien Thi HV Dau 
	printf("\n\nEnter to continue.....\n");
	getch();
	TimTruot(HV,n);//Hien Thi HV Truot
	printf("\n\nEnter to continue.....\n");
	getch();
	Diem8(HV,n);//Hien Thi HV co diem trung binh tren 8
	printf("\n\nEnter to continue.....");
	getch();
	DocGhi(HV,n);
	
	
	
	return 0;
}

