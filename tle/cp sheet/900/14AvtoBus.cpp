#include <iostream>
using namespace std;

void AvtoBus() {
	long long n;
	cin >> n;

	if(n % 2 == 1 || n < 4) {
		cout << -1 << endl;
		return;
	}

	if(n % 6 == 0) cout << (n / 6) << " ";
	else cout << (n / 6) + 1 << " ";

	if(n % 4 == 0) cout << (n / 4) << endl;
	else if(n % 4 == 2) cout << (n / 4) << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		AvtoBus();
	}
}