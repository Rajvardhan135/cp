#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &it: nums) cin >> it;

   	sort(nums.begin(), nums.end());

   	int total = 0;

   	for(int i=0; i<n; i+=2) {
   		total = max(total, abs(nums[i]-nums[i+1]));
   	}
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