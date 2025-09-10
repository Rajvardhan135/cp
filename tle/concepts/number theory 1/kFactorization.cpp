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
	int n, k;
	cin >> n >> k;

	vector<int> primes;
	vector<int> ans(k, 1);

	int i = 2;
	while(n != 1) {
		if(n % i == 0) {
			primes.push_back(i);
			n /= i;
		} else i++;
	}

	if(primes.size() < k) {
		cout << -1 << ln;
		return;
	}

	for(int i=0; i<primes.size(); i++) {
		int ind = i % k;
		ans[ind] *= primes[i];
	}

	for(int i=0; i<k; i++) cout << ans[i] << " ";
	cout << ln;
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