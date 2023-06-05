#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

//String lesson.
//Defination: La mang ky tu 1 chieu.
//declare:char s[100];
//include: ky tu ket thuc chuoi ( '\0' hoac NULL)
//nhap chuoi: gets(s);





int main(){
	
	/*
	char s[100];
	printf("- Enter string: ");
	gets(s);// nhap chuoi gets
	printf("- String (printf): %s. String (puts): ",s); // in chuoi = printf
	puts(s);// in chuoi = puts
	printf("- Ky tu dau tien: %c",s[0]); // in ky tu 
	
	s[0] = 'B';
	puts(s);
	
	s[4] = NULL; // ngat chuoi
	puts(s);
	
	*/
	
	/* mot vai ham xu ly chuoi */
	// library: #include<string.h>
	char s1[100] = "ABC123";
	char s2[100] = "abcXYZ";
	int len;
	
	//strcpy(s1,s2); // 1.gan chuoi s2 vao s1 ( s1 = s2)
	//puts(s1);
	len = strlen(s1); //2.do dai cua string
	printf("string length: %d\n",len);
	//strcat(s1,s2); //3. noi 2 string
	//puts(s1);
	printf("check: %s\n",strchr(s1,'Z')); // check trong chuoi co ky tu Z khong
	printf("check: %s\n",strstr(s1,s2)); // check trong s1 co chua s2 khong (dung= string; sai=null)
	strlwr(s2); // uppercase -> lowercase 
	puts(s2);
	strupr(s2); //lowercase -> uppercase
	puts(s2);
	strrev(s1); // rotate  the string
	puts(s1);
	
	strcmp(s1,s2); // string compare: 
	// return a number > 0 when s1 > s2
	// return a number < 0 when s1 < s2
	// return a number = 0 when s1 = s2
	printf("compare s1 - s2 : %d",strcmp(s1,s2));
	// quy uoc: bat dau tu ben trai, lay tung cap ky tu cua 2 string de so sanh
	// - neu 2 ky tu giong nhau -> lay tiep 2 ky tiep theo de so sanh.
	// - neu 2 ky tu khac nhau -> dung lai roi ket luan ( ky tu nao lon hon => chuoi do lon hon )
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

