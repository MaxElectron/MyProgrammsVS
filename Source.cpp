#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	//var declaration

	int n = 0;
	int sum = 0;
	int minInPairDifferenceNotDivBy6 = INT32_MAX;
	int theFirstNumber = 0;
	int theSecondNumber = 0;
	int inPairDifference = 0;

	//processing

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> theFirstNumber;
		cin >> theSecondNumber;

		inPairDifference = theSecondNumber - theFirstNumber;

		if ((abs(inPairDifference) < minInPairDifferenceNotDivBy6) && (inPairDifference % 6 != 0)) {
			minInPairDifferenceNotDivBy6 = inPairDifference;
		}

		if (inPairDifference > 0) {
			sum += theFirstNumber;
		}
		else {
			sum += theSecondNumber;
		}

	}

	if (sum % 6 == 0) {
		sum += minInPairDifferenceNotDivBy6;
	}

	//output

	cout << sum;

	return 0;
}