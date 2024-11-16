#include <iostream>
#include <vector>
#include <set>
#include <time.h>
#include <algorithm>
#include "bila.h"
using namespace std;


class Loto {
private:
	vector<Bila> bile;

	void reset() {
		for (auto& bila : bile) {
			bila.resetare();
		}
	}

public:
	Loto() {

	}

	set<int> extragere() {
		reset();

		bile.clear();
		for (int i = 1; i <= 49; i++) {
			bile.emplace_back(i);
		}
		random_shuffle(bile.begin(), bile.end());

		set<int> numereExtrase;
		for (int i = 0; i < 6; i++) {
			numereExtrase.insert(bile[i].getnr());
		}

		return numereExtrase;
	}

};