#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}

void solve() {
    int n, m;
    cin >> n >> m;

    ll eve = 0, odd = 1;

    for(int i=0; i<n; i++) {
    	ll t;
    	if(odd < n) {
    		t = odd;
    		odd += 2;
    	} else {
    		t = eve;
    		eve += 2;
    	}
    	for(int i=0; i<m; i++) {
    		int num = (m * t) + i + 1;
    		cout << num << " ";
    	}
    	cout << ln;
    }
    cout << ln;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}