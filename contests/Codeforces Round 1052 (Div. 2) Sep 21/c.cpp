#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> nums(n+1), q;

    for(int i=0; i<n; i++) {
    	if(s[i] == '1') {
    		nums[i+1] = i+1;
    		q.push_back(i+1);
    	}
    }

    for(int i=0; i<q.size(); i++) {
    	cout << q[i] << " ";
    }

    if(q.size() > 0) {
    	if(q[0] == 2 || q[q.size()-1] == n-1) {
    		cout << "NO" << ln;
    		return;
    	}
    }
    cout << "YES" << ln;
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