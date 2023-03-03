#include <stdio.h>
#include <string.h>
// Make an int array, and have each value squared

// Array of intergers where at each index store the square of the number of the index

// For example, at [2] should be for

// Must have array length of [25]

int array[25];
int main (void)
{
    

    for (int i = 0; i<25;i++ )
    {
        array[i] = i * i ;
        printf("%d\n", array[i]);
    }
}
    
