#include <stdio.h>
int main() {
   int i, j, rows;
   int space;
   int k;
   int count =0;
   int count1 =0;
   int coef =1;
   int number =1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   int n;
   n=rows;
   //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac vuong: \n");
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
    printf("\nTam giac vuong nguoc: \n");
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac deu: \n");
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
    printf("\nTam giac deu nguoc: \n");
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nhinh vuong dau x: \n");
   for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if (i == 1 || i == j || j == 1 || j == rows || i == rows || i + j == rows + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nhinh binh hanh: \n");
   for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < rows - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= rows; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == rows)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
     //-----------------------------------------------------------------------------------------------------------
   printf("\nhinh thoi: \n");
   for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
    printf("\nhinh thoi dao nguoc: \n");
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    for ( i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
    printf("\ntam giac rong: \n");
     for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
     printf("\nhinh: \n");
      for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == j || i + j == n + 1)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
     printf("\nhinh chu z: \n");
   for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == j)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nhinh trai tim: \n");
   	for (i = rows / 2; i <= rows; i += 2)
    {
        /* Printing Spaces */
        for (j = 1; j < rows - i; j += 2)
        {
            printf("   ");
        }
        /* printing stars for left semi circle */
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        /* Printing Spaces */
        for (j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }
        /* printing stars for right semi circle */
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        /* move to next row */
        printf("\n");
    }

    /* printing inverted start pyramid */
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j < rows; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf(" * ");
        }
        /* move to next row */
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------------
   
   
    //-----------------------------------------------------------------------------------------------------------
   
   
   
   
   
   
   
   
    //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac vuong so: \n");
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
  printf("\nTam giac vuong so nguoc: \n");
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac so deu: \n");
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac so deu dat dau bang 1: \n");
    for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
    //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac vuong so tang dan: \n");
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   //-----------------------------------------------------------------------------------------------------------
   printf("\nTam giac so: \n");
   for (i = 1; i <= n; i++)
    {
        for ( j = 1; j < 2 * n; j++)
        {
            if (abs(n - j) <= (i - 1))
            {
                printf("%3d", i - abs(n- j));
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
   //-----------------------------------------------------------------------------------------------------------
    printf("\nTam giac so nguoc: \n");
   for(i=rows; i>=1; i--){
            //outer for loop
        for(j=1; j<=space; j++)
        	printf("  ");
         	for(j=1; j<=i; j++)
        		printf("%d ",j);

         		for(j=i-1; j>=1; j--)
        			printf("%d ",j);
	printf("\n");
    space++;
    }
   //-----------------------------------------------------------------------------------------------------------
   
   //-----------------------------------------------------------------------------------------------------------
   
   //-----------------------------------------------------------------------------------------------------------
   
   //-----------------------------------------------------------------------------------------------------------
   
   
   
   
   
   
   
   
   return 0;
}
