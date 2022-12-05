/*

Uppgift 9
---------

Skriv ett program som heter "truth" som skriver ut den
sanningsvärdetabell (truth table) av följande Boolesk uttryck "U":

U = a AND (a OR b)

där a och b är två booleska variabel som kan bara vara "true" eller
"false".

Programmet "truth" ska kunna kompileras och ska skriv ut BARA
sanningsvärdetabell i tre kolumner. Kolonnerna ska vara, i ordning;
värden av a, b och uttrycket U.

*/
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <conio.h>

