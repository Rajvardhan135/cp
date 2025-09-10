// It does not matter if i can solve this problem or not if I'm unable to solve it in less time the next time I did not learn. Don't forget I am not solving problems just to increase the number of problems I have solved, I am solving to learn.
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

const int N = 1e7;
int spf[N];

void solve() {
	int n;
	cin >> n;
	while(n != 1) {
		cout << spf[n] << " ";
		n /= spf[n];
	}
	cout << ln;
}

void find_spf() {
	for(int i=0; i<N; i++) spf[i] = i;
	for(ll i=2; i<N; i++) {
		if(spf[i] == i) {
			for(ll j=i*i; j<N; j+=i) {
				spf[j] = i;
			}
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    find_spf();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}