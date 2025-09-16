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
    set<int> st;

    for(int i=0; i<n; i++) st.insert(i+1);

    for(int i=0; i<n; i++){
    	cin >> nums[i];
    	st.erase(nums[i]);
    }

    vector<int> missing_nums(all(st)); 
	int missing_idx = 0;

	for(int i = n - 1; i >= 0; i--) {
	    if(nums[i] == 0) {
	        nums[i] = missing_nums[missing_idx];
	        missing_idx++;
	    }
	}

    // for(int i=0; i<n; i++) {
    // 	cout << nums[i] << " ";
    // }
    // cout << ln;

    int l = 0, r = n - 1;

    while(l < r) {
    	if(nums[l] == l+1) l++;
    	else if(nums[r] == r+1) r--;
    	else break;
    }

    if(l == r) cout << 0 << ln;
    else cout << (r-l+1) << ln;

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