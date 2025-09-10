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

void solve() {
	int n;
	cin >> n;
	cout << n << ln;
	vector<bool> isPrime(n+1, true);
	isPrime[0] = isPrime[1] = false;

	for(int i=2; i<=n; i++) {
		if(isPrime[i]) {
			for(int j=i*i; j<=n; j+=i) {
				// cout << j << ln;
				isPrime[j] = false;
			}
		}
	}

	for(int i=2; i<=n; i++) {
		if(isPrime[i]) cout << i << " ";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tc;
    // cin >> tc;
    // while (tc--) {
    //     solve();
    // }

    solve();

    return 0;
}