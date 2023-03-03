#include <stdio.h>

int main (void)
{
    int ar1[30];
    int ar2[10];
 
   
    for (int i = 0; i<30; i++)
    
    {
        ar1[i] = i * i * i; 

        if (i % 3 == 0)   
        {
            ar2[i / 3] = ar1[i];
        } 
    }
    
    for (int j = 0; j < 10; j++)
    {
        ar2[j] = ar1[3 * j];
    }
}
    

    

