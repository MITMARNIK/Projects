/*

      AUTOR: MITRACHE MARIAN NICUŞOR
      DATA:

      ENUNŢ:

      CERINŢE:

      INTRARE:
      IEŞIRE:

      ŢINE CONT DE:

*/
#include <stdio.h>
#include <stdlib.h>

int meniu();
int meniu_joc();
int instructiuni();
int joc();
int iesire();
int eroare();
void afisare();
int reintroducerePar();
int reintroducereImpar();
int verificare();
int dinNou();

char v[3][3]={ {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} };
int nr=0;

int main()
{
    meniu();

    return 0;
}

int meniu()
{
    int raspuns;

    printf("  X SI 0  \n");
    printf("\nVreti sa jucati X si 0?\n");
    printf("\n1. Da");
    printf("\n2. Nu\n");
    scanf("%d", &raspuns);

            if(raspuns == 1)
            {
                system("@cls||clear");
                meniu_joc();
            }
    else if(raspuns == 2)
                iesire();
    else eroare();

}

int meniu_joc()
{
    int raspuns;

    printf("  X SI 0  \n");
    printf("\n1. Instructiuni");
    printf("\n2. Start joc\n");
    scanf("%d", &raspuns);

            if(raspuns == 1)
               return instructiuni();
    else if(raspuns == 2)
               return  joc();
    else{
                system("@cls||clear");
                printf("ERROR: Ati ales o varianta inexistenta!\n");
                return meniu_joc();
            }

}

int instructiuni()
{
    int raspuns;

    system("@cls||clear");
    printf("  X SI 0  \n");
    printf("\n-Jucatorul cu numarul unu va juca cu X;\n-Acesta fiind si cel care incepe jocul;\n");
    printf("-Jucatorul cu numarul doi va juca cu 0;");
    printf("\n-Fiecare jucator pe rand va alege o pozitie,\n la care se va completa cu X sau 0;\n");
    printf("-Jocul se va termina cand toate cele 9\n pozitii se vor ocupa;\n");
    printf("-Ca sa castigati trebuie sa completati\n pe o linie, pe o coloana sau pe \n o diagonala cu X sau 0;\n");
    printf("\n1. Start joc\n");
    scanf("%d", &raspuns);

    if(raspuns == 1)
        return joc();
    else{
                system("@cls||clear");
                printf("ERROR: Ati ales o varianta inexistenta\n");
                return meniu_joc();
          }
}

int joc()
{
    system("@cls||clear");
    int i, j, k;
    afisare();
    k=1;
    while(k<=9 && nr==0)
    {
        printf("\n\nINTRODUCETI: Linia si Coloana: ");
        scanf("%d%d", &i, &j);

        if(k%2 == 0)
            {
                if(v[i-1][j-1] == '-')
                    v[i-1][j-1]='0';
                else{
                            printf("ERROR: Nu poti pune 0 acolo!");
                            reintroducerePar();
                       }
            }
        else{
                    if(v[i-1][j-1] == '-')
                        v[i-1][j-1]='X';
                    else{
                            printf("ERROR: Nu poti pune X acolo!");
                            reintroducereImpar();
                       }
               }


        system("@cls||clear");
        afisare();
        verificare();
        k++;

    }

    //system("@cls||clear");
    //afisare();
    //verificare();

}

int iesire()
{
    system("@cls||clear");
    printf("Va multumim!");
    return 0;
}

int eroare()
{
    system("@cls||clear");
    printf("\nERROR: Ati ales o varianta inexistenta!\n\n");
    return meniu();
}

void afisare()
{
    int i, j;

    for(i=0; i<3; i++)
        {
            printf(" ------------- \n");
            printf(" | ");
            for(j=0; j<3; j++)
            {
                    printf("%c", v[i][j]);
                    printf(" | ");

            }
            printf("\n");

        }

        printf(" ------------- \n");
}

int reintroducerePar()
{
    int i, j;
    printf("\n\nINTRODUCETI: Linia si Coloana: ");
    scanf("%d%d", &i, &j);
    if(v[i-1][j-1] == '-')
        return v[i-1][j-1]='0';
    else{
                printf("ERROR: Nu poti pune 0 acolo!");
                reintroducerePar();
            }
}

int reintroducereImpar()
{
    int i, j;
    printf("\n\nINTRODUCETI: Linia si Coloana: ");
    scanf("%d%d", &i, &j);
    if(v[i-1][j-1] == '-')
        return v[i-1][j-1]='X';
    else{
                printf("ERROR: Nu poti pune X acolo!");
                reintroducereImpar();
            }
}

int verificare()
{
              if(v[0][0]=='0' && v[0][1]== '0' && v[0][2]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[0][0]=='X' && v[0][1]=='X' && v[0][2]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[1][0]=='0' && v[1][1]=='0' && v[1][2]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[1][0]=='X' && v[1][1]=='X' && v[1][2]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[2][0]=='0' && v[2][1]=='0' && v[2][2]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[2][0]=='X' && v[2][1]=='X' && v[2][2]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[0][0]=='0' && v[1][0]=='0' && v[2][0]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[0][0]=='X' && v[1][0]=='X' && v[2][0]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[0][1]=='0' && v[1][1]=='0' && v[2][1]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[0][1]=='X' && v[1][1]=='X' && v[2][1]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[0][2]=='0' && v[1][2]=='0' && v[2][2]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[0][2]=='X' && v[1][2]=='X' && v[2][2]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[0][0]=='0' && v[1][1]=='0' && v[2][2]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[0][0]=='X' && v[1][1]=='X' && v[2][2]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else if(v[0][2]=='0' && v[1][1]=='0' && v[2][0]=='0'){
                  printf("\nJucatorul 2 a castigat!\n");
                  nr++;}
      else if(v[0][2]=='X' && v[1][1]=='X' && v[2][0]=='X'){
                  printf("\nJucatorul 1 a castigat!\n");
                  nr++;}
      else{
            int ok=0;
            for(int i=0; i<3; i++)
                    for(int j=0; j<3; j++)
                        if(v[i][j]=='-')
                            ok++;
            if(ok!=0)
                return 0;
            else printf("\nREMIZA\n");
         }


      return dinNou();
}

int dinNou()
{
    int raspuns;

    printf("Vreti sa jucati din nou?\n");
    printf("\n1. Da\n");
    printf("2. Nu\n");
    scanf("%d", &raspuns);

    if(raspuns == 1)
        {
            system("@cls||clear");
            v[0][0]='-';
            v[0][1]='-';
            v[0][2]='-';
            v[1][0]='-';
            v[1][1]='-';
            v[1][2]='-';
            v[2][0]='-';
            v[2][1]='-';
            v[2][2]='-';
            nr=0;
            return meniu_joc();
        }
    else if(raspuns == 2)
    {
            system("@cls||clear");
            printf("Va multumim!\n");
            return 0;
    }
    else return eroare();

}
