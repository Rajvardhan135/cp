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
        map<int, int> mp;
        for(int i=2; i*i<=b; i++) {
            while(b % i == 0) {
                mp[i]++;
                b /= i;
            }
        }
        if(b > 1) mp[b] = 1;

        ll ans = 1;
        for(auto &[prime, nb] : mp) {
            // cout << prime << " " << nb << ln;
            ll na = 0;
            ll t = a;
            while(t % prime == 0) {
                t /= prime;
                na++;
            }

            int drop = na - nb + 1;
            if(drop >= 0) {
                ll num = a / expo(prime, drop, 1e64);
                if(num > ans) ans = num;
            }
            // cout << num << ln;
        } 
        cout << (ans) << ln;
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