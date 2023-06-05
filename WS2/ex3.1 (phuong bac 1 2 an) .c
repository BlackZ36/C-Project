#include<stdio.h>

main(){

  float a,b;
  
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){
    if(b==0){
      printf("\nPhuong trinh vo so nghiem");
    }else{
      printf("\nVo nghiem");
    }
  }else{
    printf("\nNghiem x= %g",-b/a);
  }

  return 0;
}
