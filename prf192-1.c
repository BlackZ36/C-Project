#include<stdio.h>

int main(){
	int a,b,c,i,j;
//-------------------------------------------- Vong lap While	
	/*
	//vong lap do-while
	//cu phap:
	//do{
		// khoi lenh
	//} while( dieu kien)
	
	//vi du
	int month;
	do{
		printf("Enter month: ");
		scanf("%d",&month);
	}while(!(month >= 1 && month <= 12));
	printf("Month: %d",month);
	
	*/
//-------------------------------------------- Vong lap For	
	
	// Vong lap for ( biet truoc so lan lap)
	// Cu phap: for(i=0;i<=n;i++){khoi lenh}
	
	//vi du: in ra cac so tu 1-10
	//for(i=1;i<=10;i++){
	//	printf("%d ",i);
	//}
	
	//vi du: in ra ca so chan tu 1-10;
	//for(i=2;i<=10;i+=2){
	//		printf("%d ",i);
	//}
	
	//vi du: in cac so chia het cho 7
	//	for(i=0;i<=10;i++){
	//		if(i%7==0){
	//			printf("%d ",i);
	//		}
	//	}
	
	//in ra hinh tam giac
	for(i=0;i<=10;i++){
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
