#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

void InputArray(float a[100],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter A[%d]: ",i);
		scanf("%f",&a[i]);
	}
	printf("\n_______________________________________________\n");
}

void OutputArray(float a[100],int n){
	int i;
	printf("Output of Array: ");
	for(i=0;i<n;i++){
		printf("\n A[%d] = %g",i,a[i]);
	}
	printf("\n_______________________________________________\n");
}

void SortArray(float a[100],int n){
	int i,id,ia;
	int j,k;
	int itemp;
	int socuoi;
	j=k=0;
	id=ia=0;
	float aduong[100];
	float aam[100];
	
	
	//tach am duong
	for(i=0;i<n;i++){
		if(a[i] > 0){
			aduong[id] = a[i];
			id++;
		}
		if(a[i] < 0){
			aam[ia] = a[i];
			ia++;
		}
	}
	
	
	
	//ghep am duong vao a khi n chan
	if ( id >= ia){
		id=ia=0;
		for(i=0;i<n;i++){
			if( i % 2 == 0){
				a[i] = aduong[id];
				id++;
			}
			if( i % 2 != 0){
				a[i] = aam[ia];
				ia++;
			}
		}	
	}
	else if ( ia >= id){
		id=ia=0;
		for(i=0;i<n;i++){
			if( i % 2 == 0){
				a[i] = aam[ia];
				ia++;
			}
			if( i % 2 != 0){
				a[i] = aduong[id];
				id++;
			}
		}	
	}
	
	
	
	// in ra man hinh
	printf("\n_______________________________________________\n");
	printf("Sorted Array:");
	for(i=0;i<n;i++){
		printf("\nA[%d]= %g ",i,a[i]);
	}
}

int main(){
	float a[100];
	float aP[100];
	float aN[100];
	int n,i,j,k;
	printf("Nhap so luong phan tu cho mang: ");
	scanf("%d",&n);
	
	InputArray(a,n);
	OutputArray(a,n);
	SortArray(a,n);
	
	return 0;
}

