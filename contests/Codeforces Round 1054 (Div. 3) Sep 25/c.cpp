#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n), freq(k+1, 0);
    map<int, int> mp;

    for(auto &it:nums) cin >> it;


    int total = 0;
	for(int i=0; i<n; i++) {
		if(nums[i] <= k) {
			freq[nums[i]]++;
		} 
	}

	for(int i=0; i<k; i++) {
		if(freq[i] == 0) total += 1;
	}

	if(freq[k] != 0) total += max(0, freq[k] - total);

	cout << total << ln;

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}