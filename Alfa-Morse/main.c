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
#include <string.h>

int main()
{
    meniu();

    return 0;

}

int meniu()
{
    int r;


    printf("  CONVERTOR  ");
    printf("\n\n1. Alfa-Morse");
    printf("\n2. Morse-Alfa");
    printf("\n3. Iesire\n");

    scanf("%d", &r);

    if(r == 1)
        alfa_morse();
    else if(r == 2)
        morse_alfa();
    else if(r == 3)
        return 0;
    else{
         printf("ERROR: Ati eles o varianta inexistenta! Incercati din nou.");
         return meniu();
        }

}

int alfa_morse()
{
        int r;

        system (" @cls || clear ");
        printf("  CONVERTOR  ");
        printf("\n\n1. Conversie caracter");
        printf("\n2. Conversie sir");
        printf("\n3. Inapoi\n");

        scanf("%d", &r);

        if(r == 1)
        {
            system (" @cls || clear ");
            return caracter();
        }
        else if(r == 2)
        {
            system (" @cls || clear ");
            return sir();
        }
        else if(r == 3)
        {
            system (" @cls || clear ");
            return meniu();
        }
        else{
            printf("ERROR: Ati eles o varianta inexistenta! Incercati din nou.");
            return alfa_morse();
        }

}

int morse_alfa()
{
        int r;

        system (" @cls || clear ");
        printf("  CONVERTOR  ");
        printf("\n\n1. Conversie caracter");
        printf("\n2. Conversie sir");
        printf("\n3. Inapoi\n");

        scanf("%d", &r);

        if(r == 1)
        {
            system (" @cls || clear ");
            return morse_caracter();
        }
        else if(r == 2)
        {
            system (" @cls || clear ");
            return morse_sir();
        }
        else if(r == 3)
        {
            system (" @cls || clear ");
            return meniu();
        }
        else{
            printf("ERROR: Ati eles o varianta inexistenta! Incercati din nou.");
            return alfa_morse();
        }
}

int caracter()
{
    char ch[256];
    int l;
    printf("  CONVERTOR  ");
    printf("\n\nIntroduceti un caracter: ");
    scanf(" %s", &ch);

    l=strlen(ch);

    if(l != 1)
    {
        printf("ERROR: Ati introdus mai mult de un caracter!");
        printf("\n\n");
        return meniu_secundar_caracter();
    }
    else if(ch[0] == 'A')
        printf("\n. _");
    else if(ch[0] == 'B')
        printf("\n_ . . .");
    else if(ch[0] == 'C')
        printf("\n_ . _ .");
    else if(ch[0] == 'D')
        printf("\n_ . .");
    else if(ch[0] == 'E')
        printf("\n.");
    else if(ch[0] == 'F')
        printf("\n. . _ .");
    else if(ch[0] == 'G')
        printf("\n_ _ .");
    else if(ch[0] == 'H')
        printf("\n. . . .");
    else if(ch[0] == 'I')
        printf("\n. .");
    else if(ch[0] == 'J')
        printf("\n. _ _ _");
    else if(ch[0] == 'K')
        printf("\n_ . _");
    else if(ch[0] == 'L')
        printf("\n. _ . .");
    else if(ch[0] == 'M')
        printf("\n_ _");
    else if(ch[0] == 'N')
        printf("\n_ .");
    else if(ch[0] == 'O')
        printf("\n_ _ _");
    else if(ch[0] == 'P')
        printf("\n. _ _ .");
    else if(ch[0] == 'Q')
        printf("\n_ _ . _");
    else if(ch[0] == 'R')
        printf("\n. _ .");
    else if(ch[0] == 'S')
        printf("\n. . .");
    else if(ch[0] == 'T')
        printf("\n_");
    else if(ch[0] == 'U')
        printf("\n. . _");
    else if(ch[0] == 'V')
        printf("\n. . . _");
    else if(ch[0] == 'W')
        printf("\n. _ _");
    else if(ch[0] == 'X')
        printf("\n_ . . _");
    else if(ch[0] == 'Y')
        printf("\n_ . _ _");
    else if(ch[0] == 'Z')
        printf("\n_ _ . .");
    else if(ch[0] == 'a')
        printf("\n. _");
    else if(ch[0] == 'b')
        printf("\n_ . . .");
    else if(ch[0] == 'c')
        printf("\n_ . _ .");
    else if(ch[0] == 'd')
        printf("\n_ . .");
    else if(ch[0] == 'e')
        printf("\n.");
    else if(ch[0] == 'f')
        printf("\n. . _ .");
    else if(ch[0] == 'g')
        printf("\n_ _ .");
    else if(ch[0] == 'h')
        printf("\n. . . .");
    else if(ch[0] == 'i')
        printf("\n. .");
    else if(ch[0] == 'j')
        printf("\n. _ _ _");
    else if(ch[0] == 'k')
        printf("\n_ . _");
    else if(ch[0] == 'l')
        printf("\n. _ . .");
    else if(ch[0] == 'm')
        printf("\n_ _");
    else if(ch[0] == 'n')
        printf("\n_ .");
    else if(ch[0] == 'o')
        printf("\n_ _ _");
    else if(ch[0] == 'p')
        printf("\n. _ _ .");
    else if(ch[0] == 'q')
        printf("\n_ _ . _");
    else if(ch[0] == 'r')
        printf("\n. _ .");
    else if(ch[0] == 's')
        printf("\n. . .");
    else if(ch[0] == 't')
        printf("\n_");
    else if(ch[0] == 'u')
        printf("\n. . _");
    else if(ch[0] == 'v')
        printf("\n. . . _");
    else if(ch[0] == 'w')
        printf("\n. _ _");
    else if(ch[0] == 'x')
        printf("\n_ . . _");
    else if(ch[0] == 'y')
        printf("\n_ . _ _");
    else if(ch[0] == 'z')
        printf("\n_ _ . .");
    else if(ch[0] == '1')
        printf("\n. _ _ _ _");
    else if(ch[0] == '2')
        printf("\n. . _ _ _");
    else if(ch[0] == '3')
        printf("\n. . . _ _");
    else if(ch[0] == '4')
        printf("\n. . . . _");
    else if(ch[0] == '5')
        printf("\n. . . . .");
    else if(ch[0] == '6')
        printf("\n_ . . . .");
    else if(ch[0] == '7')
        printf("\n_ _ . . .");
    else if(ch[0] == '8')
        printf("\n_ _ _ . .");
    else if(ch[0] == '9')
        printf("\n_ _ _ _ .");
    else if(ch[0] == '0')
        printf("\n_ _ _ _ _");
    else printf("ERROR: Ati introdus un caracter gresit!");

    printf("\n\n");
    return meniu_secundar_caracter();


}

int meniu_secundar_caracter()
{
    int r;
    printf("\n1. Intoarcere in meniul principal");
    printf("\n2. Introduceti un alt caracter");
    printf("\n3. Iesiti\n");

    scanf("%d", &r);

    if(r == 1)
    {
        system (" @cls || clear ");
        return meniu();
    }
    else if(r == 2)
    {
        system (" @cls || clear ");
        return caracter();
    }
    else if(r == 3)
    {
        system (" @cls || clear ");
        printf("Va multumim!");
        return 0;
    }
    else{
        printf("ERROR: Ati ales o varianta inexistenta! Incercati din nou.");
        return meniu_secundar_caracter();
    }

}

int sir()
{
    char ch[256];
    int i;

    printf("  CONVERTOR  ");
    printf("\n\nIntroduceti un caracter (Intre cuvinte introduceti _ ): ");

    scanf("%s", &ch);
    printf("\n");

    for(i=0; i<strlen(ch); i++)
    {
        printf("  ");
        if(ch[i] == 'A')
            printf(". _");
        else if(ch[i] == 'B')
            printf("_ . . .");
        else if(ch[i] == 'C')
            printf("_ . _ .");
        else if(ch[i] == 'D')
            printf("_ . .");
        else if(ch[i] == 'E')
            printf(".");
        else if(ch[i] == 'F')
            printf(". . _ .");
        else if(ch[i] == 'G')
            printf("_ _ .");
        else if(ch[i] == 'H')
            printf(". . . .");
        else if(ch[i] == 'I')
            printf("..");
        else if(ch[i] == 'J')
            printf(". _ _ _");
        else if(ch[i] == 'K')
            printf("_ . _");
        else if(ch[i] == 'L')
            printf(". _ . .");
        else if(ch[i] == 'M')
            printf("_ _");
        else if(ch[i] == 'N')
            printf("_ .");
        else if(ch[i] == 'O')
            printf("_ _ _");
        else if(ch[i] == 'P')
            printf(". _ _ .");
        else if(ch[i] == 'Q')
            printf("_ _ . _");
        else if(ch[i] == 'R')
            printf(". _ .");
        else if(ch[i] == 'S')
            printf(". . .");
        else if(ch[i] == 'T')
            printf("_");
        else if(ch[i] == 'U')
            printf(". . _");
        else if(ch[i] == 'V')
            printf(". . . _");
        else if(ch[i] == 'W')
            printf(". _ _");
        else if(ch[i] == 'X')
            printf("_ . . _");
        else if(ch[i] == 'Y')
            printf("_ . _ _");
        else if(ch[i] == 'Z')
            printf("_ _ . .");
        else if(ch[i] == 'a')
            printf(". _");
        else if(ch[i] == 'b')
            printf("_ . . .");
        else if(ch[i] == 'c')
            printf("_ . _ .");
        else if(ch[i] == 'd')
            printf("_ . .");
        else if(ch[i] == 'e')
            printf(".");
        else if(ch[i] == 'f')
            printf(". . _ .");
        else if(ch[i] == 'g')
            printf("_ _ .");
        else if(ch[i] == 'h')
            printf(". . . .");
        else if(ch[i] == 'i')
            printf(". .");
        else if(ch[i] == 'j')
            printf(". _ _ _");
        else if(ch[i] == 'k')
            printf("_ . _");
        else if(ch[i] == 'l')
            printf(". _ . .");
        else if(ch[i] == 'm')
            printf("_ _");
        else if(ch[i] == 'n')
            printf("_ .");
        else if(ch[i] == 'o')
            printf("_ _ _");
        else if(ch[i] == 'p')
            printf(". _ _ .");
        else if(ch[i] == 'q')
            printf("_ _ . _");
        else if(ch[i] == 'r')
            printf(". _ .");
        else if(ch[i] == 's')
            printf(". . .");
        else if(ch[i] == 't')
            printf("_");
        else if(ch[i] == 'u')
            printf(". . _");
        else if(ch[i] == 'v')
            printf(". . . _");
        else if(ch[i] == 'w')
            printf(". _ _");
        else if(ch[i] == 'x')
            printf("_ . . _");
        else if(ch[i] == 'y')
            printf("_ . _ _");
        else if(ch[i] == 'z')
            printf("_ _ . .");
        else if(ch[i] == '1')
            printf(". _ _ _ _");
        else if(ch[i] == '2')
            printf(". . _ _ _");
        else if(ch[i] == '3')
            printf(". . . _ _");
        else if(ch[i] == '4')
            printf(". . . . _");
        else if(ch[i] == '5')
            printf(". . . . .");
        else if(ch[i] == '6')
            printf("_ . . . .");
        else if(ch[i] == '7')
            printf("_ _ . . .");
        else if(ch[i] == '8')
            printf("_ _ _ . .");
        else if(ch[i] == '9')
            printf("_ _ _ _ .");
        else if(ch[i] == '0')
            printf("_ _ _ _ _");
        else if(ch[i] == '_')
            printf("   ");
        else{
            printf("\nERROR: Ati introdus un caracter gresit!");
            printf("\n\n");
            return meniu_secundar_sir();
        }

    }

            printf("\n\n");
            return meniu_secundar_sir();

}

int meniu_secundar_sir()
{
    int r;
    printf("\n1. Intoarcere in meniul principal");
    printf("\n2. Introduceti un alt sir");
    printf("\n3. Iesiti\n");

    scanf("%d", &r);

    if(r == 1)
    {
        system (" @cls || clear ");
        return meniu();
    }
    else if(r == 2)
    {
        system (" @cls || clear ");
        return sir();
    }
    else if(r == 3)
    {
        system (" @cls || clear ");
        printf("Va multumim!");
        return 0;
    }
    else{
        printf("ERROR: Ati eles o varianta inexistenta! Incercati din nou.");
        return meniu_secundar_sir();
    }

}
int morse_caracter()
{
    int ch[256];

    printf("  CONVERTOR  ");
    printf("\n\nIntroduceti un caracter morse (FARA SPATII INTRE _ si .): ");
    scanf(" %s", &ch);

     if(strcmp(ch, "._")==0)
            printf("A");
    else if(strcmp(ch, "_...")==0)
            printf("B");
    else if(strcmp(ch, "_._.")==0)
            printf("C");
    else if(strcmp(ch, "_..")==0)
            printf("D");
    else if(strcmp(ch, ".")==0)
            printf("E");
    else if(strcmp(ch, ".._.")==0)
            printf("F");
    else if(strcmp(ch, "__.")==0)
            printf("G");
    else if(strcmp(ch, "....")==0)
            printf("H");
    else if(strcmp(ch, "..")==0)
            printf("I");
    else if(strcmp(ch, ".___")==0)
            printf("J");
    else if(strcmp(ch, "_._")==0)
            printf("K");
    else if(strcmp(ch, "._..")==0)
            printf("L");
    else if(strcmp(ch, "__")==0)
            printf("M");
    else if(strcmp(ch, "_.")==0)
            printf("N");
    else if(strcmp(ch, "___")==0)
            printf("O");
    else if(strcmp(ch, ".__.")==0)
            printf("P");
    else if(strcmp(ch, "__._")==0)
            printf("Q");
    else if(strcmp(ch, "._.")==0)
            printf("R");
    else if(strcmp(ch, "...")==0)
            printf("S");
    else if(strcmp(ch, "_")==0)
            printf("T");
    else if(strcmp(ch, ".._")==0)
            printf("U");
    else if(strcmp(ch, "..._")==0)
            printf("V");
    else if(strcmp(ch, ".__")==0)
            printf("W");
    else if(strcmp(ch, "_.._")==0)
            printf("X");
    else if(strcmp(ch, "_.__")==0)
            printf("Y");
    else if(strcmp(ch, "__..")==0)
            printf("Z");
    else if(strcmp(ch, "._")==0)
            printf("a");
    else if(strcmp(ch, "_...")==0)
            printf("b");
    else if(strcmp(ch, "_._.")==0)
            printf("c");
    else if(strcmp(ch, "_..")==0)
            printf("d");
    else if(strcmp(ch, ".")==0)
            printf("e");
    else if(strcmp(ch, ".._.")==0)
            printf("f");
    else if(strcmp(ch, "__.")==0)
            printf("g");
    else if(strcmp(ch, "....")==0)
            printf("h");
    else if(strcmp(ch, "..")==0)
            printf("i");
    else if(strcmp(ch, ".___")==0)
            printf("j");
    else if(strcmp(ch, "_._")==0)
            printf("k");
    else if(strcmp(ch, "._..")==0)
            printf("l");
    else if(strcmp(ch, "__")==0)
            printf("m");
    else if(strcmp(ch, "_.")==0)
            printf("n");
    else if(strcmp(ch, "___")==0)
            printf("o");
    else if(strcmp(ch, ".__.")==0)
            printf("p");
    else if(strcmp(ch, "__._")==0)
            printf("q");
    else if(strcmp(ch, "._.")==0)
            printf("r");
    else if(strcmp(ch, "...")==0)
            printf("s");
    else if(strcmp(ch, "_")==0)
            printf("t");
    else if(strcmp(ch, ".._")==0)
            printf("u");
    else if(strcmp(ch, "..._")==0)
            printf("v");
    else if(strcmp(ch, ".__")==0)
            printf("w");
    else if(strcmp(ch, "_.._")==0)
            printf("x");
    else if(strcmp(ch, "_.__")==0)
            printf("y");
    else if(strcmp(ch, "__..")==0)
            printf("z");
    else if(strcmp(ch, ".____")==0)
            printf("1");
    else if(strcmp(ch, "..___")==0)
            printf("2");
    else if(strcmp(ch, "...__")==0)
            printf("3");
    else if(strcmp(ch, "...._")==0)
            printf("4");
    else if(strcmp(ch, ".....")==0)
            printf("5");
    else if(strcmp(ch, "_....")==0)
            printf("6");
    else if(strcmp(ch, "__...")==0)
            printf("7");
    else if(strcmp(ch, "___..")==0)
            printf("8");
    else if(strcmp(ch, "____.")==0)
            printf("9");
    else if(strcmp(ch, "_____")==0)
            printf("0");
    else printf("ERROR: Ati introdus un caracter gresit sau mai multe caractere!");

    printf("\n\n");
    return meniu_secundar_morse_caracter();
}

int meniu_secundar_morse_caracter()
{
    int r;

    printf("\n1. Intoarcere in meniul principal");
    printf("\n2. Introduceti un alt caracter morse");
    printf("\n3. Iesiti\n");

    scanf("%d", &r);

    if(r == 1)
    {
        system (" @cls || clear ");
        return meniu();
    }
    else if(r == 2)
    {
        system (" @cls || clear ");
        return morse_caracter();
    }
    else if(r == 3)
    {
        system (" @cls || clear ");
        printf("Va multumim!");
        return 0;
    }
    else{
        printf("ERROR: Ati ales o varianta inexistenta! Incercati din nou.");
        return meniu_secundar_morse_caracter();
    }

}

int morse_sir()
{
     printf("In mentenanta!\nAlegeti alta varianta de conversie!\n");
     return meniu_secundar_morse_sir();

    char g, ch[256];

    printf("  CONVERTOR  ");
    printf("\n\nIntroduceti un caracter morse (FARA SPATII INTRE _ si .\n,iar pentru s delimita literele folositi | \nsi pentru delimitarea cuvintelor puneti un spatiu!): ");
    scanf("%s", &ch);

    g=strtok(ch, "/ ");
    while(g)
    {

             if(strcmp(g, "._")==0)
                printf("A");
        else if(strcmp(g, "_...")==0)
                printf("B");
        else if(strcmp(g, "_._.")==0)
                printf("C");
        else if(strcmp(g, "_..")==0)
                printf("D");
        else if(strcmp(g, ".")==0)
                printf("E");
        else if(strcmp(g, ".._.")==0)
                printf("F");
        else if(strcmp(g, "__.")==0)
                printf("G");
        else if(strcmp(g, "....")==0)
                printf("H");
        else if(strcmp(g, "..")==0)
                printf("I");
        else if(strcmp(g, ".___")==0)
                printf("J");
        else if(strcmp(g, "_._")==0)
                printf("K");
        else if(strcmp(g, "._..")==0)
                printf("L");
        else if(strcmp(g, "__")==0)
                printf("M");
        else if(strcmp(g, "_.")==0)
                printf("N");
        else if(strcmp(g, "___")==0)
                printf("O");
        else if(strcmp(g, ".__.")==0)
                printf("P");
        else if(strcmp(g, "__._")==0)
                printf("Q");
        else if(strcmp(g, "._.")==0)
                printf("R");
        else if(strcmp(g, "...")==0)
                printf("S");
        else if(strcmp(g, "_")==0)
                printf("T");
        else if(strcmp(g, ".._")==0)
                printf("U");
        else if(strcmp(g, "..._")==0)
                printf("V");
        else if(strcmp(g, ".__")==0)
                printf("W");
        else if(strcmp(g, "_.._")==0)
                printf("X");
        else if(strcmp(g, "_.__")==0)
                printf("Y");
        else if(strcmp(g, "__..")==0)
                printf("Z");
        else if(strcmp(g, ".____")==0)
                printf("1");
        else if(strcmp(g, "..___")==0)
                printf("2");
        else if(strcmp(g, "...__")==0)
                printf("3");
        else if(strcmp(g, "...._")==0)
                printf("4");
        else if(strcmp(g, ".....")==0)
                printf("5");
        else if(strcmp(g, "_....")==0)
                printf("6");
        else if(strcmp(g, "__...")==0)
                printf("7");
        else if(strcmp(g, "___..")==0)
                printf("8");
        else if(strcmp(g, "____.")==0)
                printf("9");
        else if(strcmp(g, "_____")==0)
                printf("0");
        else{
                printf("ERROR: Ati introdus un caracter gresit sau mai multe caractere!");
                return meniu_secundar_morse_sir();
            }

        printf(" ");
        g=strtok(ch, "/ ");
    }
    printf("\n\n");
    return meniu_secundar_morse_caracter();

}

int meniu_secundar_morse_sir()
{
    int r;

    printf("\n1. Intoarcere in meniul principal");
    printf("\n2. Introduceti un alt sir de caractere morse");
    printf("\n3. Iesiti\n");

    scanf("%d", &r);

    if(r == 1)
    {
        system (" @cls || clear ");
        return meniu();
    }
    else if(r == 2)
    {
        system (" @cls || clear ");
        return morse_sir();
    }
    else if(r == 3)
    {
        system (" @cls || clear ");
        printf("Va multumim!");
        return 0;
    }
    else{
        printf("ERROR: Ati ales o varianta inexistenta! Incercati din nou.");
        return meniu_secundar_morse_sir();
    }

}
