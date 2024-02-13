/*

      AUTOR: MITRACHE MARIAN NICUŞOR
      DATA: 07.11.2023

      ENUNŢ: Sa se faca conversia notelor romanesti in
             note americane si invers.

      CERINŢE:
      1. Se citeste un numar care reprezinta cazul in care vrei sa se
         face conversia notei;
      2. Apoi se citeste o nuta conform alegerii facute anterior;
      3. Se va afisa nota conversiei.

      INTRARE:
      1. 1 8;
      2. 2 B

      IEŞIRE:
      1. B;
      2. 8.

      ŢINE CONT DE:

*/

#include <stdio.h>
#include <stdlib.h>

int choice;
char us_grade;
double ro_grade;

void RO_US()
{
    printf("Insert a valid romanian grade: ");
    scanf("%lf", &ro_grade);

    if(ro_grade >= 1 && ro_grade <= 6)
        printf("F\n");
    if( ro_grade > 6 && ro_grade <= 7)
        printf("D\n");
    if( ro_grade > 7 && ro_grade <= 8)
        printf("C\n");
    if( ro_grade > 8 && ro_grade <= 9)
        printf("B\n");
    if( ro_grade > 9 && ro_grade <= 10)
        printf("A\n");
    if(ro_grade < 1 || ro_grade > 10)
    {
        printf("ERROR: invalid grade. Enter another grade!\n\n");
        RO_US();
    }

    return main();
}

void US_RO()
{
    printf("Insert a valid US grade: ");
    scanf(" %c", &us_grade);

    switch(us_grade)
    {

    case 'A': printf("10\n");
              break;

    case 'a': printf("10\n");
              break;

    case 'B': printf("9\n");
              break;

    case 'b': printf("9\n");
              break;

    case 'C': printf("8\n");
              break;

    case 'c': printf("8\n");
              break;

    case 'D': printf("7\n");
              break;

    case 'd': printf("7\n");
              break;

    case 'F': printf("6\n");
              break;

    case 'f': printf("6\n");
              break;

    default: printf("ERROR: invalid grade. Enter another grade!\n\n");
             US_RO();

    }

    return main();
}

int main()
{
    printf("\nFor case RO-US chose 1 \nFor case US-RO chose 2\nFor exit 3\n");
    printf("What is your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {

       case 1: RO_US();
               break;

       case 2: US_RO();
               break;

       case 3: return 0;
               break;

       default: printf("ERROR: invalid choice. Choose again!\n\n");
                main();

    }

    return 0;
}
