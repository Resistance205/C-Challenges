#include <stdio.h>
#include <string.h>

int main(void)
{
    int array[] = {1,2,3,4,5};

    for (int i=4; i< sizeof(array); i-- )
    {
        printf("%d", array[i]);
    }

}