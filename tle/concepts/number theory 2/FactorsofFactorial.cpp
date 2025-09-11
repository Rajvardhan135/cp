#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}

void solve() {
    int n;
    cin >> n;
    int fact = 1;
    for(int i=n; i>0; i--) {
    	fact *= i;
    	fact %= mod;
    }

    cout << fact << ln;

    ll count = 0;
    for(int i=1; i*i<=fact; i++) {
    	if(fact % i == 0) {
    		count++;
    		if(fact / i != i) count++;
    		cout << i << " " << (fact / i) << ln;
    	}
    }

    cout << count << ln;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}