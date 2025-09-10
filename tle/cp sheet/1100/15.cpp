#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	int maxArea = 0;
	int ones = 0;

	for(int i=0; i<n; i++) {
		if(s[i] == '1') ones++;
	}
	if(ones == n) {
		cout << (ones * ones) << ln;
		return;
	}

	for(int i=0; i<n; i++) {
		if(s[i] == '0') continue;
		int j = i, k = i;
		while(j+1 < n && s[j+1] == '1') j++;
		int width = j - k + 1, height = 1;
		while(k <= j) {
			// cout << width << " " << height << ln;
			maxArea = max(maxArea, width * height);
			width--;
			height++;
			k++;
		}
		i = k-1;
	}

	int i = -1, j = n;
	while(i < n-1 && s[i+1] == '1') i++;
	while(j > 0 && s[j-1] == '1') j--;

	if(i < j) {
		int width = (i+1);
		int height = (n-j) + 1;
		// cout << width << " " << height << ln;
		maxArea = max(maxArea, width * height);
	}

	cout << maxArea << ln;
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