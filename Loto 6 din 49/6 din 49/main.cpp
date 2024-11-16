#include <iostream>
#include <vector>
#include <set>
#include <time.h>
#include "AgentieLoto.h"
using namespace std;

int main() {

	srand(time(nullptr));

	AgentieLoto agentie(1);

	BiletLoto bilet1(2);
	BiletLoto bilet2(3);

	agentie.adaugaBilet(bilet1);
	agentie.adaugaBilet(bilet2);

	cout << "Biletul 1:\n";
	bilet1.afisare();
	cout << "Biletul 2:\n";
	bilet2.afisare();

	Loto loto;
	set<int> numereExtrase = loto.extragere();

	agentie.verificareBileteCastigatoare(numereExtrase);

	return 0;
}