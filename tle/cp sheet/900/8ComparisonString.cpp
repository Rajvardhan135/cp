#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void ComparisonString() {
	int n;
	string s;
	cin >> n >> s;
	int count = 1, maxCount = 1;

	for(int i=1; i<n; i++) {
		if(s[i] == s[i-1]) count++;
		else count = 1;
		maxCount = max(count, maxCount);
	}

	cout << maxCount + 1 << endl;

	
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		ComparisonString();
	}
}
