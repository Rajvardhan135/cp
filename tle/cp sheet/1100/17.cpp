#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> matrix(n, vector<int>(n));
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) cin >> matrix[i][j];
	}

	int l = 0, r = n - 1;
	while(l < r) {
		for(int i=0; i<n; i++) {
			if(matrix[l][i] != matrix[r][n-1-i]) k--;
		} 
		l++;
		r--;
	}

	if(n & 1) {
		for(int i=0; i<n/2; i++) {
			if(matrix[l][i] != matrix[r][n-1-i]) k--;
		} 
	}

	// cout << k << ln;

	if(k < 0) {
		cout << "NO" << ln;
	} else {
		if(k % 2 == 0 || n % 2 == 1) cout << "YES" << ln;
		else cout << "NO" << ln;
	}
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