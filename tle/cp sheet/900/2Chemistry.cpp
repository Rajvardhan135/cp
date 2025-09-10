#include <iostream>
#include <map>
using namespace std;

void chemistry() {
	int n, k, count;
	string s;
	map<char, int> mp;
	cin >> n >> k >> s;
	count = k;

	for(int i=0; i<n; i++) {
		mp[s[i]]++;
	}

	for(auto m : mp) {
		if(m.second % 2 == 1) count--;  
	}

	if((n-k) % 2 == 1 && count < -1) {
		cout << "NO" << endl;
	} else if((n-k) % 2 == 0 && count < 0) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		chemistry();
	}
}
