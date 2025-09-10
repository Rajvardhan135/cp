#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n), unique;
	unordered_map<int, int> mp, visited;
	for(int i=0; i<n; i++) cin >> nums[i];

	for(int i=0; i<n; i++) {
		if(mp.find(nums[i]) == mp.end()) unique.push_back(nums[i]);
		mp[nums[i]] = i+1;
	}

	int total = -1;

	for(int i=0; i<n; i++) {
		if(visited.find(nums[i]) != visited.end()) continue;
		visited[nums[i]] = 1;
		for(int j=0; j<unique.size(); j++) {
			int gcd = __gcd(nums[i], unique[j]);
			if(gcd == 1) {
				total = max(total, mp[nums[i]] + mp[unique[j]]);
			}
		}
	}

	cout << total << ln;
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