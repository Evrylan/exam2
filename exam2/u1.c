/*

Uppgift 1
---------

Skriv ett program som heter "u1" som deklarerar en funktion "fun1" som
tar två heltal som argumenter och returnera summan av båda tal.

Anropa funktionen "fun1" i main funktionen och skriv ut på skärmen
summan av varje respectiva element av två listor "list1" och "list2".

list1 = {2,4,6,8,10,12}
list2 = {1,3,5,7, 9,11}

OUTPUT

3 7 11 15 19 23

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int fun1(int x, int y)
{
    int result;
    result = x + y;

    return result;
}


int main()
{
    int list1[6] = {2,4,6,8,10,12};
    int list2[6] = {1,3,5,7,9,11};
    int ret1;
    int ret2;
    int ret3;
    int ret4;
    int ret5;
    int ret6;
    
    ret1 = fun1(list1[0],list2[0]);
    ret2 = fun1(list1[1],list2[1]);
    ret3 = fun1(list1[2],list2[2]);
    ret4 = fun1(list1[3],list2[3]);
    ret5 = fun1(list1[4],list2[4]);
    ret6 = fun1(list1[5],list2[5]);

   printf( "%d %d %d %d %d %d\n", ret1,ret2,ret3,ret4,ret5,ret6);


    return 0;
}