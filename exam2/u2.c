/*

Uppgift 2
---------

Skriv ett program som heter "u2" som skriver ut alla ojämna tal från 1
till och med 31 med hälp av en loop.

OUTPUT

1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int counter;

    for(counter = 1; counter <= 31; counter++)
    {
        if(counter%2 == 1)
        {
            printf("%d ", counter);
        }
    }


    return 0;
}