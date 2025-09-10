#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	map<int, int> mp;
	
	for(int i=0; i<n; i++) mp[nums[i]]++;

	int len = 0;
	
	for(auto &[key, count] : mp) {
		if(key > count) continue;
		len += (count / key) * key;
	}
	cout << len << ln;
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