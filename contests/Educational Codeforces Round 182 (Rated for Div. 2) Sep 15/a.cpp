#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n+1), pre(n+1, 0);
    for(int i=1; i<=n; i++) cin >> nums[i];

    for(int i=1; i<=n; i++) pre[i] = pre[i-1] + nums[i];

    for(int i=1; i<=n-2; i++) {
    	int s1 = pre[i] % 3;
    	for(int j=i+1; j<=n-1; j++) {
    		int s2 = (pre[j] - pre[i]) % 3;
    		int s3 = (pre[n] - pre[j]) % 3;
    		if(s1 == s2 && s1 == s3) {
    			cout << i << " " << j << ln;
    			return;
    		} else if(s1 != s2 && s2 != s3 && s1 != s3) {
    			cout << i << " " << j << ln;
    			return;
    		}
    	}
    }
    cout << 0 << " " << 0 << ln;
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