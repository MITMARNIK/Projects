#include <iostream>
#include <vector>
#include <set>
#include <time.h>
using namespace std;

class Bila {
private:
	int nr;
	bool extrasa;

public:
	Bila(int n) {
		nr = n;
		extrasa = false;
	}

	void extragere() {
		extrasa = true;
	}

	void resetare() {
		extrasa = false;
	}

	int getnr() {
		return nr;
	}
};