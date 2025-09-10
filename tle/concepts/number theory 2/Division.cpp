#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}

void solve() {
    ll a, b;
    cin >> a >> b;

    if(a % b != 0) cout << a << ln;
    else {
    	int num = b - (a / b);
    	if(num <= 0) cout << 1 << ln;
    	else {
    		if(num > (a / num) || (a / num) % b == 0) cout << num << ln;
    		else cout << (a / num) << ln;
    	}
    }
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