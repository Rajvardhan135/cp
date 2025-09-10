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

const int N = 1e5;
vector<bool> isPrime(N+1, true);
vector<int> primes;

void findPrimes() {
	isPrime[0] = isPrime[1] = false;
	for(int i=2; i*i<=N; i++) {
		if(isPrime[i]) {
			for(int j=i*i; j<=N; j+=i) isPrime[j] = false;
		}
	}
	for(int i=2; i<=N; i++) {
		if(isPrime[i]) primes.push_back(i);
	}
}

void solve() {
	int n;
	cin >> n;

	int a, b;
	for(int i=0; i<primes.size(); i++) {
		if(primes[i] > n) {
			a = primes[i];
			break;
		}
	}

	for(int i=0; i<primes.size(); i++) {
		if(primes[i] >= (a + n)) {
			b = primes[i];
			break;
		}
	}

	cout << (a * b) << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    findPrimes();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}