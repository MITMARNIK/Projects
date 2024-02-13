/*

      AUTOR: MITRACHE MARIAN NICUSOR
      DATA: 24.10.2023
      ORA: 10:01

      ENUNT: Distreazate jucand sudoku.

      CERINTE:
      1. Introdu pentru fiecare linie cate un set de numere cu spatiu intre ele;
      2. Pentru a schimba un numar trebie sa introduci linia coloana si coloana
         locului unde vrei sa pui noul numar si numarul respectiv;

      INTRARE: CE MODEL SUDOKU PREFERI.
      IESIRE: IN FUNCTIE DE CUM REZOLVI.

      TINE CONT DE:
      1. Ai grija sa nu gresesti (nu trebuie sa ai pe linia si coloana unde pui
         numarul acelasi numar si sa nu il ai de mai multe ori nici in caseta
         unde il plasezi.

*/

#include <stdio.h>
#include <stdlib.h>

int sudoku[9][9], original_sudoku[9][9];

void citirea()
{
    int i, j, x;
    for(i = 0; i < 9; i++)
    {
        printf("linia %d = ", i+1);
        for(j = 0; j < 9; j++)
          {
            scanf("%d", &x);
            sudoku[i][j]=x;
            original_sudoku[i][j]=x;
          }

    }
    system("@cls||clear");

}

void afisare()
{
    int i, j;
    printf("\n+---------+---------+---------+\n");
    for(i = 0; i < 9; i++)
    {
        printf("|");
        for(j = 0; j < 9; j++)
        {
            if(sudoku[i][j]==0)
                printf(" . ");
              else printf(" %d ", sudoku[i][j]);


            if((j+1)%3==0)
                printf("|");

        }

        if((i+1)%3==0)
            printf("\n+---------+---------+---------+");


      printf("\n");
    }

}

int main()
{
    citirea();
    afisare();

    int i, j, n;

    while(1)
    {
       printf("Linia, Coloana, Numarul\n");
       scanf("%d%d%d", &i, &j, &n);

       if(original_sudoku[i-1][j-1]==0)
           {
               sudoku[i-1][j-1]=n;
               system("@cls||clear");
           }
           else printf("Nu ai voie sa modifici\nnumarul de la aceasta pozitie\n");

       afisare();
    }


    return 0;
}
