#include <stdio.h>
#include <string.h>


void capStrings(char* text, int size)
{
    int characterDiff = 32;
    
    for (int i = 0; i < size; i++)
    {
        text[i] = (int)text[i] - characterDiff;      
    }
}

int main (void)
{
    char text[15] = "whatup";
    capStrings(text, strlen(text)) ;
    printf("%s", text);

}

    // char shiftedValue = (char)((int)'a' + characterDiff);

    // printf("%c", shiftedValue);


    // for (int i= 0; i< 6; i++)
    // {
    //     for (int j = 0; j <6; j++)
    //     {
    //     numText[j] = (int)text[i +1 ];
    //     numText[j] = text[i  - 32];
    //     upperCase[j] = (int) numText[i];  
    //     printf("%c", upperCase[i]);
    //     }
    // }