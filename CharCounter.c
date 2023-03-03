#include <stdio.h>
#include <string.h>

int charCounter(char* array, int size, char catch)
{
    int count = 0;
    
    for(int i= 0; i < size; i++)
    {
        if(array[i] == catch)
        {
           count = count+1;
        }
    }
    return count;
}

int main (void)
{
    int charCount = charCounter("Hello", 6, 'e');
    printf("%d", charCount);
    
    int charCount2 = charCounter("Seasons greetings", 26, 'e');
    printf("\n%d", charCount2);
}