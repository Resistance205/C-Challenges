#include <stdio.h>

int main(void)
{
    const int size = 10;
    char string[11] = "Guns Akimbo";
    int intChar[size];

     printf("%s\n", string);
    for (int i=0; i<size; i++)
    {
        intChar[i] = (int)string[i];
        printf("%d\n", intChar[i]);
    }





}