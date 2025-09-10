#include <iostream>
#include <vector>
#include <string>
using namespace std;

void validSequence() {
	int n; cin >> n;
	if(n % 2 != 0 && n < 27) {
		cout << -1 << endl;
		return;
	}

	int cur = 3, prev = -1;
	for(int i=1; i<=n; i++) {
		if(n % 2 == 1 && i == 1) cout << 1 << " ";
		else if(n % 2 == 1 && i == 10) cout << 1 << " ";
		else if(n % 2 == 1 && i == 26) cout << 1 << " ";
		else if(n % 2 == 1 && i == 23) cout << 2 << " ";
		else if(n % 2 == 1 && i == 27) cout << 2 << " ";
		else {
			if(prev == cur) {
				cout << cur << " ";
				cur++;
			} else {	
				cout << cur << " ";
				prev = cur;
			}
		}
	}
	cout << endl;

	return;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		validSequence();
	}

	return 0;
}

// 1 4 9 16 