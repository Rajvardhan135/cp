#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void determineFashionable() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; i++) {
		int vi;
		cin >> vi;
		v.push_back(vi);
	}
	sort(v.begin(), v.end());

	if((v[0] + v[n-1]) % 2 == 0) cout << 0 << endl;
	else {
		int l = 0, r = 0;
		for(int i=0; (i<n && (v[i] % 2 != v[n-1] % 2)); i++) l++;
		for(int i=n-1; (i>=0 && (v[i] % 2 != v[0] % 2)); i--) r++;	
		cout << min(l, r) << endl;
	}
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		determineFashionable();
	}
	return 0;
}