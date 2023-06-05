#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

//Lesson: Ham ( Function )
//Defined 1: Dung voi muc dich de thuc hien mot cong vien cu the nao do ( kiem tra nguyen to, tinh can bac hai, tinh tong ,.... )
//		 - Giup cho viec edit,update code de dang hon. Code clean hon.
//		 - Ham duoc su dung nhieu lan va duoc su dung o nhieu noi.
//

//Defined 2:  Ngoai nhung ham co san, co the tu tao ham va su dung voi muc dich cu the
//Declare: kieu_tra_ve + ten_ham([danh_sach_tham_o]){
//	than ham;
//	[return gia_tri;]
//}

//declare 1: kieu_tra_ve: void khong tra ve gia tri nen khong can return gia_tri; hoac su dung return; ( khong tra ve cai gi ), 
//		   - neu tra ve mot gia tri cu the phai co return gia_tri;

//Properties:

int Sum(int a, int b){
	int c=0;
	c =a +b;
	return c;
}

int main(){
	int a,b;
	a=5;
	b=20;
	printf("tong: %d",Sum(a,b));

	return 0;
}

