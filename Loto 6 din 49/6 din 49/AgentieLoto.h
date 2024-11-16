#include <iostream>
#include <vector>
#include <set>
#include <time.h>
#include <algorithm>
#include "bilet_loto.h"
#include "loto.h"
using namespace std;

class AgentieLoto {
private:
	int idAgentie;
	vector<BiletLoto> bilete;

public:
	AgentieLoto(int id)  {
		this->idAgentie = id;
	}

	void adaugaBilet(const BiletLoto& bilet) {
		bilete.push_back(bilet);
	}

	void verificareBileteCastigatoare(const set<int>& numereExtrase) const {
		
		cout << "Numerele extrase sunt: ";
		for (int numar : numereExtrase) {
			cout << numar << " ";
		}
		cout << "\n";

		cout << "Verificare bilete castigatoare:\n";
		for (size_t i = 0; i < bilete.size(); i++) {
			const auto& bilet = bilete[i];
			cout << "Biletul " << i + 1 << ":\n";
			for (const auto& varianta : bilet.variante) {
				int numerePotrivite = 0;
				for (int numar : varianta) {
					if (numereExtrase.count(numar)) {
						numerePotrivite++;
					}
				}
				cout << "Varianta: ";
				for (int numar : varianta) {
					cout << numar << " ";
				}
				cout << " -> " << numerePotrivite << " numere potrivite\n";
			}
		}
	}
};