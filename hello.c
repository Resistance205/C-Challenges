#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (void)
{
    char mine [5] = "Ryan";
    printf("%s \n", mine);
    printf("hello world\n");


    char j = 0;
    j += 1000;
   printf("%d\n", j);

    printf("char size: %lu bytes\n", sizeof(char));
  printf("int size: %lu bytes\n", sizeof(int));
  printf("short size: %lu bytes\n", sizeof(short));
  printf("long size: %lu bytes\n", sizeof(long));
  printf("float size: %lu bytes\n", sizeof(float));
  printf("double size: %lu bytes\n", 
    sizeof(double));
  printf("long double size: %lu bytes\n", 
    sizeof(long double));



    
    int age = 370000000;
    int age2 = 3;
    printf("%ld\n", sizeof(age2));
    printf("%ld\n", sizeof(age));


    int prices[2000];

    for (int i = 0; i < 2000; i++)
    {
        prices[i] = i / 2 + 1;
    }

    printf("the price at place 515 is %d\n", prices[5]);





    printf("address without & %p\n", age);
    printf("address with & %p\n",&age);



char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("You entered %s", name);

    }

//  bool x = true;
//  bool y = false;

//  char string[10] = "x";
//     for(int i; i < 5; i++)
//     {
//         if (string[i]==x)
//         {
//             printf("%s", "true");
//         }
//         else
//         {
//             printf("%s", "false");
//         }

//     }
// }
