#include <iostream>
#include <vector>
#include <set>
#include <time.h>
#include <algorithm>
using namespace std;


class BiletLoto {
public:
	vector<set<int>> variante;

	BiletLoto(int numarVariante) {
		for (int i = 0; i < numarVariante; i++) {
			set<int> varianta;

			while (varianta.size() < 6) {
				varianta.insert(rand() % 49 + 1);
			}
			variante.push_back(varianta);
		}
	}

	void afisare() const {

		cout << "Biletul contine urmatoarele variante:\n";
		for (const auto& varianta : variante) {
			for (int numar : varianta) {
				cout << numar << " ";
			}
			cout << endl;
		}
	}
};
