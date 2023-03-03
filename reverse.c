#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[6] = "hello";
    
    for (int i = 4; i < strlen(text); i--)
    {
        printf("%c", text[i]);
    }

}