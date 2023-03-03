#include <stdio.h>
#include <string.h>


int main (void)
{
    char letters[6] = "Shrek";
    int num[5];

    for(int i=0; i < 5; i++)
    {
        num[i] = (int)letters[i];
        printf("%d\n", num[i]);
    }



}