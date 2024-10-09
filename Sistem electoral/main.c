#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int voturi[7] = { 0 }, n = 6;
char candidati[7][100] = {"Georgica Ionescu", "Victor Iliescu", "Ionel Mitrache", "Bartic Maria", "Petrica Petrescu", "Nicusor Manea"};

int raspunsInvalid(int, int);
void startVot(void);
void afisareCandidati(void);
void afisareRezultate(void);
void sortareVoturi(void);
void interschimbare(int, int);
void meniu(void);
void promptIntoarcere(void);

int main()
{
    meniu();
    return 0;
}

void meniu() {
    printf("Bine ati venit la vot!\n\n");
    printf("1. Vezi candidatii\n");
    printf("2. Voteaza\n");
    printf("3. Vezi rezultatele\n");
    printf("4. Iesire\n");

    int raspuns;
    scanf("%d", &raspuns);
    while(raspunsInvalid(raspuns, 4)) {
        printf("ERROR: Raspundeti cu numarul optiunii dorite!\n");
        scanf("%d", &raspuns);
    }

    system("@cls||clear");
    if(raspuns == 1) {
        afisareCandidati();
    }
    if(raspuns == 2) {
        startVot();
    }
    if(raspuns == 3) {
        afisareRezultate();
    }
    if(raspuns == 4) {
        printf("Multumim ca v-ati prezentat la vot!\n");
        getchar();
    }
}

int raspunsInvalid(int r, int max) {
    return r > max || r < 1;
}

void startVot() {
    printf("Introduceti numarul de ordine al candidatului pe care doriti sa il votati:\n");

    int nr;
    scanf("%d", &nr);
    while(raspunsInvalid(nr, 6)){
        printf("ERROR: Raspundeti cu numarul candidatului pe care doriti sa il votati!\n");
        scanf("%d", &nr);
    }

    voturi[nr - 1]++;
    printf("Ai votat cu %s", candidati[nr - 1]);

    promptIntoarcere();
}

void afisareCandidati() {
    for(int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, candidati[i]);
    }

    promptIntoarcere();
}

void afisareRezultate() {
    sortareVoturi();

    for(int i = 0; i < n; i++) {
        printf("%d. %s - %d voturi\n", i + 1, candidati[i], voturi[i]);
    }

    promptIntoarcere();
}

void sortareVoturi() {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(voturi[i] < voturi[j]) {
                interschimbare(i, j);
            }
        }
    }
}

void interschimbare(int i, int j) {
    int aux;
    char numeAux[100];

    aux = voturi[i];
    voturi[i] = voturi[j];
    voturi[j] = aux;

    strcpy(numeAux, candidati[i]);
    strcpy(candidati[i], candidati[j]);
    strcpy(candidati[j], numeAux);
}

void promptIntoarcere() {
    printf("\n\n1. Inapoi\n");

    int raspuns;
    scanf("%d", &raspuns);
    while(raspunsInvalid(raspuns, 1)){
        printf("ERROR: Raspundeti cu numarul optiunii dorite!\n");
        scanf("%d", &raspuns);
    }

    if(raspuns == 1) {
        system("@cls||clear");
        meniu();
    }
}
