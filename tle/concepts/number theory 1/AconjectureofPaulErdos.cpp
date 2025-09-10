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
bool sieve[N];
unordered_set<int> primes;
unordered_set<int> conjecture;
int pre[N] = {0};

void buildSieve() {
	for(int i=0; i<N; i++) sieve[i] = true;
	for(int i=2; i*i<N; i++) {
		if(sieve[i]) {
			for(int j=i*i; j<N; j+=i) {
				sieve[j] = false;
			}
		}
	} 
}

void findPrimes() {
	for(int i=2; i<N; i++) {
		if(sieve[i]) primes.insert(i);
	}
}

void findConjectures() {
	for(int i=1; i*i<N; i++) {
		for(int j=1; ((i*i) + (j*j*j*j))<N; j++) {
			int num = (i*i) + (j*j*j*j);
			if(primes.count(num) > 0) {
				conjecture.insert(num);
				pre[num] = 1;
			}
		}
	}
}

void buildPre() {
	for(int i=1; i<N; i++) {
		pre[i] += pre[i-1];
	}
}

void solve() {
	int n;
	cin >> n;
	cout << pre[n] << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    buildSieve();
    findPrimes();
    findConjectures();
    buildPre();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}