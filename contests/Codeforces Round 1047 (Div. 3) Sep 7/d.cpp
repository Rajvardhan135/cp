#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	map<int, int> mp;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
		mp[nums[i]]++;
	}

	for(auto &[key, pair]:mp) {
		if(key != pair) {
			cout << -1 << ln;
			return;
		}
	}

	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << ln;
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