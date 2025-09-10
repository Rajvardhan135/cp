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
	set<int> s;
	int n;
	cin >> n;
	int count = 0;

	if(n <= 1) {
		cout << 0 << ln;
		return;
	}

	for(int i=2; i<=n; i++) {
		int num = i;
		int k = 2;
		while(k*k <= num) {
			if(num % k == 0) {
				s.insert(k);
				if(s.size() > 2) break;
				num /= k;
			} else k++;
		}
		if(num != 1) s.insert(num);
		if(s.size() == 2) count++;
		s.clear();
	}

	cout << count << ln;
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