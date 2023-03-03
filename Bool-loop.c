#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool list[10];

int main (void)
{

    for(int i = 0; i < 10; i++)
    {
         
        if ( i % 2 == 0)
        {
            list[i] = true;
            printf("%d", 1);

        }
        else
        {
            list[i] = false;
            printf("%d", 0);
        }
        
    }
 
}


