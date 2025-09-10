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
	ll a, b;
	cin >> a >> b;
	int i=0;
	if(b == 1) {
		i++;
		b++;
	}

	ll temp = b, count = 1;
	while(temp <= a) {
		temp *= b;
		count++;
	}

	int prev = count + i;

	while(1) {
		b++;
		i++;
		ll temp = b, count = 1;
		while(temp <= a) {
			temp *= b;
			count++;
		}

		int cur = count + i;
		if(cur > prev) break;
		prev = cur;
	}

	cout << prev << ln;
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