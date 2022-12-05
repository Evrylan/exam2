/*

Uppgift 5
---------

Skriv ett program som heter "bank" som innehåler följande struktur "Bank".

struct Bank{
	char name[20];
	int id;
	float account;
	float input;
	float output;
}

Initialisera strukturen "Bank" med följande in data:

Dennis 1024 120000.0  5000.0 -2500.0
Richie 2048  95000.3  2500.5 -1220.0

Skriv ut name, id, account, input, output och balance
(balance=account+input-output) på skärmen som följande: (respektera
avståndet mellan kolumnerna och horisontella raden ---)

OUTPUT

Name     id     account     input    output    balance
------------------------------------------------------- 
Dennis   1024   120000.0    5000.0   -2500.0   122500.0
Richie   2048    95000.3    2500.5   -1220.0    96280.8

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


struct Bank{
	char name[20];
	int id;
	float account;
	float input;
	float output;
} Bank;

int main()
{
	float bal1;
	float bal2;

	struct Bank p1 = {"Dennis", 1024, 120000.0, 5000.0, -2500.0};
	struct Bank p2 = {"Richie", 2048, 95000.3, 2500.5, -1220.0};

	bal1 = p1.account + p1.input + p1.output;
	bal2 = p2.account + p2.input + p2.output;

	printf("Name     id     account     input    output    balance\n");
	printf("-------------------------------------------------------\n");
	printf("%s   %d   %0.1f    %0.1f   %0.1f   %0.1f\n",p1.name, p1.id, p1.account, p1.input, p1.output, bal1);
	printf("%s   %d    %0.1f    %0.1f   %0.1f    %0.1f\n",p2.name, p2.id, p2.account, p2.input, p2.output, bal2);


	return 0;
}


