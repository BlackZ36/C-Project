#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n, arr[10], i, check = 0, j, k;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
 
    
    printf("OUTPUT:\n");
    //xoa so le trung lap
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j] && arr[i] % 2 != 0){
                for (k = j; k < n; k++){
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++){
        if (check == 0)
            check = 1;
        else
            printf(" ");
        printf("%d", arr[i]);
    }

    return (0);
}
