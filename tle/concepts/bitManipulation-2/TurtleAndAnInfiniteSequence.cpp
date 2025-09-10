#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
using namespace std;

void solve() {
	int n, m, ans = 0;
	cin >> n >> m;

	if(m == 0) {
		cout << n << '\n';
		return;
	}

	for(int i=0; i<31; i++) {
		if(n & (1 << i)) ans = ans | (1 << i);
		else {
			if(m >= ((1 << i) - (n % (1 << i)))) ans = ans | (1 << i);
			else if(m > (n % (1 << i)) && n > (1 << i)) ans = ans | (1 << i);
		}
	}
	cout << ans << '\n';
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