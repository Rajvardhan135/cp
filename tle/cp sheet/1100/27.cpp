#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n, k;
	cin >> n >> k;	
	map<int, int> mp;
	vector<int> nums(n);

	for(int i=0; i<n; i++) {
		cin >> nums[i];
		mp[nums[i]]++;
	}

	for(int i=0; i<n; i++) {
		int num = nums[i] - k;
		if(mp.find(num) != mp.end()) {
			cout << "YES" << ln;
			return;
		}
	}

	cout << "NO" << ln;
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