#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<long long> v(n+1);
	for(int i=1; i<=n; i++) cin >> v[i];

	vector<long long> pre1(n+2, 0);
	vector<long long> pre2(n+2, 0);

	for(int i=1; i<=n; i++) {
		pre1[i] = pre1[i-1] + v[i];
	}

	sort(v.begin(), v.end());

	for(int i=1; i<=n; i++) {
		pre2[i] = pre2[i-1] + v[i];
	}

	int m; cin >> m;

	while(m--) {
		int type, l, r;
		cin >> type >> l >> r;

		if(type == 1) {
			long long val = pre1[r] - pre1[l-1];
			cout << val << endl;
		} else {
			long long val = pre2[r] - pre2[l-1];
			cout << val << endl;
		}
	}

	return 0;
}