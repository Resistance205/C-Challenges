#include <stdio.h>

int main (void)
{
    int ar1[30];
    int ar2[10];

    for (int i=0;i<30;i++)
    {
        ar1[i] = i;
        printf("%d\n", ar1[i]);
    }
    for (int i=0; i<10; i++)
    {
        ar2[i] = ar1[3 * i];
        printf("%d\n", ar2[i]);
    }
    
}