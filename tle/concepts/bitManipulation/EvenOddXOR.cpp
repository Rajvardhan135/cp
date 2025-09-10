#include <iostream>
using namespace std;

void EvenOddXor() {
	int n, eve = 0, odd = 0, count = 0;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		if(i & 1) {
			count++;
			if(i == n && !(n & 1) && ((n >> 1) & 1) ) {
				cout << (count | (1 << 30));
				// odd = odd ^ (count | (1 << 30));
			} else if(i == n && (n & 1) && ((n >> 1) & 1)) {
				cout << (1 << 30);
				// odd = odd ^ (1 << 30);
			} else if(i == n && (n & 1) && !((n >> 1) & 1)) {
				cout << 0;
				// odd = odd ^ 0;
			} else if(i == (n-1) && !(n & 1) && ((n >> 1) & 1)) {
				int num = count;
				num = num | (1 << 30);
				num = num | (1 << 29);
				cout << num << " ";
				// odd = odd ^ num;
			}
			else {
				cout << count << " ";
				// odd = odd ^ count;
			}
		} else {
			int num = count;
			num = num | (1 << 30);
			if(i == 2 && !(n & 1) && ((n >> 1) & 1)) {
				num = num | (1 << 29);
			}
			cout << num << " ";
			// eve = eve ^ num;
		}
	}

	cout << endl;
	// cout << "eve: " << eve << " odd: " << odd << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		EvenOddXor();
	}
}