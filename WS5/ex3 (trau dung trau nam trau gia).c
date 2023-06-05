#include<stdio.h>
	
int main(){
	int x, y, z;
	    for (x = 1; x < 100; x++)
	        for (y = 1; y < 100; y++)
	            for (z = 1; z < 100; z++) {
	                if ((x + y + z == 100) && (15*x + 9*y + z == 300))
	                    printf("Trau dung:%d, Trau nam:%d, Trau gia:%d.\n", x, y, z);
	            }
	
	    return 0;
	}
