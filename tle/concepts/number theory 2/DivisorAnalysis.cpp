#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ln '\n'
ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll m) {ll res=1;while(b>0){if(b&1){res*=a;res%=m;}a*=a;a%=m;b>>=1;}return res;}
ll mul(ll a, ll b, ll m){return ((a%m)*(b%m))%m;}
ll div(ll a, ll b, ll m) {ll bInv=expo(b,mod-2,mod);return mul(a,bInv,mod);}

void solve() {
    ll count1 = 1, count2 = 1, sum = 1, prod = 1;
    ll n;
    cin >> n;
    for(int i=0; i<n; i++) {
        ll p, k;
        cin >> p >> k;

        // count1
        count1 *= (k+1);
        count1 %= mod;

        // sum
        ll gp = div(expo(p, k+1, mod)-1, p-1, mod);
        sum = mul(sum, gp, mod);
        
        // prod
        ll temp = expo(p, (k * (k+1)) / 2, mod);
        temp = expo(temp, count2, mod);
        prod = mul(temp, expo(prod, k+1, mod), mod);
        count2 = mul(count2, k+1, mod-1);
    }

    cout << count1 << " " << sum << " " << prod << ln;
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