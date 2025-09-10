#include <iostream>
#include <cmath>
using namespace std;

void ExcitingBets() {
	long long a, b;
	cin >> a >> b;

	if(a == b) {
		cout << 0 << " " << 0 << endl;
		return;
	} else if(a == 0) {
		cout << b << " " << 0 << endl;
		return;
	} else if(b == 0) {
		cout << a << " " << 0 << endl;
		return;
	}

	long long maxExcitement = abs((a-b));

	if(a % maxExcitement == 0) {
		cout << maxExcitement << " " << 0 << endl;
	} else if(a < maxExcitement) {
		cout << maxExcitement << " " << min((maxExcitement - a), a) << endl;
	} else if(b < maxExcitement) {
		cout << maxExcitement << " " << min((maxExcitement - b), b) << endl;
	} else {
		long long mod = a % maxExcitement;
		cout << maxExcitement << " " << min(mod, (maxExcitement - mod)) << endl;
	}



}

int main() {
	int tc;
	cin >> tc;
	int count = 0;
	while(tc--) {
		ExcitingBets();
	}
	
}