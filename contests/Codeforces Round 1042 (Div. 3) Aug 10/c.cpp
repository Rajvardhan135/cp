#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ln '\n'
#define ll long long

void solve() {
	int n, k;
	multiset<int> s, t;
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		s.insert((num % k));
	}
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		t.insert((num % k));
	}

	for(auto it = s.begin(); it != s.end();) {
		auto it2 = t.find(*it);
		if(it2 != t.end()) {
			it = s.erase(it);
			t.erase(it2);
		} else {
			int temp = abs(k - *it);
			auto it2 = t.find(temp);
			if(it2 == t.end()) {
				cout << "NO" << ln;
				return;
			}
			t.erase(it2);
			it = s.erase(it);
		}
	}

	cout << "YES" << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}