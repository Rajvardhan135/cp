#include <iostream>
using namespace std;

void VasilijeInCacak() {
	double n, k, x;
	cin >> n >> k >> x;

	double a = n - k + 1, d = 1;
	double upLimit = (k / 2) * (2 * a + (k - 1) * d);
	a = 1.0;
	double lowLimit = (k / 2) * (2 * a + (k - 1) * d);

	// cout << lowLimit << " " << upLimit << " ";

	if(lowLimit <= x && x <= upLimit) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return;

}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		VasilijeInCacak();
	}
}