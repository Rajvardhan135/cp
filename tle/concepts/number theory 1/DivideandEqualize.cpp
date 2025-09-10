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

const int N = 1e6;
vector<int> spf(N+1);

void buildSpf() {
	for(int i=0; i<=N; i++) spf[i] = i;
	for(ll i=2; i*i<=N; i++) {
		if(spf[i] == i) {
			for(ll j=i*i; j<=N; j+=i) {
				if(spf[j] == j) spf[j] = i;
			}
		}
	}
}

void solve() {
	int n;
	map<int, int> mp;
	cin >> n;
	for(int i=0; i<n; i++) {
		int num;
		cin >> num;
		while(num > 1) {
			mp[spf[num]]++;
			num /= spf[num];
		}
	}
	// cout << (n < 1) << ln;
	for(auto &[key, value]:mp) {
		// cout << n << " " << value << ln;
		if((n > value) || value % n != 0) {
			cout << "NO" << ln;
			return;
		}
	}
	cout << "YES" << ln;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    buildSpf();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}