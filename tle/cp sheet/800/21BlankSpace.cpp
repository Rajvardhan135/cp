#include <iostream>
using namespace std;

void blankSpace() {
	int n;
	int maxLen = 0, len = 0;
	cin >> n;
	for(int i=0; i<n; i++) {
		int num; 
		cin >> num;
		if(num == 1) len = 0;
		else len++;
		maxLen = max(len, maxLen);
	}

	cout << maxLen << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		blankSpace();
	}
}