#include <iostream>
#include <vector>
using namespace std;

void everybodyLikesGoodArray() {
	int n;
	cin >> n;

	int parity = -1, ops = 0;

	for(int i=0; i<n; i++) {
		int num; 
		cin >> num;

		if(num % 2 == parity) {
			ops++;
		}

		parity = num % 2;
	}

	cout << ops << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		everybodyLikesGoodArray();
	}
}
