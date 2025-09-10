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
	vector<pair<int, int>> health;
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		num %= k;
		if(num == 0) num = k;
		health.push_back({num, i+1});
	}

	sort(health.begin(), health.end(), [](pair<int, int> &a, pair<int, int> &b) {
		if(a.first == b.first) return a.second < b.second;
		return a.first > b.first;
	});

	for(int i=0; i<n; i++) {
		cout << health[i].second << " ";
	}
	cout << ln;
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