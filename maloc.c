#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int* ptr;
    int n, i;

    printf("Number of elements: ");
    scanf("%d", &n);
    printf("Entered amount of elements: %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
        {
            printf("Successfully allocated thanks to malloc \n");
        

        for (i=0;i<n;i++)
        {
            ptr[i] = i+1;
        }

        printf("the elemenets of the array are: ");
        for (i=0; i < n ; i++)
        {
            printf("%d, ", ptr[i]);
        }
        free(ptr);
    }
 return 0;
}