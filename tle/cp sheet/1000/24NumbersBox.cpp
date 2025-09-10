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
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matrix(n, vector<int>(m));
	int neg = 0, smallest = 101, sum = 0;
	bool isZero = false;

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> matrix[i][j];
			if(matrix[i][j] == 0) isZero = true;
			else if(matrix[i][j] < 0) neg++;
			smallest = min(smallest, abs(matrix[i][j]));
			sum += abs(matrix[i][j]);
		}
	}

	if(isZero) cout << sum << ln;
	else if(neg % 2 == 0) cout << sum << ln;
	else cout << (sum - 2 * smallest) << ln;
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