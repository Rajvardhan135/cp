#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int a, b, c;
		cin >> a >> b >> c;
		a += (c % 2 == 0) ? c / 2 : (c / 2) + 1;
		b += c / 2;

		if(a > b) cout << "First" << endl;
		else cout << "Second" << endl;
	}

	return 0;
}