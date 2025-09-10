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

const int N = 1e6;
vector<bool> sieve(N, true);
vector<int> primes;

void buildSieve() {
	for(int i=2; i*i<N; i++) {
		if(sieve[i] == true) {
			// cout << i << ln;
			for(int j=i*i; j<N; j+=i) sieve[j] = false;
		}
	}
}

void buildPrime() {
	for(int i=2; i<N; i++) {
		if(sieve[i]) primes.push_back(i);
	}
}

int findNearestPrime(int n) {
	int l=0, r = primes.size()-1;
	int ans = 99999999;

	while(l <= r) {
		int m = (l + r) / 2;
		// cout << l << " " << r << " " << primes[m] << ln;
		if(primes[m] == n) return n;
		else if(primes[m] < n) l = m + 1;
		else {
			ans = primes[m];
			r = m - 1;
		}
	}

	return ans;
}

void solve() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> vec(n, vector<int>(m));

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			int num;
			cin >> num;
			int nearestPrime = findNearestPrime(num);
			vec[i][j] = (nearestPrime - num);
		}
	}

	int ans = 99999999;

	for(int i=0; i<n; i++) {
		int sum = 0;
		for(int j=0; j<m; j++) {
			sum += vec[i][j];
		}
		if(sum >= 0) ans = min(ans, sum);
	}

	for(int i=0; i<m; i++) {
		int sum = 0;
		for(int j=0; j<n; j++) {
			sum += vec[j][i];
		}
		ans = min(ans, sum);
	}

	cout << ans << ln;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    buildSieve();
	buildPrime();
    // int tc;
    // cin >> tc;
    // while (tc--) {
    //     solve();
    // }

    solve();

    return 0;
}