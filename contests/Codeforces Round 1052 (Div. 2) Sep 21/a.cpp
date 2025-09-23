#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n), freq;
    for(auto &it:nums) cin >> it;

    int count = 0, ele = nums[0];
    for(int i=0; i<n; i++) {
    	if(nums[i] == ele) {
    		count++;
    	} else {
    		freq.push_back(count);
    		count = 1;
    		ele = nums[i];
    	}
    }
    freq.push_back(count);
    int m = freq.size();
   	sort(freq.begin(), freq.end());

   	int ans = 0;
   	
   	for(int i=0; i<m; i++) {
   		int c = freq[i] * (m - i);
   		ans = max(ans, c);
   	}

    cout << ans << ln;
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